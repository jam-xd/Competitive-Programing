#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    while(scanf("%c",&c)!= EOF){
        if(c != 32 and c!=10){
            c = c - 7;
            cout<<c;
        }else cout<<c;
    }
    return 0;
}
