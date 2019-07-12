/*
二维前缀和 ：  P[i][j]+=P[i-1][j]+P[i][j-1]-P[i-1][j-1] 

区间取法 :    二维棋阵中 点 x1,y1 -> x2,y2 的矩形的和值  sum = P[x2][y2]-P[x2][y1]-P[x1][y2]+P[x1][y1]
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

const int MAXN = 5010;


int P[MAXN][MAXN]= {0};

int main()
{
    int N,R;
    int x, y;
    int w;
    int s = 0;
    scanf("%d%d",&N,&R);
    while(N--)
    {
        scanf("%d%d%d",&x,&y,&w);
        P[x+1][y+1]=w;
    }
    for(int i=1;i<5001; i++)
        for(int j=1; j<5001; j++)
            P[i][j]+=P[i-1][j]+P[i][j-1]-P[i-1][j-1];
    for(int i=0; i+R<5001; i++)
        for(int j=0; j+R<5001;j++)
            s = max(s,P[i+R][j+R]-P[i+R][j]-P[i][j+R]+P[i][j]);
    cout<<s;
}
