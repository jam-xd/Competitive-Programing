//http://codeforces.com/gym/302692/problem/A
#include <bits/stdc++.h>
/// 100 pts
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010


int main()
{
    int n; cin>>n;
    deque<char>jaja(n);
    int a,b,c,d,e;
    a=b=c=d=e=0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
    }

    int cnt = 1; char current;
    for(int i=0;i<jaja.size();i++){
        //cout<<jaja[i]<<"::"<<endl;
      if(jaja[i] != jaja[i+1]){
        if(cnt == 1)cout<<jaja[i];
        else {
            cout<<cnt<<jaja[i];
        }
        cnt=1;
      }else cnt++;
    }


    return 0;
}
