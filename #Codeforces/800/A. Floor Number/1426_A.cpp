//http://codeforces.com/contest/1426/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;

    while(casos--){
        int n,x; cin>>n>>x;
        int pisos=2, op=0;

        if(n == 1 || n==2)cout<<1<<endl;
        else{
            while(n>pisos){
                pisos = pisos+x;
                op++;
            }
            cout<<op+1<<endl;
        }

    }

    return 0;
}