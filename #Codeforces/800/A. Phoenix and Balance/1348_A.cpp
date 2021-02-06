//http://codeforces.com/contest/1348/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        int n,exp=2,sum1=0, sum2=0;
        cin>>n;

        deque<int>jaja(n);
        for(int i=0;i<n;i++){
            jaja[i] = exp;
            exp = exp * 2;
        }
        deque<int>lol(n/2);
        deque<int>lal(n/2);
        lol[0] = jaja[jaja.size()-1];
        sum1 = sum1 + jaja[jaja.size()-1];
        for(int i=1;i<n/2;i++){
            lol[i] = jaja[i-1];
            sum1 = sum1 + jaja[i-1];
        }
        int pos=0;
        for(int i=n/2-1;i<n-1;i++){
            lal[pos] = jaja[i];
            sum2 = sum2 + jaja[i];
            pos++;
        }
        cout<<sum1-sum2<<endl;
    }
    return 0;
}