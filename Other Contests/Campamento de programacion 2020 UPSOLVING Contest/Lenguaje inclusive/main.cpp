#include <iostream>

using namespace std;

int main()
{
    string cad;
    while(getline(cin,cad)){
        for(int i=0;i<cad.size();i++){
            if(cad[i] != 'A' && cad[i] != 'E'
            && cad[i] != 'I' && cad[i] != '0'
            && cad[i] != 'U' and cad[i] != 'a'
            && cad[i] != 'e' && cad[i] != 'i'
            && cad[i] != 'o' && cad[i] != 'u'){
                cout<<cad[i];
            }else cout<<"x";
        }
        cout<<endl;
    }
    return 0;
}
