#include <bits/stdc++.h>

using namespace std;

int toInt(string ggnomas){

    int sum = 0, xd;
    stringstream ss;
    ss<<ggnomas;
    ss>>xd;

    return xd;

}
int main()
{
    int casos; cin>>casos;
    while(casos--){
        bool furula = false;
        string cad; cin>>cad;
        int a,b; cin>>a>>b;

        int div = 1;
        while(div != cad.size()){

            string n1="",n2="";

            for(int i=0;i<div;i++)n1 = n1 + cad[i];
            for(int i=div;i<cad.size();i++)n2 = n2 + cad[i];

            //cout<<n1<<" "<<n2<<endl;


            if(toInt(n1)%a == 0 && toInt(n2)%b ==0)furula = true;
            n1.clear();
            n2.clear();
            div++;
        }

    if(furula == true)cout<<"SI"<<endl;
    else cout<<"NO"<<endl;



    }
    return 0;
}
