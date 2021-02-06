//http://codeforces.com/contest/258/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{

    string cad; cin>>cad;
    int pos;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == '0'){
            pos = i;
            break;
        }
    }

    for(int i=0;i<cad.size();i++){
        if(i != pos)cout<<cad[i];
    }
    cout<<endl;


    return 0;
}