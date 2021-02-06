#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        string cad; cin>>cad;

        int init = 1, sum = 0;
        for(int i=0;i<cad.size();i++){
            if(cad[i] == 'O'){
                sum = sum + init;
                init++;
            }else init = 1;
        }
        cout<<sum<<endl;
    }
    return 0;
}
