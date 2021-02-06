//http://codeforces.com/contest/1165/problem/B
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
   int n,c = 1,cc = 0;
   cin>>n;
   deque<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   sort(a.begin(), a.end());
 
   for(int i=0;i<a.size();i++){
    if( c <= a[i]){
        cc++;
        c++;
    }
   }
    cout<<cc<<endl;
}
 