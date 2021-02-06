#include <iostream>

using namespace std;

int main()
{
    int casos;cin>>casos;
    for(int i=1;i<=casos;i++){
        int n,k,p; cin>>n>>k>>p;

        while(p--){
            if(k+1 > n)k = 0;
            k++;

        }
        cout<<"Case "<<i<<": "<<k<<endl;
    }
    return 0;
}
