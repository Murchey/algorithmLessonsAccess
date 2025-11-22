// //
// // Created by OYSmur on 2025/11/2.
// //
// #include <stdio.h>
// #include <stdlib.h>
//
// struct ListNode {
//     int element;
//     struct ListNode *next;//指向下一个节点的指针
// };
// typedef struct ListNode *Node;
// void initList(Node node) {
//     node->next=NULL;
// }
// _Bool delNode(Node head,int index) {
//     if (index<1) {return 0; }
//     while (index--) {
//         head=head->next;
//         if (head==NULL) {return 0;}
//     }
//     if (head->next==NULL) {return 0;}
//     Node temp = head->next;
//     head->next=head->next->next;
//     free(temp);
//     return 1;
// }
// _Bool insertNode(Node head,int element,int index) {
//     if (index<=0)return 0;
//     while(index--) {
//         head=head->next;
//         if (head==NULL)return 0;
//     }
//     Node node=malloc(sizeof(struct ListNode));
//     if (node==NULL)return 0;
//     node->element=element;
//     node->next=head->next;
//     head->next=node;
//     return 1;
// }
// int* getList(Node head,int index) {
//     if (index<1) {return 0;}
//     //头节点不存数据，所以do-while
//     do {
//         head=head->next;
//         if (head==NULL) {return 0;}
//     }while (--index);
//     return &head->element;
// }
// void printList(Node head) {
//     Node current=head->next;
//     while (current!=NULL) {
//         printf("%d ",current->element);
//         current=current->next;
//     }
// }
// int main() {
//     int n=0,k=0,x=0;
//     scanf("%d %d %d",&n,&k,&x);
//     //n是总卡片个数   k是操作次数  x是抽出卡片的个数
//     struct ListNode node;
//     initList(&node);
//     for(int i=1;i<=n;i++) {
//         int element;
//         scanf("%d",&element);
//         insertNode(&node,element,i);
//     }
//     //第一感觉：可以使用数据结构的链表实现
//      for (int i=0;i<k;i++) {
//          int *temp=getList(&node,x);//先读取第X张卡片
//          delNode(&node,x);//抽出第X张卡片
//          insertNode(&node,*temp,1);//把第x张卡片放到最上面
//      }//上方代码时间复杂太高
//     printList(&node);
// }
#include <stdio.h>
int main() {
    int n=0,x=0;
    long long k=0;
    scanf("%d %lld %d",&n,&k,&x);
    //n是总卡片个数   k是操作次数  x是抽出卡片的个数
    int a[n];
    for (int i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    long long validOperation=k%x;
    for (int i=0;i<n;i++) {
        if (i<x) {

        }
    }
}
