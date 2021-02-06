#include <bits/stdc++.h>

using namespace std;

int main()
{

    int casos; cin>>casos;


    for(int c=1;c<=casos;c++){
        deque<pair<int, string> >jaja(10);
        deque<string> answer;

        for(int i=0;i<10;i++){
            cin>>jaja[i].second>>jaja[i].first;
        }

        sort(jaja.rbegin(), jaja.rend());
        int maximo = jaja[0].first;
        cout<<"--------------------------"<<endl;

        cout<<"Case #"<<c<<":"<<endl;
        for(int i=0;i<10;i++){
                string pushear = "";
                for(int j=4;j<jaja[i].second.size();j++)pushear = pushear + jaja[i][j].first;
                cout<<"pushear: "<<pushear<<endl;
            if(jaja[i].first == maximo)answer.push_back(pushear);
        }
        sort(answer.begin(), answer.end());
        for(int i=0;i<answer.size();i++){
            cout<<answer[i]<<endl;
        }
    }

    return 0;
}
