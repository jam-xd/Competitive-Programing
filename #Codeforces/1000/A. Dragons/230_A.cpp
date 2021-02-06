//http://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
   int init, levels; cin>>init>>levels;

   deque<pair<int,int> >jaja;
   for(int i=0;i<levels;i++){
    int dragon, reward;
    cin>>dragon>>reward;
    jaja.push_back(pair<int,int>(dragon,reward));
   }
    sort(jaja.begin(), jaja.end());

    /*for(int i=0;i<jaja.size();i++){
        cout<<">> "<<jaja[i].first<<" "<<jaja[i].second<<endl;
    }*/


///first = dragon, second = reward;
    bool ggnomas = false;
   for(int i=0;i<jaja.size();i++){
    //cout<<"init = "<<init<<" "<<"first = "<<jaja[i].first<<endl;
    //cout<<"current init = "<<init<<endl;
    if(init > jaja[i].first){
        init = init + jaja[i].second;
    }else{
        ggnomas = true;
        break;
    }
   }

    if(ggnomas == true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;

    return 0;
}