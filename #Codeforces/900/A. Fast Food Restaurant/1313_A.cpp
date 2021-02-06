//http://codeforces.com/contest/1313/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int casos;
   cin>>casos;

   while(casos--){

    deque<int>abc(2);
    cin>>abc[0]>>abc[1]>>abc[2];
    sort(abc.begin(), abc.end());
    int platos = 0;

    if(abc[0]>0){
    abc[0]--;
    platos++;
    }
    if(abc[1]>0){
    abc[1]--;
    platos++;
    }
    if(abc[2]>0){
    abc[2]--;
    platos++;
    }

    if( abc[1]>0 and abc[2]>0){
        abc[1]--;
        abc[2]--;
        platos++;
    }
    if(abc[0]>0 and abc[1]>0 ){
        abc[0]--;
        abc[1]--;
        platos++;
    }
    if(abc[0]>0  and abc[2]>0){
            abc[0]--;
            abc[2]--;
            platos++;
    }
    if(abc[0]>0 and abc[1]>0 and abc[2]>0){
        abc[0]--;
        abc[1]--;
        abc[2]--;
        platos++;
    }
    cout<<platos<<endl;
   }
    return 0;
}