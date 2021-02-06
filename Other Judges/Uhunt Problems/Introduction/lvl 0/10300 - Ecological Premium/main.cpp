#include <iostream>

typedef long long ll;

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n,sum = 0 ; cin>>n;

        for(int i=0;i<n;i++){
            int a,b,c;
            cin>>a>>b>>c;
            sum= sum + a*c;
        }
        cout<<sum<<endl;
    }


    return 0;
}
