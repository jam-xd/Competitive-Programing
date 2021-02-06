#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        int r = 0;
        deque<int>jaja(n);
        deque<int>jojo;
        for(int i=0;i<jaja.size();i++)cin>>jaja[i];


        int maximo = 0;
        for(int i=n-1;i>0;i--){
            maximo = max(maximo, jaja[i]);
            jojo.push_front(maximo);
        }

        for(int i=0;i<jojo.size();i++){
            if(jojo[i] > jaja[i])r++;
        }

        //for(int i=0;i<jojo.size();i++)cout<<jojo[i]<<" ";

        cout<<r<<endl;
    }
    return 0;
}
