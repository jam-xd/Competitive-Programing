//http://codeforces.com/contest/199/problem/A
#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{

    ll a,b=0,c=1,d; cin>>a;
    //if(a == 0)cout<<"0"<<endl;
    deque<ll>fibonacci;
    while(b<=a){
        fibonacci.push_back(b);
        d = b + c;
        b = c;
        c = d;
    }

    bool hay = false;
    int posi, posj, posk;

    for(int i=0;i<fibonacci.size();i++){
        for(int j=0;j<fibonacci.size();j++){
            for(int k=0;k<fibonacci.size();k++){
                if((fibonacci[i] + fibonacci[j] + fibonacci[k]) == a){
                    hay = true;
                    posi = fibonacci[i];
                    posj = fibonacci[j];
                    posk = fibonacci[k];
                }
            }
        }
    }
    //for(int i=0;i<fibonacci.size();i++)cout<<fibonacci[i]<<endl;

    if(hay == true)cout<<posi<<" "<<posj<<" "<<posk<<endl;
    else cout<<"I'm too stupid to solve this problem"<<endl;

    return 0;
}