#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double dbl;

deque<deque<char> >jaja;
int dist;

 void floodFill(int x, int y, int tam){
     if(x >tam-1 || y > tam-1 || x<0 || y<0 || jaja[x][y] != 'L')return;
     else{
        jaja[x][y] = 'W';
        dist++;
        floodFill(x,y-1,tam);
        floodFill(x,y+1,tam);
        floodFill(x-1,y,tam);
        floodFill(x+1,y,tam);
     }
}

int main()
{
    ///pinta todos los L
    int n;
    while(cin>>n){
        dist = 0;
        if(n == 0)return 0;
        int x,y, xr, yr; cin>>x>>y>>xr>>yr;
        jaja.resize(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>jaja[i][j];
            }
        }

        floodFill(x,y,n);

        if(jaja[xr][yr] == 'W')cout<<"HAY RUTA POSIBLE CON DISTANCIA "<<dist/2<<endl;
        else cout<<"NO HAY RUTA POSIBLE"<<endl;

    }

    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<jaja[i][j]<<" ";
        }
        cout<<endl;
    }*/

    return 0;
}
//IT WORKS
