//http://codeforces.com/gym/302692/problem/E
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
    deque<int>jaja(n), jojo(n);
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        jojo[i] = jaja[i];
    }

    int op1 = 0;
    while(true){
        if(jaja[0] > jaja[n-1]){///izq
            op1++;
            int aux = jaja[0];
            jaja.pop_front();
            jaja.push_back(aux);

        }else break;
    }

    int op2 = 0;
    while(true){
        if(jojo[n-1] < jojo[0]){///drch
            op2++;
            int aux = jojo[n-1];
            jojo.pop_back();
            jojo.push_front(aux);
            /*for(int i=0;i<jojo.size();i++)cout<<jojo[i]<<" ";
            cout<<endl;*/
        }else break;
    }

    /*jaja.pop_back();
    for(int i=0;i<jaja.size();i++){
        cout<<jaja[i]<<" ";
    }*/


    cout<<min(op1,op2)<<endl;
    return 0;
}



    cout<<min(op1,op2)<<endl;
    return 0;
}