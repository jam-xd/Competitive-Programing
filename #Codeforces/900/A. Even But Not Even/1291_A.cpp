//http://codeforces.com/contest/1291/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int tam,impar,impar2,numero,suma = 0,aux;
        string num;
        bool si = false;
        bool si2 = false;
        cin>>tam;
        deque<int>jaja(tam);
      // for(int i=0;i<tam;i++){
            cin>>num;
            for(int i=0;i<num.size();i++){
                 stringstream ss;
                 ss<<num[i];
                 ss>>aux;
                 jaja[i] = aux;
                 suma =+ aux;

                if(jaja[i] %2!=0 and  si == false){
                    impar2 = jaja[i];
                    si = true;
                    continue;
                }
                if(jaja[i] %2 !=0){
                    impar = jaja[i];
                    si2 = true;
                }
            }

       // }
        if(si == true and si2 == true)cout<<impar2<<impar<<endl;
        if(si == false or si2 == false)cout<<"-1"<<endl;
    }
    return 0;
}