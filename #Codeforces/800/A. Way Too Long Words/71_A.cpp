//http://codeforces.com/contest/71/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n;
 
    while(n--){
        string cad;
        cin>>cad;
        deque<char>v;
        for(int i=0;i<cad.size();i++){
            v.push_back(cad[i]);
        }
        m = v.size();
        if(v.size() <= 10)cout<<cad<<endl;
        if(v.size() > 10){
            cout<<v[0]<<(m-2)<<v[cad.size()-1]<<endl;
        }
        }
 
    return 0;
    
    
}
