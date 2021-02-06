//https://www.codechef.com/COOK123B/problems/SPLITIT
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<char>jaja(n);
        for(int i=0;i<n;i++)cin>>jaja[i];

        char cc = jaja[n-1];
        //cout<<cc<<endl;


        bool hay = false;
        for(int i=0;i<jaja.size()-1;i++){
                //cout<<jaja[i]<<" ";
            if(jaja[i] == cc){
                hay = true;
                break;
            }
        }
        //cout<<endl;

        if(hay == true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}