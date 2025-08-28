////��1�����ӳ���
////����������ժ��һ�����ӣ���һ�����һ��֮������һ��
////���ڶ���ͬ������һ���һ����֮��ÿ����ˣ�
////����ʮ��ֻʣ��һ�����ӣ��ʣ��ڵ�һ��ժ�˶��� ?
////���룺��
////�����һ����������ʾ��һ��ժ�˶��ٸ�����
#include <stdio.h>
int peachNum() {
	int res = 0;
	for (int day = 10; day >=1; day--)
	{
		if (day==10)
		{
			res = 1;
		}
		else
		{
			res=(res + 1) * 2;
		}
	}
	return res;
}
int main() {
	printf("%d\n",peachNum());
	system("pause");
	return 0;
}