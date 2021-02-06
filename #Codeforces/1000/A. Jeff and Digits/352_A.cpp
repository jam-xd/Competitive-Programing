//http://codeforces.com/contest/352/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n; cin>>n;
    deque<int>jaja(n);

    int cinco = 0, cero = 0;
    for(int i=0;i<jaja.size();i++){
        cin>>jaja[i];
        if(jaja[i] == 5)cinco++;
        if(jaja[i] == 0)cero++;
    }

    int answer5; bool si = false;
    for(int i=cinco;i>0;i--){
        if(i % 9 == 0){
            si = true;
            answer5 = i;
            break;
        }
    }

    if(si == false && cero >= 1)cout<<"0"<<endl;
    else if(cero >= 1){
        for(int i=0;i<answer5;i++)cout<<"5";
        for(int i=0;i<cero;i++)cout<<"0";
        cout<<endl;
    }else cout<<"-1"<<endl;



    return 0;
}