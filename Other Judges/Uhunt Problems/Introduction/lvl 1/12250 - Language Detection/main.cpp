#include <iostream>

using namespace std;

int main()
{
    string cad;
    int out = 1;
    while(cin>>cad){
            if(cad == "#")break;
            cout<<"Case "<<out<<": ";
        if(cad == "HELLO")cout<<"ENGLISH"<<endl;
        else if(cad == "HOLA")cout<<"SPANISH"<<endl;
        else if(cad == "HALLO")cout<<"GERMAN"<<endl;
        else if(cad == "BONJOUR")cout<<"FRENCH"<<endl;
        else if(cad == "CIAO")cout<<"ITALIAN"<<endl;
        else if(cad == "ZDRAVSTVUJTE")cout<<"RUSSIAN"<<endl;
        else cout<<"UNKNOWN"<<endl;
    out++;

    }
    return 0;
}
