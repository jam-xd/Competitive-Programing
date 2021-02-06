#include <iostream>

using namespace std;

int main()
{
    int n,m;
    while(cin>>n>>m){
        if(n == -1 && m == -1)break;
        int r1=0, r2=0;

        if(n > m){
            r1 = n-m;
            r2 = 100-n+m;
        }else{
            r1= m-n;
            r2 = 100-m+n;
        }

        cout<<min(r1,r2)<<endl;

    }
    return 0;
}
