//http://codeforces.com/contest/712/problem/B
//http://codeforces.com/problemset/problem/712/B
#include <iostream>

using namespace std;

int main()
{
    string cad;
    cin>>cad;

    int u=0, d=0, r=0, l=0;
    if(cad.size() % 2 == 0){
        for(int i=0;i<cad.size();i++){
            if(cad[i] == 'U')u++;
            if(cad[i] == 'D')d++;
            if(cad[i] == 'R')r++;
            if(cad[i] == 'L')l++;
        }
        int t = (max(u,d) - min(u,d));
        int tt = (max(r,l) - min(r,l));

        cout<<(t+tt)/2<<endl;

    }else cout<<"-1"<<endl;


    return 0;
}