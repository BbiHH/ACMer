//https://vjudge.net/contest/309949#problem/H
/*
  集合 set 使用
*/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int T ;
    string s1,s2;
    while(cin>>T)
    {
        set<string>C;
        set<string>L;
        set<string>D;
        if(T==0)
            break;
        for(int i=0;i<T;i++)
        {
            cin>>s1>>s2;
            C.insert(s1);
            L.insert(s2);
        }
        set_difference(C.begin(),C.end(),L.begin(),L.end(),inserter(D,D.begin()));
        int ans = 0;
        set<string>::iterator p;
        for(p=D.begin();p!=D.end();p++)
            ans++;
        if(ans==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
