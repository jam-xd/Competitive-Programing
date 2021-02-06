//http://codeforces.com/contest/520/problem/B
#include <iostream>

using namespace std;

int init,este;

int main()
{
    int n,m, op = 0;
    cin>>n>>m;

    while(m>n){
        if(m%2!=0){
            m++;
            op++;
        }else{
            m = m/2;
            op++;
        }
    }
    while(n>m){
        n--;
        op++;
    }

    cout<<op<<endl;
    return 0;
}

//really?! it was that?!