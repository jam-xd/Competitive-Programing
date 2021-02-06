//http://codeforces.com/contest/214/problem/A
#include <iostream>
//https://codeforces.com/problemset/problem/214/A
//NOT SOLVED YET
using namespace std;

int main()
{
    int n,m; cin>>n>>m;
    int answer = 0;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if((i*i)+j == n && i + (j*j) == m)answer++;
        }
    }

    cout<<answer<<endl;
    return 0;
}