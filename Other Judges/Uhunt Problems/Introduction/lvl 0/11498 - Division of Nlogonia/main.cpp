#include <iostream>

using namespace std;

int main()
{
    int n;
    while(cin>>n){
            if(n == 0)break;
        int gx,gy; cin>>gx>>gy;
        for(int i=0;i<n;i++){
            int x,y; cin>>x>>y;
            if(x == gx || y == gy)cout<<"divisa"<<endl;
            else if(x > gx && y > gy)cout<<"NE"<<endl;
            else if(x < gx && y > gy)cout<<"NO"<<endl;
            else if(x < gx && y < gy)cout<<"SO"<<endl;
            else cout<<"SE"<<endl;
        }
    }
    return 0;
}

