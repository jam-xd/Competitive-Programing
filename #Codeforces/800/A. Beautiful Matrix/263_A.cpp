//http://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
//http://codeforces.com/problemset/problem/263/A

using namespace std;

int main()
{

    pair<int,int> ggnomas;
    deque<int>jaja[5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>jaja[i][j];
            if(jaja[i][j] == 1){
                ggnomas = pair<int,int>(i,j);
            }
        }
    }

    cout<<abs(2-ggnomas.first) + abs(2-ggnomas.second)<<endl;
    return 0;
}