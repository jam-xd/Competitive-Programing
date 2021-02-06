//http://codeforces.com/contest/1283/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;
    while(casos--){

    int horas, minutos;
    int minutosss = 0;

    cin>>horas>>minutos;

    while(true){
            if(horas == 24 and minutos ==0)break;
    minutos++;
    minutosss++;



    if(minutos ==  60){
        horas++;
        minutos=0;
    }
    }
    cout<<minutosss<<endl;
    }
    return 0;
}