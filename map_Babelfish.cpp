//https://vjudge.net/contest/309949#problem/J
/*
map容器使用
*/

#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <string.h>
#include <stdio.h>
using namespace std;

int main()
{
    map<string,string>D;
    char e[15];
    char f[15];
    while(1)
    {
        char t;
        if((t=getchar())=='\n')
            break;
        else
        {
            e[0]=t;
            int i=1;
            while(true)
            {
                t=getchar();
                if(t==' ')
                {
                    e[i]='\0';
                    break;
                }
                else
                    e[i++]=t;
            }
        }
        scanf("%s",f);
        getchar();
        D.insert(make_pair(f,e));
    }
    string obj;
    while(cin>>obj)
    {
        map<string,string>::iterator iter = D.find(obj);
        if(iter==D.end())
            cout<<"eh"<<endl;
        else
            cout<<iter->second<<endl;
    }
    return 0;
}
