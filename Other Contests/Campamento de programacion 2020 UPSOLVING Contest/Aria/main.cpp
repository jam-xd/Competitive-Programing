#include <bits/stdc++.h>

using namespace std;

int main()

{
    int n,k; cin>>n>>k;

    deque<pair<int,int> >jaja(n);
    deque<int>R;
    deque<int>M;
    int ggnomas[n];
    for(int i=0;i<n;i++)ggnomas[i] = 0;
    //cout<<ggnomas[0]<<endl;

    //deque<char>answer(n+2);

    for(int i=0;i<n;i++){
        cin>>jaja[i].first;
        jaja[i].second = i;
    }

    sort(jaja.rbegin(), jaja.rend());

    /*for(int i=0;i<jaja.size();i++){
        cout<<jaja[i].first<<"["<<jaja[i].second<<"] ";
    }*/

    bool turno = false;
    // false = R, true = M;

    for(int i=0;i<jaja.size();i++){

        if(ggnomas[jaja[i].second] > 0)continue;

        int antidesborde = jaja[i].second-k;
        if(antidesborde < 0)antidesborde = antidesborde + abs(antidesborde);

        int llegar = jaja[i].second+k;
        if(llegar > n)llegar = llegar - abs(n-llegar);

        //cout<<"Punteros "<<antidesborde<<" "<<llegar<<endl;

        if(turno == false){
               // cout<<jaja[i].second-k<<" "<<jaja[i].second+k<<endl;
            for(int j = antidesborde; j<=llegar;j++){
                if(j >= 0 && j<n && ggnomas[j] != 2 && ggnomas[j] != 1){
                    //R.push_back(jaja[j].second);
                    ggnomas[j] = 1;
                    //answer = answer + "R";
                }
            }
            turno = true;

        }else if (turno == true){
            for(int j = antidesborde; j<=llegar;j++){
                if(j >= 0 && j<n && ggnomas[j] != 2 && ggnomas[j] != 1){
                    //R.push_back(jaja[j].second);
                    ggnomas[j] = 2;
                    //answer = answer + "M";
                }
            }
            turno = false;
        }
    }

    string answer = "";
    for(int i=0;i<n;i++){
        if(ggnomas[i] == 1)answer = answer + "R";
        else if(ggnomas[i] == 2)answer = answer + "M";
    }

    cout<<answer<<endl;
    //cout<<endl;

    return 0;
}
