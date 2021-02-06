//http://codeforces.com/contest/266/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, seg; cin>>n>>seg;
    deque<char>fila(n);

    for(int i=0;i<fila.size();i++)cin>>fila[i];


    int init = 0;
    for(int j=init;j<seg;j++){
        for(int i=0;i<fila.size()-1;i++){
            if(fila[i] == 'B' && fila[i+1] == 'G'){
                swap(fila[i], fila[i+1]);
                ++i;
            }
        }
        init++;
    }

    for(int i=0;i<fila.size();i++)cout<<fila[i];
    cout<<endl;


    return 0;
}