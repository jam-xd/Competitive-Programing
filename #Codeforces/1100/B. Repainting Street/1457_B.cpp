//http://codeforces.com/contest/1457/problem/B
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{

   int casos; cin>>casos;
   while(casos--){
    int n,k; cin>>n>>k;
    deque<int>jaja(n);
    for(int i=0;i<n;i++)cin>>jaja[i];

    int answer = 100000;
    for(int i=1;i<=100;i++){
            int ggnomas = 0;
            int pointer = 0;
            while(pointer < jaja.size()){
                if(jaja[pointer] != i){
                    pointer = pointer + k;
                    ggnomas++;
                }else pointer++;
            }
            answer = min(answer, ggnomas);
    }
    cout<<answer<<endl;


   }





    return 0;
}