#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;
    for(int i=1;i<=casos;i++){
        int a,b,c; cin>>a>>b>>c;
        if(a<=20 and b<= 20 and c<=20)cout<<"Case "<<i<<": "<<"good"<<endl;
        else cout<<"Case "<<i<<": "<<"bad"<<endl;

    }
    return 0;
}
