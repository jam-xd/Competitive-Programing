#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cad; cin>>cad;
    deque<char>ggnomas;

    int q=0, w=0, r=0, e=0;
    for(int i=0;i<cad.size();i++){
        if(cad[i] != 'R'){
            if(cad[i] == 'Q')q++;
            if(cad[i] == 'W')w++;
            if(cad[i] == 'E')e++;
            if(cad[i] == 'R')r++;

            ggnomas.push_back(cad[i]);
        }

        if(ggnomas.size() > 3){
            if(ggnomas[0] == 'Q')q--;
            if(ggnomas[0] == 'W')w--;
            if(ggnomas[0] == 'E')e--;
            if(ggnomas[0] == 'R')r--;
            ggnomas.pop_front();

        }
        //cout<<ggnomas[0]<<ggnomas[1]<<ggnomas[2]<<endl;
        bool si = false;



        if(cad[i] == 'R'){
                if(ggnomas.size() == 3){
                    if(q == 2 && w == 1)cout<<"Ghost Walk"<<endl;

                    else if(w == 2 && q == 1)cout<<"Tornado"<<endl;

                    else if(w == 2 && e == 1)cout<<"Alacrity"<<endl;

                    else if(e == 2 && w == 1)cout<<"Chaos Meteor"<<endl;

                    else if(e == 2 && q == 1)cout<<"Forge Spirit"<<endl;

                    else if(q == 2 && e == 1)cout<<"Ice Wall"<<endl;

                    else if(q == 1 && w ==1 && e == 1)cout<<"Deafening Blast"<<endl;

                    else if(q == 3)cout<<"Cold Snap"<<endl;

                    else if(w == 3)cout<<"EMP"<<endl;

                    else if(e == 3)cout<<"Sunstrike"<<endl;

                    else if(si == false)cout<<"None"<<endl;

                }else cout<<"None"<<endl;
        }
    }

    return 0;
}
