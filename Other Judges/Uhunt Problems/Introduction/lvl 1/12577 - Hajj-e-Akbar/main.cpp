#include <iostream>

using namespace std;

int main()
{
    string cad;
    int out =1;

    while(cin>>cad){
        if(cad == "*")break;
        if(cad == "Hajj")cout<<"Case "<<out<<": Hajj-e-Akbar"<<endl;
        else cout<<"Case "<<out<<": Hajj-e-Asghar"<<endl;

        out ++;
    }
    return 0;
}
