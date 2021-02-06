//http://codeforces.com/contest/1454/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010 // INT_MAX existe;
#define MAXLL 1000000000000000010

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        map<int,int>jaja;
        deque<int>jamon(n);
        for(int i=0;i<n;i++){
            cin>>jamon[i];
            jaja[jamon[i]]++;
        }
        map<int,int>::iterator it;
        deque<pair<int,int> >answers;
        for(it = jaja.begin(); it != jaja.end();it++){
            if(it->second == 1)answers.push_back(pair<int,int>(it->first, it->second));
        }

        sort(answers.begin(), answers.end());
        if(answers.size() == 0)cout<<-1<<endl;
        else{
            for(int i=0;i<jamon.size();i++){
                if(jamon[i] == answers[0].first){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        /*for(int i=0;i<answers.size();i++){
            cout<<answers[i].first<<" "<<answers[i].second<<endl;
        }*/
    }
    return 0;
}