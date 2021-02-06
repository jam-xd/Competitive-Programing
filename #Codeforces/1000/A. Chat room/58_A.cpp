//http://codeforces.com/contest/58/problem/A
#include <iostream>

using namespace std;

int main()
{
    string cad; cin>>cad;
    string original = "hello";
    int pointer = 0, acertados = 0;
    bool confirmo = false;
    for(int i=0;i<cad.size();i++){
       if(cad[i] == original[pointer]){
            pointer++;
            acertados++;
            if(acertados == original.size()){
                confirmo = true;
                break;
            }
       }
    }
    if(confirmo == true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}