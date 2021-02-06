//https://www.codechef.com/LTIME87B/problems/MODEFREQ
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int n;
        cin>>n;
        deque<pair<int,int> >jaja;
        map<int,int>gg, ff;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            gg[a]++;
        }
        map<int,int>::iterator Fp;
        for(Fp = gg.begin();Fp != gg.end();Fp++){
            //cout<<"la frecuencia de " <<Fp->first<<" es "<<Fp->second<<endl;
            ff[Fp->second]++;
        }

        map<int,int>::iterator prt;
        for(prt = ff.begin();prt != ff.end();prt++){
           // cout<<"la frecuencia de " <<prt->first<<" es "<<prt->second<<endl;
            jaja.push_back(pair<int,int>(prt->first, prt->second));
        }
        sort(jaja.begin(), jaja.end());

        int resp = -1, ii=1000000000,jj;
        for(int i=0;i<jaja.size();i++){
          //  cout<<"v: "<<jaja[i].first<<" "<<jaja[i].second<<endl;
            if(jaja[i].second > resp){
                resp = jaja[i].second;
                ii = jaja[i].first;
            }
            if(jaja[i].second == resp){
                if(jaja[i].first < ii){
                    ii = jaja[i].first;
                }
            }
        }
        cout<<ii<<endl;


    }
    return 0;
}
