//http://codeforces.com/contest/1400/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int casos;
   cin>>casos;
   while(casos--){
    int n; string cad, resp="";
    cin>>n>>cad;

    if(n == 1){
        cout<<cad[0]<<endl;
    }else{
    for(int i=0;i<n;i++)resp = resp + cad[cad.size()/2];
   }
   cout<<resp<<endl;
}
    return 0;
}