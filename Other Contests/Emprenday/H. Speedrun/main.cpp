https://codeforces.com/gym/302692/problem/H
#include <bits/stdc++.h>
/// 35 pts
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010


int main()
{
    int n,k,t;
    bool afirmo = false;
    cin>>n>>k>>t;
    deque<pair<ll,ll> >jaja(n+1);
    jaja[0].first = 0; jaja[0].second = 0;
    for(int i=1;i<jaja.size();i++){
        cin>>jaja[i].first;
        cin>>jaja[i].second;
    }

    /*for(int i=0;i<jaja.size();i++){
        cout<<jaja[i].first<<" "<<jaja[i].second<<"::"<<endl;
    }*/

    ll time = 0, points = 0;
    int low_pointer = 0, high_pointer = 0;
    while(true){
        if(time + jaja[high_pointer].second <= t){
            time = time + jaja[high_pointer].second;
            points = points + jaja[high_pointer].first;
            high_pointer++;
        }else{
            //cout<<"ENTRA"<<endl;
            if(points >= k){
                afirmo = true;
                break;
            }else{
                points = points - jaja[low_pointer].first;
                time = time - jaja[low_pointer].second;
                low_pointer++;
            }
        }

        /*cout<<">>> P: "<<points<<" T: "<<time<<endl;
        cout<<"LOW: "<<low_pointer<<" HIGH: "<<high_pointer<<endl;
        cout<<"----------"<<endl;*/

        if(points >= k && time <= t){
            afirmo = true;
            break;
        }else if(high_pointer == n+1)break;
    }

    if(afirmo == true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;




    return 0;

    }
