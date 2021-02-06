//http://codeforces.com/contest/1326/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){
        int n;
        string cad = "23";
        cin>>n;

        if(n == 0 or n==1){
            cout<<"-1"<<endl;
        }else{
        for(int i=0;i<n-2;i++){
            cad = cad + '3';
        }
        cout<<cad<<endl;
        }
    }
    return 0;
}