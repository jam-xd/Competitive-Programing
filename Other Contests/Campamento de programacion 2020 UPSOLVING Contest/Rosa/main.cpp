#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n,m; cin>>n>>m;
        char c;
        int sum = 0, xd;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            cin>>c;
            if(c != 'R'){
                stringstream ss;
                ss<<c;
                ss>>xd;
                sum = sum + xd;
            }
        }
        }

        cout<<sum<<endl;
    }
    return 0;
}
