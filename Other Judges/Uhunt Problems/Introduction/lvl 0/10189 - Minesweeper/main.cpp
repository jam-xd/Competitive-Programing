#include <iostream>

using namespace std;

typedef long long ll;

/*int llenarCeros(int v[][]){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            jaja[i][j] = 0;
        }
    }
}*/

int main()
{
    int n,m,out=0;
    while(cin>>n>>m){
        if(n == 0 && m == 0)break;
        char c[n+2][m+2];
        int jaja[n+2][m+2];

        for(int i=0;i<n+2;i++){
            for(int j=0;j<m+2;j++){
                jaja[i][j] = 0;
            }
        }

        /*for(int i=1;i<n+1;i++){  prueba de llenado de tabla sin desbordar haciendo un espacio en los lados extra
            for(int j=1;j<m+1;j++){
                //jaja[i][j] = 1;
                jaja[i][j] = 0;
            }
        }*/
///////////////////////////////////////////////
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                cin>>c[i][j];
            }
        }

        if(out)cout<<endl;

        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(c[i][j] == '*'){
                    jaja[i-1][j]++;
                    jaja[i+1][j]++;
                    jaja[i][j-1]++;
                    jaja[i][j+1]++;

                    jaja[i-1][j-1]++;
                    jaja[i-1][j+1]++;
                    jaja[i+1][j-1]++;//este falla
                    jaja[i+1][j+1]++;

                }
            }
        }

        out++;
        cout<<"Field #"<<out<<":"<<endl;
        //out++;
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(c[i][j] == '*')cout<<c[i][j];
                else cout<<jaja[i][j];
            }
            cout<<endl;
        }

    }
    return 0;
}
