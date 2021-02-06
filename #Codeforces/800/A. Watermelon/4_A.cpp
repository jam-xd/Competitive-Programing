//http://codeforces.com/contest/4/problem/A
#include <iostream>

using namespace std;

int main()
{
    int a,b=2,c=0,cnt = 0;
   cin>>a;
    while((b+c) < a){
        cnt++;
        if(cnt%2==0){
            b = b + 2;
        }else{
        c = c+2;
         }
        }
        if(b + c == a && b>0 && c>0)cout<<"YES"<<endl;
         if(b + c != a || c==0)cout<<"NO"<<endl;

    return 0;
}

