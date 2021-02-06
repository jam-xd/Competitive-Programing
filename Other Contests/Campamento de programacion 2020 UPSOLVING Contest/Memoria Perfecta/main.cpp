#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        int n,m; cin>>n>>m;
        int answer = n*m;
        cout<<answer*1.5<<endl;
    }
    return 0;
}
