// ��1��ʹ�õݹ麯�����ȱ�����
// ����������һ������n������ȱ�����2 4 8 16 32...�ĵ� n���ֵ��
// ���룺һ������n
// �����һ���������ȱ����еĽ��
// ����������6
// ���������64
#include <stdio.h>
long long geometricProgression(int itemNum) {
    //commonRatio�ǹ���2��itemNum������
    long long res;
    if (itemNum == 1)
    {
        res=2;
    }
    else {
        res=geometricProgression(itemNum-1)*2;
    }
    return res;
}//�ȱ�����

int main() {
    int n = 1;
    printf("������һ��������");
    scanf_s("%d", &n);
    printf("%lld\n", geometricProgression(n));
    system("pause");
    return 0;
}