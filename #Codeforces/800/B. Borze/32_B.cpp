//http://codeforces.com/contest/32/problem/B
#include <iostream>
using namespace std;

int main()
{
    string cad; cin>>cad;
    for(int i=0;i<cad.size();i++){


        if(cad[i] == '-' && cad[i+1] == '.'){
                cout<<"1";
                ++i;
        }else if(cad[i] == '-' && cad[i+1] == '-'){
                cout<<"2";
                ++i;
        }else if(cad[i] == '.'){
                cout<<"0";
        }


    }
    return 0;
}