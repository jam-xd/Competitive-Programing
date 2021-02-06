//http://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cad,caddd;
    cin>>cad>>caddd;

    for(int i=0;i<cad.size();i++){
        if(cad[i] < 97)cad[i] = cad[i] + 32;
    }
    for(int i=0;i<caddd.size();i++){
        if(caddd[i] < 97)caddd[i] = caddd[i] + 32;
    }

    if(cad < caddd)cout<<"-1"<<endl;
    if(cad == caddd)cout<<"0"<<endl;
    if(cad > caddd)cout<<"1"<<endl;


    return 0;
}