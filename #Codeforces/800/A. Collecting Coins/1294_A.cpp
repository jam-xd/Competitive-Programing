//http://codeforces.com/contest/1294/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        deque<int>jaja(3);
        for(int i=0;i<3;i++){
            cin>>jaja[i];
        }
        long long n;
        cin>>n;

        sort(jaja.begin(), jaja.end());
        long long efe = jaja[jaja.size()-1];
        efe = efe*2;
        efe = efe - (jaja[0]+jaja[1]);


        n = n-efe;
        if(n>=0){
            if(n%3 == 0){
                cout<<"YES"<<endl;
            }else{
            cout<<"NO"<<endl;
            }
        }else
            cout<<"NO"<<endl;
        }
    return 0;
}