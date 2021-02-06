#include <iostream>

using namespace std;

int main()
{
    int casos; cin>>casos;
    while(casos--){
        string cad; cin>>cad;
        string one = "one", two = "two", three = "three";


        if(cad.size() > 3)cout<<"3"<<endl;
        else{
        int diff = 0;

        for(int i=0;i<one.size();i++)if(cad[i] != one[i])diff++;
            if(diff <= 1)cout<<"1"<<endl;
            else cout<<"2"<<endl;
        }

    }


    return 0;
}
