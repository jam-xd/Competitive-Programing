//http://codeforces.com/contest/80/problem/A
#include <bits/stdc++.h>
using namespace std;

bool isPrime (int ggnomas){
    bool es = true;
    for(int i=2;i<=sqrt(ggnomas);i++){
        if(ggnomas % i == 0){
            es = false;
            break;
        }
    }

    if(es == true)return true;
    else return false;
}

int main()
{

    int n,nn; cin>>n>>nn;
    int nextPrime;

    int init = n+1;
    while(true){
        if(isPrime(init) == true){
            nextPrime = init;
            break;
        }
        init++;
    }

    //cout<<nextPrime<<" "<<nn<<endl;
    if(nextPrime != nn)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}