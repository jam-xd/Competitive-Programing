//http://codeforces.com/contest/1165/problem/A
#include <iostream>
#include <cstdio>
#include <string.h>
 
using namespace std;
 
int main()
{
    int n,x,y,a=0,z=0;
    scanf("%d %d %d",&n,&x,&y);
    string s;
    cin>>s;
    int m=n-x,t=n-y-1;
    for(int i=m;i<s.size();i++){
        if(i==t){
            if(s[i]=='0')a++;
        }
        else{
            if(s[i]=='1')a++;
        }
 
    }
    printf("%d",a);
    return 0;
}