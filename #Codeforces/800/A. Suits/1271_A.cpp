//http://codeforces.com/contest/1271/problem/A
#include <iostream>

using namespace std;

int main()
{
    int tie,scarve,vest,jacket, suit1,suit2,suma=0,sumaa=0;
    cin>>tie>>scarve>>vest>>jacket>>suit1>>suit2;
    bool lol,pop,lolsi,popsi;
// suit 1 = tie + jacket
    // suit 2 = scarve + vest + jacket



    if(suit2 > suit1){
    while(scarve>0 and vest>0 and jacket>0){
        jacket--;
        vest--;
        scarve--;
        sumaa = sumaa + suit2;

    }
    while(tie >0 and jacket >0){
        tie --;
        jacket--;
        suma = suma + suit1;
    }
    }
    ///////////////////////////////////////////////////////////////
    if(suit1 >= suit2){
    while(tie >0 and jacket >0){
        tie --;
        jacket--;
        suma = suma + suit1;
    }
     while(scarve>0 and vest>0 and jacket>0){
        jacket--;
        vest--;
        scarve--;
        sumaa = sumaa + suit2;

    }
    }


    cout<<suma+sumaa<<endl;
    return 0;
}