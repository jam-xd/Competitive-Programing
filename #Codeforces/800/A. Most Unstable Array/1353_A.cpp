//http://codeforces.com/contest/1353/problem/A
#include <iostream>

using namespace std;

int main()
{
    //Problem A MOst UNstable Array
    int casos;
    cin>> casos;

    while(casos--){
    int ntam,nsum;
    cin>>ntam>>nsum;

    if(ntam >=3){
        cout<<nsum*2<<endl;
    }

    if(ntam == 1){
            cout<<"0"<<endl;
    }
    if(ntam == 2){
        cout<<nsum<<endl;
    }
    }
    return 0;
}