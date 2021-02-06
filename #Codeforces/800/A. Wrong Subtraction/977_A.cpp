//http://codeforces.com/contest/977/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
int const MOD = 10e9+7;


int main()
{
    string a; int op;
    cin>>a>>op;
    deque<char>jaja;
    for(int i=0;i<a.size();i++)jaja.push_back(a[i]);

    while(op--){
        if(jaja[jaja.size()-1] == '0'){
            jaja.pop_back();
            a="";
            for(int i=0;i<jaja.size();i++)a = a + jaja[i];
        }else{
            int aa;
            stringstream ss;
            ss<<a;
            ss>>aa;
            //cout<<"(int)"<<aa<<endl;
            aa--;

            stringstream gg;
            gg<<aa;
            gg>>a;

            jaja.clear();
            for(int i=0;i<a.size();i++)jaja.push_back(a[i]);
        }


    }

    cout<<a<<endl;



    return 0;
}