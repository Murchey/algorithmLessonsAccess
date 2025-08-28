#include <stdio.h>
#include <stdlib.h>

typedef int E;//E == Element
struct List {
	E * array;
	int capacity;//数组的容量
	int size;
};
//初始化数组
_Bool initList(struct List *list) {
	list->capacity = 10;
	list->size = 0;
	list->array = malloc(sizeof(E)* list->capacity);
	if (list->array == NULL) {
		return 0;//创建动态内存空间失败的时候返回false
	}
	return 1;
}
//由于不知道数据大小，所以创建动态内存
//(*结构体名称).结构内某数据 ==结构体->结构内某数据
//插入数据
_Bool insertList(struct List *list,E element,int index ) {
	//插入前需要检查插入操作的合法性
	if (index<1 || index>list->size+1){return 0;}//不合法操作
	//实现扩容操作
	if (list->size==list->capacity) {
		int newCapacity = list->capacity * 2;
		E * newArray = realloc(list->array,newCapacity*sizeof(E));
		if (newArray == NULL) {return 0;}
		list->array = newArray;
		list->capacity = newCapacity;
	}
	//index 从某个位置后面插入数据
	for (int i = list->size; i > index-1; i--) {
			//关于为什么i要大于index-1的解释：
			// 重点就是，索引位置（size）其实是空的，由于使用数组要从第[1]位开始使用。
			// 那么就是要把[size-1]的数据给[size]
			// 同理，[i]的数据就被赋值为[i-1]
		list->array[i] = list->array[i - 1];//把元素都向前移动
	}
	list->array[index-1] = element;//要插入的元素就插入在索引位置
	list->size++;//由于插入了，数组的size要增加1
}



//列出List内容
void printList(struct List *list) {
	for (int i = 0; i < list->size; ++i) {
		printf("%d ", list->array[i]);
	}
	printf("\n");
}

//删除数据
_Bool deleteElement(struct List *list,int index) {
	//首先检测操作合法性
	if (index==0||index>list->size) {
		return 0;//操作不合法
	}
	for (int i = index-1; i < list->size-1; ++i) {
		list->array[i] = list->array[i+1];
	}
	list->size--;
}

//获取长度
int sizeList(struct List* list) {
   return list->size;
}

//获取指定位置上的元素
E * getList(struct List *list,int index) {
	if (index<1 || index>list->size) {
		return NULL;//没有获取到index位置的数据
	}
	return &list->array[index-1];
}

//找到指定值
int findList(struct List *list,E element) {
	for (int i = 0; i < list->size; ++i) {
		if (list->array[i] == element) {return i+1;}
	}
	return -1;//由于是元素的位置，所以不可能存在-1
}

int main(){
	struct List list;
	if (initList(&list)) {
		for (int i = 0; i < 30; i++) {
			insertList(&list,i*10,i+1);
		}
		deleteElement(&list,10);
		deleteElement(&list,10);
		printList(&list	);
		printf("\n当前列表长度：%d",list.capacity);
		printf("\ngetList(5)：%d",*getList(&list,5));
		printf("\nfindList:%d",findList(&list,10));
	}else {
		printf("初始化列表失败");
	}

	return 0;
}