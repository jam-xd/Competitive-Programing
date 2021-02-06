//http://codeforces.com/contest/118/problem/B
#include <bits/stdc++.h>

typedef long long ll;
typedef long double dbl;

using namespace std;

int main()
{
    int n; cin>>n;
    //n++;
    int espacios = n*2;
    espacios--;
    for(int i=0;i<n;i++){
        for(int j=espacios;j>=0;j--)cout<<" ";
        espacios = espacios-2;
     // if(i == 0)cout<<"0"<<endl;
        for(int j=0;j<i;j++)cout<<j<<" ";
        for(int j=i;j>0;j--)cout<<j<<" ";
        cout<<0;
        cout<<endl;
    }

   // cout<<endl;
  //  cout<<endl;

    for(int i=n;i>=0;i--){
        //if(i==0)aux=aux-2;
        for(int j=espacios;j>=0;j--)cout<<" ";
        espacios = espacios+2;
        for(int j=0;j<i;j++)cout<<j<<" ";
        for(int j=i;j>0;j--)cout<<j<<" ";
        cout<<0;
        cout<<endl;
    }

    return 0;
}