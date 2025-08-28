#include<stdio.h>
//��2�����һ���й���ʽ�ӵ�ǰn��
//��������1 / 1 + 1 / 2 + 2 / 3 + 3 / 5 + 5 / 8 + 8 / 13 + 13 / 21
//��ǰn��ĺ͡�
//���룺һ������n(1 <= n <= 30)
//�����һ��С��������ǰn��ĺ�(����3λС��)
//����������20
//���������12.660
long long a[] = { 0 };
//�������ĸ����ʽ��ĸ��ǰ����ʽ�ӷ�ĸ�ĺ�


void solveFenMu(int n) {
	a[1] = 1;
	a[2] = 2;
		for (int i = 3; i <= n; i++)
		{
			a[i] = a[i - 1] + a[i - 2];
		}
}
double f(int n) {
	double res = 0.0;
	solveFenMu(n);
	if (n>=3)
	{
		for (int i = 3; i <= n; i++)
		{
			res = res + (double)a[i - 1] / a[i];
		}
	}
	if (n>=1)
	{
		res = res+1.0/a[1];
	}
	if (n>=2)
	{
		res = res + 1.0 / a[2];
	}
	return res;

}
int main() {
	printf("����һ������");
	int n;
	scanf_s("%d",&n);
	printf("%.3f",f(n));
	system("pause");
	return 0;
}