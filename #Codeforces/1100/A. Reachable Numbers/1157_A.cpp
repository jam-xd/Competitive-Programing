//http://codeforces.com/contest/1157/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,nop = 0;
    set<int>v;
    deque<int>vv;

        int a,aa,jj=0;
        cin>>a;
        aa = a;
        while(true){
                jj++;
        while(a%10 != 0){
            v.insert(a);
           // cout<<a<<endl;
            vv.push_back(a);
            a++;
        }

        while(a%10 == 0){
            a = a/10;
        }
        if(v.size() < vv.size())break;

    }
    if(aa ==  10){
    cout<<v.size()+10<<endl;
    v.clear();
    }

    if(aa != 10)cout<<v.size()<<endl;
    v.clear();

    return 0;
}