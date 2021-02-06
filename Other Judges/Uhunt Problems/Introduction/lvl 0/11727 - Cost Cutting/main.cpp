#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos; cin>>casos;
    for(int c=1;c<=casos;c++){
        vector<int>jaja(3);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];
        sort(jaja.begin(), jaja.end());
        cout<<"Case "<<c<<": "<<jaja[1]<<endl;
    }
    return 0;
}
