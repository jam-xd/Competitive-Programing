#include <iostream>

using namespace std;

int main()
{
    int lineas; cin>>lineas;

    int sum = 0;
    while(lineas--){
        string cad; cin>>cad;


        if(cad == "donate"){
            int jaja; cin>>jaja;
            sum = sum + jaja;
        }

        if(cad == "report"){
            cout<<sum<<endl;
        }
    }
    return 0;
}
