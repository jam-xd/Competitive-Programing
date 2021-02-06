//http://codeforces.com/contest/439/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int canciones, tiempo;
    cin>>canciones>>tiempo;

    deque<int>gg(canciones);

    int sum = 0;
    for(int i=0;i<canciones;i++){
        cin>>gg[i];
        sum = sum + gg[i];
    }

    if(sum + (canciones-1)*10 > tiempo)cout<<"-1"<<endl;
    else{
        int r = (tiempo - sum) / 5;
        cout<<r<<endl;
    }


    return 0;
}