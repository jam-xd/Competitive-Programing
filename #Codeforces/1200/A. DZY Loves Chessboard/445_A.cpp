//http://codeforces.com/contest/445/problem/A
#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;



int main()
{
    int n,m; cin>>n>>m;
    char jaja[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>jaja[i][j];
        }
    }

    bool b = false, w = true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(jaja[i][j] != '-'){
                if(w == true)cout<<"W";
                else if(b == true) cout<<"B";
            }else{
                cout<<"-";
            }
             w = !w;
             b = !b;
        }
        if(m%2 == 0){
            w = !w;
             b = !b;
        }

        cout<<endl;
    }



    return 0;
}