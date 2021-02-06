//http://codeforces.com/contest/1370/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int casos;
   cin>>casos;

   while(casos--){
    int n;
    cin>>n;
    if(n % 2 == 0)cout<<n/2<<endl;
    else cout<< (n-1)/2<<endl;
   }
    return 0;
}