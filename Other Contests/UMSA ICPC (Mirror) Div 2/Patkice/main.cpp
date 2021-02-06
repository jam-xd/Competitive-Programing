#include <bits/stdc++.h>

using namespace std;

//int n=0,m=0;
char jaja[110][110];

bool recorrer(int ii, int jj){

    while(true){
            //cout<<jaja[ii][jj]<<endl;
        if(jaja[ii][jj] == '.' || jaja[ii][jj] == 'o')return false;

        if(jaja[ii][jj] == '>'){
            ii=ii;
            jj++;
            ///derecha
        }else if(jaja[ii][jj] == '<'){
            ii=ii;
            jj--;
            ///izquierda
        }else if(jaja[ii][jj] == 'v'){
            ii++;
            jj=jj;
            ///abajo
        }else if(jaja[ii][jj] == '^'){
            ii--;
            jj=jj;
            ///arriba
        }else if(jaja[ii][jj] == 'x')return true;
    }

}

int main()
{


    int n,m;
    cin>>n>>m;

    for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            jaja[i][j] = '.';
        }
    }

    int posi,posj;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>jaja[i][j];
            if(jaja[i][j] == 'o'){
                posi = i;
                posj = j;
            }
        }
    }

    /*for(int i=0;i<=n+1;i++){
        for(int j=0;j<=m+1;j++){
            cout<<jaja[i][j]<<" ";
        }
        cout<<endl;
    }*/

    bool jala = false;

    if(recorrer(posi, posj+1) == true){
        cout<<":)"<<endl;
        cout<<"E"<<endl;
        jala = true;
    }else if(recorrer(posi,posj-1) == true){
        cout<<":)"<<endl;
        cout<<"W"<<endl;
        jala = true;
    }else if(recorrer(posi-1, posj) == true){
        cout<<":)"<<endl;
        cout<<"N"<<endl;
        jala = true;
    }else if(recorrer(posi+1, posj)== true){
        cout<<":)"<<endl;
        cout<<"S"<<endl;
        jala = true;
    }else if(jala == false){
        cout<<":("<<endl;
    }


    return 0;
}
