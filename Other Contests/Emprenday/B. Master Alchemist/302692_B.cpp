//http://codeforces.com/gym/302692/problem/B
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

    ull n,m;
    cin>>n>>m;
    deque<ull>jaja(n);
    for(int i=0;i<n;i++)scanf("%lld", &jaja[i]);

    sort(jaja.begin(), jaja.end());

    ull answer = 0;
    int high_pointer = n-1LL,  low_pointer = 0LL;
    while(true){
        if(high_pointer <= low_pointer)break;
        if(jaja[low_pointer] + jaja[high_pointer] == m){
                //cout<<jaja[low_pointer]<<" "<<jaja[high_pointer]<<endl;
            low_pointer++;
            high_pointer--;
            answer++;
        }else{
            if(jaja[high_pointer] >= m-jaja[low_pointer]){
                high_pointer--;
            }else low_pointer++;
        }


    }
    printf("%lld", answer);


    return 0;
}
