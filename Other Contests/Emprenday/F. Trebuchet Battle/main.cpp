///https://codeforces.com/gym/302692/problem/F
#include <bits/stdc++.h>
/// 75 pts
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;
#define MAXINT 1000000010
#define MAXLL 1000000000000000010


int main()
{
    //matate :v

    string cad; cin>>cad;
    deque<int>t;
    int op=0;
    bool nel = false;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == 't')t.push_front(i);
        if(cad[i] == 'e'){
            if(t.size() > 0){
                op = op + i-t[0];
                t.pop_front();
            }else{
                nel = true;
                break;
            }

        }
    }

    if(nel == false)cout<<op<<endl;
    else cout<<"Get Rekt"<<endl;



    return 0;
}
