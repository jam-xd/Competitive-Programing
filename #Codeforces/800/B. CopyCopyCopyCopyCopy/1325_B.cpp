//http://codeforces.com/contest/1325/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{
   //B
   int casos;
   cin>>casos;
   set<int>x;

   while(casos--){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int efe;
        cin>>efe;
        x.insert(efe);
    }
    cout<<x.size()<<endl;
    x.clear();
   }
    return 0;
}