#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    int casos; cin>>casos;
    while(casos--){
        ll n; cin>>n;

        deque<ll>jaja(n), jojo(n);

        int initt = 5;
        for(int i=0;i<jojo.size();i++){
            jojo[i] = initt;
            initt = initt +2;
        }

        jaja[0]= 4;
        for(int i=1;i<jaja.size();i++){
            jaja[i] = jaja[i-1] + jojo[i-1];
        }

        deque<ll>answer;
        answer.push_back(1);
        for(int i=1;i<jaja.size();i++){
            answer.push_back(answer[i-1]+jaja[i-1]);
        }

        cout<<answer[answer.size()-1]<<endl;
    }
    return 0;
}
