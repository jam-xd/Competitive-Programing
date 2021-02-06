//http://codeforces.com/contest/271/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    n++;
    set<char>x;

    while(true){
        int ggnonas, xd;
        string cad;
        stringstream ss;

        ss<<n;
        ss>>cad;

        //cout<<cad<<endl;
        for(int i=0;i<cad.size();i++){
            x.insert(cad[i]);
        }

        if(x.size() == cad.size()){
            cout<<cad<<endl;
            break;
        }else {
            n++;
            x.clear();
        }



    }



    return 0;
}