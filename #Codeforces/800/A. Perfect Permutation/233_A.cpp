//http://codeforces.com/contest/233/problem/A
#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n;
    if(n == 1 || n%2 != 0){
        cout<<"-1"<<endl;
        return 0;
    }

    for(int i=2;i<=n;i=i+2){
        cout<<i<<" "<<i-1<<" ";
    }
    return 0;
}