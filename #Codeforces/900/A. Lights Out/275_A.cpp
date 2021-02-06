//http://codeforces.com/contest/275/problem/A
#include <iostream>

using namespace std;

int main()
{
    bool jaja[5][5] = {};
    int ggnomas[5][5] = {};

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            jaja[i][j] = true;
        }
    }

    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>ggnomas[i][j];
        }
    }


    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
                if(ggnomas[i][j] % 2 != 0){
                    jaja[i][j] = !jaja[i][j];
                    jaja[i][j+1] = !jaja[i][j+1];
                    jaja[i][j-1] = !jaja[i][j-1];
                    jaja[i+1][j] = !jaja[i+1][j];
                    jaja[i-1][j] = !jaja[i-1][j];

                }

        }
    }


    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            //cout<<ggnomas[i][j]<<" ";
            cout<<jaja[i][j];
        }
        cout<<endl;
    }


    return 0;
}