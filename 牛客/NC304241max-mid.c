 //
 // Created by OYSmur on 2025/10/26.
 //
#include <stdio.h>
int main() {
    int round=0;
    int index=0;//答案数组的索引
    int res[101]={0};//答案数组
    scanf("%d",&round);
    while(round--) {
        int n=0,k=0;
        scanf("%d %d",&n,&k);
        int cnt0=0,cnt1=0;
        for(int i=1;i<=n;i++) {
            int tmp=0;
            scanf("%d",&tmp);
            tmp==0?cnt0++:cnt1++;
        }//统计出0的个数和1的个数
        int mid=0,max=0;
        //主要思路就是尽可能的选择0
        if (cnt0<k) {
            max=1;//不得已才选择1
        }
        if (cnt1>k/2&&max!=0) {
            //当1的个数大于选中数的一半的时候，并且最大数不为0
            mid=1;
        }
        res[index++]=max-mid;
    }
    for (int i = 0; i < index; i++) {
        printf("%d\n",res[i]);
    }
}