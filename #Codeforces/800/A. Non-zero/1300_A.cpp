//http://codeforces.com/contest/1300/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
       int tam,operaciones = 0;
       int sum = 0, producto = 1;
       cin>>tam;

       deque<int>jaja(tam);
       for(int i=0;i<tam;i++){
        cin>>jaja[i];
        if(jaja[i] == 0){
            operaciones++;
            jaja[i]++;
        }
       }

       for(int i=0;i<jaja.size();i++){
        sum = sum + jaja[i];
        producto = producto * jaja[i];
    }
    if(producto != 0 and sum != 0){
        cout<<operaciones<<endl;
    }else{
    while(true){
        for(int i=0;i<jaja.size();i++){
            sum = sum + jaja[i];
        }
        if(sum == 0){
            jaja[0]++;
            operaciones++;

        }
        if(sum !=  0){
            cout<<operaciones<<endl;
            break;

        }
    }
    }


    }
    return 0;
}