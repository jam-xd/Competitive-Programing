//http://codeforces.com/contest/1372/problem/A
#include <bits/stdc++.h>

using namespace std;


/*Problem A*/
int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            if(i == n)cout<<"1"<<endl;
            else cout<<"1 ";
        }
    }
    return 0;
}