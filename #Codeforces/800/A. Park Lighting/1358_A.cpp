//http://codeforces.com/contest/1358/problem/A
#include <iostream>

using namespace std;

int main()
{

    int casos;
    cin>>casos;
    while(casos--){
        int n,m;
        cin>>n>>m;

        if((n*m)%2 == 0 )cout<<n*m/2<<endl;
        if((n*m)%2 != 0 )cout<<n*m/2+1<<endl;

    }
    return 0;
}