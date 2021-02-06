#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;
    for(int i=0;i<casos;i++){
        int n; cin>>n;

        int maximo = 0;
        for(int j=0;j<n;j++){
            int ggnomas; cin>>ggnomas;
            if(ggnomas > maximo)maximo = ggnomas;
        }

        cout<<"Case "<<i+1<<": "<<maximo<<endl;
    }
    return 0;
}
