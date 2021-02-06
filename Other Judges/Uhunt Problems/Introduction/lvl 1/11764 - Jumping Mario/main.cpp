#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos; cin>>casos;
    for(int c=0;c<casos;c++){
        int n; cin>>n;
        deque<int>jaja(n);
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];

        int g=0, p=0;
        for(int i=0;i<jaja.size()-1;i++){
            if(jaja[i] < jaja[i+1])g++;
            if(jaja[i] >  jaja[i+1])p++;
        }

        cout<<"Case "<<c+1<<": "<<g<<" "<<p<<endl;

    }
    return 0;
}
