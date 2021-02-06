//http://codeforces.com/contest/433/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n; cin>>n;
    int cien = 0, doscientos= 0, sum = 0;
    for(int i=0;i<n;i++){
        int a; cin>>a;
        sum = sum + a;
        if(a == 100)cien++;
        if(a == 200)doscientos++;
    }

    if(sum % 200 == 0 && cien>=1)cout<<"YES"<<endl;
    else if(sum % 400 == 0 && doscientos >=2 && cien == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}