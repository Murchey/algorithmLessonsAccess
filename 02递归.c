#include<stdio.h>
//��2��ʹ�õݹ麯�����׳�
//���׳˾�����5�Ľ׳ˣ�5!= 5 * 4 * 3 * 2 * 1)
//����������һ������n�����n�Ľ׳˽����
//���룺һ������n
//�����һ��������n!�Ľ��
//����������5
//���������120

long long factorial(int n) {//�׳�
	long long res;
	if (n==0)
	{
		res = 1;
	}
	else
	{
		res = n * factorial(n - 1);
	}
	return res;
}

int main() {
	int n;
	printf("����һ������");
	scanf_s("%d",&n);
	printf("%lld",factorial(n));
	system("pause");
	return 0;
}