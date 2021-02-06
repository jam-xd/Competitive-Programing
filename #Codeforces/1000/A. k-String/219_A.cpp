//http://codeforces.com/contest/219/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    string cad; cin>>cad;

    map<char,int>jaja;
    for(int i=0;i<cad.size();i++){
        jaja[cad[i]]++;
    }

    bool confirmo = true;
    deque<char>ggnomas(cad.size());
    for(int i=0;i<cad.size();i++)ggnomas[i]  = cad[i];
    sort(ggnomas.begin(), ggnomas.end());

    map<char,int>::iterator it;
    for(it = jaja.begin(); it != jaja.end();it++){
        if(/*it->second % n != 0 ||*/ it->second < n || it->second % n != 0){
            confirmo = false;
            break;
        }
        //cout<<"Repeticiones de :"<<it->first<<" es :"<<it->second<<endl;
    }

    //for(int i=0;i<ggn
    //for(int i=0;i<ggnomas.size();i++)cout<<ggnomas[i].first<<" "<<ggnomas[i].second<<endl;
    if(confirmo == false)cout<<"-1"<<endl;
    else{
        for(int i=0;i<n;i++){
            for(int j=i;j<ggnomas.size();j=j+n){
                cout<<ggnomas[j];
            }
        }
    }
    cout<<endl;


    return 0;
}