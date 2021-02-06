//http://codeforces.com/contest/231/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, aux=0, ok = 0;
    cin>>n;
    int copia = n;
    deque<int>jaja(n);
    while(n--){
        for(int i=0;i<3;i++){
            cin>>jaja[i];
            if(jaja[i] == 1)aux++;
        }
        if(aux > 3/2)ok ++;
        aux = 0;
    }
    cout<<ok<<endl;
    return 0;
}
