//http://codeforces.com/contest/160/problem/B
#include <bits/stdc++.h>
//https://codeforces.com/problemset/problem/160/B
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010

int main()
{
    int n; cin>>n;
    deque<char>jaja(2*n);
    deque<int>first, second;

    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        stringstream ss; int ps;
        ss<<jaja[i];
        ss>>ps;
        if(i < n)first.push_back(ps);
        else second.push_back(ps);
    }

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    bool one, two;
    one = two = true;
    for(int i=0;i<n;i++)if(first[i] <= second[i])one = false;
    for(int i=0;i<n;i++)if(first[i] >= second[i])two = false;

    if(one == true || two == true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


   /* for(int i=0;i<first.size();i++)cout<<first[i]<<" ";
    cout<<endl;
    cout<<"---------"<<endl;
    for(int i=0;i<second.size();i++)cout<<second[i]<<" ";
    cout<<endl;*/

    return 0;
}