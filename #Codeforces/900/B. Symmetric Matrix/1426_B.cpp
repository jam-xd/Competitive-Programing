//http://codeforces.com/contest/1426/problem/B
#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;

    while(casos--){
        int n,m; cin>>n>>m;
        int nn = n;
        bool sip = false;
        while(nn--){
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            //cout<<n<<"<-- N"<<endl;
            if(m%2 == 0){
                if(b == c){
                    sip = true;
                }
            }

        }
            if(sip == true)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;


    }
    return 0;
}