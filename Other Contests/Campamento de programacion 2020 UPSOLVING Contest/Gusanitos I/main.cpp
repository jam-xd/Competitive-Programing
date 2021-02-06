#include <bits/stdc++.h>

using namespace std;

int main()
{

    int dias; cin>>dias;
    deque<pair<int, int> >jaja(dias);

    for(int i=0;i<jaja.size();i++)cin>>jaja[i].first>>jaja[i].second;

    deque<int>minimos;
    int low=1000000;
    for(int i=0;i<jaja.size();i++){
        if(jaja[i].second < low)low = jaja[i].second;
        minimos.push_back(low);
    }

    /*for(int i=0;i<minimos.size();i++)cout<<minimos[i]<<" ";
    cout<<endl;*/

    int sum = 0;
    for(int i=0;i<jaja.size();i++){
        sum = sum + jaja[i].first*minimos[i];
    }

    cout<<sum<<endl;


    return 0;
}
