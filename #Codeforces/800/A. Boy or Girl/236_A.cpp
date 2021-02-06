//http://codeforces.com/contest/236/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

   string cad;
   cin>>cad;
   set<char>x;
   for(int i=0;i<cad.size();i++){
    x.insert(cad[i]);
   }
   if(x.size() %2 != 0)cout<<"IGNORE HIM!"<<endl;
   if(x.size() %2 == 0)cout<<"CHAT WITH HER!"<<endl;
    return 0;
}