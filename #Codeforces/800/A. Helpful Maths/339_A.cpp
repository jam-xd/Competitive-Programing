//http://codeforces.com/contest/339/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{string cad;
cin>>cad;
if(cad.size() == 1){
        cout<<cad<<endl;
}
 
if(cad.size() != 1){
int jaja;
string gigi = "";
deque<char>lala;
deque<int>lolo;
for(int i=0;i<cad.size();i++){
    if(cad[i] != '+')lala.push_back(cad[i]);
}
 
for(int i=0;i<lala.size();i++){
    if(lala[i] == '1' or lala[i] == '2' or lala[i] =='3')gigi = gigi + lala[i];
 }
for(int i=0;i<gigi.size();i++){
     stringstream ss;
    ss<<gigi[i];
    ss>>jaja;
    lolo.push_back(jaja);
}
sort(lolo.begin(), lolo.end());
for(int i=0;i<lolo.size();i++){
        if(i<= lolo.size()-2 and cad.size()!= 0)cout<<lolo[i]<<"+";
        if(i == lolo.size()-1 and cad.size()!=0){
                cout<<lolo[i]<<endl;
        }
 
}
}
 
    return 0;
}

//fua chabal xd xd