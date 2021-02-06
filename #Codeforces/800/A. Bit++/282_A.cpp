//http://codeforces.com/contest/282/problem/A
#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
int n,jamon=0,r;
bool yasta=false;
cin>>n;
while(n--){
    string cad;
    cin>>cad;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == '+' && yasta == false){
                jamon++;
                yasta = true;
        }
        if(cad[i] == '-' && yasta == false){
                jamon--;
                yasta = true;
        }
    }
    yasta  =  false;
}
cout<<jamon<<endl;
    return 0;
}
