//http://codeforces.com/contest/1454/problem/C
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;


int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n; cin>>n;
        deque<int>jaja(n);
        map<int, vector<int> >ggnomas;
        for(int i=0;i<jaja.size();i++){
            cin>>jaja[i];
            ggnomas[jaja[i]].push_back(i);
        }

        map<int,vector<int> >::iterator it;
        int answer = INT_MAX;
        for(it = ggnomas.begin(); it != ggnomas.end(); it++){
            int current = 0;
            if(it->second[0] != 0)current++;
            for(int i=1;i<it->second.size();i++){
                if(it->second[i] - it->second[i-1] > 1)current++;
            }
            if(it->second[it->second.size()-1] != n-1)current++;
             answer = min(answer, current);

        }
        cout<<answer<<endl;

    }


    return 0;
}