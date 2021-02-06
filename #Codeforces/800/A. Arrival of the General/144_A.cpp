//http://codeforces.com/contest/144/problem/A
#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/144/A
//NOT SOLVED YET
using namespace std;

pair<int,int> findMaxElment(deque<int>v){
    int maximo = 0, pos;
    for(int i=0;i<v.size();i++){
        if(maximo < v[i]){
            maximo = v[i];
            pos = i;
        }
    }
    return pair<int,int>(maximo,pos);
}

pair<int,int> findMinimumElment(deque<int>v){
    int minimo = 1000000000, pos;
    for(int i=0;i<v.size();i++){
        if(minimo >= v[i]){
            minimo = v[i];
            pos = i;
        }
    }
    return pair<int,int>(minimo, pos);
}

int main()
{
    int tam; cin>>tam;
    deque<int>jaja(tam);
    for(int i=0;i<jaja.size();i++)cin>>jaja[i];

    pair<int,int> low = findMinimumElment(jaja);
    pair<int,int> high = findMaxElment(jaja);

   // cout<<"Minimo: "<<low.first<<"["<<low.second<<"]"<<endl;
    //cout<<"Maximo: "<<high.first<<"["<<high.second<<"]"<<endl;

    if(high.second > low.second)
    cout<<abs(0-high.second) + abs((tam-1) - low.second)-1<<endl;

    else cout<<abs(0-high.second) + abs((tam-1) - low.second)<<endl;

    return 0;
}