//http://codeforces.com/contest/124/problem/A
#include <iostream>

using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    //cout<<n-a<<endl;
    int answer = (n+1) - max(a, (n-b));
    if(a>=(n-b))cout<<answer-1<<endl;
    else cout<<answer<<endl;
    return 0;
}