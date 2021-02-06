//http://codeforces.com/contest/1358/problem/B
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int casos,resp;

    cin>>casos;

    while(casos--){
        int n; bool ok=false;
        cin>>n;
        deque<int>jaja(n);
        for(int i=0;i<n;i++){
            cin>>jaja[i];
        }

        sort(jaja.rbegin(), jaja.rend());
        for(int i=0;i<n;i++){
            resp = abs(i-n);
            //cout<<resp<<endl;
            if(resp >= jaja[i]){
                   // cout<<resp<<" "<<jaja[i]<<endl;
              ok = true;

              break;
            }
        }
        if(ok == true)cout<<resp+1<<endl;
        else cout<<"1"<<endl;


    }

    return 0;
}