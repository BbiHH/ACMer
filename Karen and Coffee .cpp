//https://vjudge.net/contest/309949#problem/C
/*
超时:
前缀和与差分优化
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int T[200001]={0}; // 温度出现次数
int f[200001]={0}; //差分数组
int D[200001]={0}; //区间和

int main()
{
    int n ,k ,q;
    int nT1,nT2;
    int M1=0,M2=200001;
    scanf("%d%d%d",&n,&k,&q);
    while(n--){
        scanf("%d%d",&nT1,&nT2);
        f[nT1]++,f[nT2+1]--;
        M1 = max(M1,nT2);
        M2 = min(M2,nT1);
    }
    for(int i=M2;i<=200001;i++)
    {
        T[i]=T[i-1]+f[i];
        if(T[i]>=k)
            D[i] = 1;
        D[i]+=D[i-1];
    }
    while(q--)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        if(q==0)
        cout<<D[b]-D[a-1];
        else
            cout<<D[b]-D[a-1]<<endl;
    }
    return 0;
}
