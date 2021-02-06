//http://codeforces.com/contest/186/problem/A
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

int main()
{
    string cad, cad2; cin>>cad>>cad2;
    multiset<char>x, xx;
    deque<char>cadena1, cadena2;

    if(cad.size() != cad2.size())cout<<"NO"<<endl;
    else{
        for(int i=0;i<cad.size();i++){
            x.insert(cad[i]);
            xx.insert(cad2[i]);
        }
        multiset<char>::iterator it;
        multiset<char>::iterator it2;

        for(it = x.begin(); it != x.end();it++)cadena1.push_back(*it);
        for(it2 = xx.begin(); it2 != xx.end(); it2++)cadena2.push_back(*it2);

        for(int i=0;i<cadena1.size();i++){
            if(cadena1[i] != cadena2[i]){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        int diff = 0;
        for(int i=0;i<cad.size();i++){
            if(cad[i] != cad2[i])diff++;
        }

    if(diff != 2)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    }


    return 0;
    //oof
}