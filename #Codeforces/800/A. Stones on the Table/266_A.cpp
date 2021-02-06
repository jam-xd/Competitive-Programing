//http://codeforces.com/contest/266/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    string cad; cin>>cad;
    int op = 0;
    for(int i=1;i<cad.size();i++){
        if(cad[i] == cad[i-1])op++;
    }

    cout<<op<<endl;
    return 0;
}
