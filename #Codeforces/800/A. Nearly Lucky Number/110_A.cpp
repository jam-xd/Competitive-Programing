//http://codeforces.com/contest/110/problem/A
#include <iostream>
using namespace std;

int main()
{
    string cad; cin>>cad;
    int lucky = 0;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == '4' || cad[i] == '7')lucky++;
    }
    if(lucky == 4 || lucky == 7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}