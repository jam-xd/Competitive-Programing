//http://codeforces.com/contest/1236/problem/A
#include <iostream>

using namespace std;

int main()
{
    int casos;
    cin>>casos;

    while(casos--){
        int a,b,c,piedras = 0;
        cin>>a>>b>>c;

        while(c>=2 and b>=1){
            c = c-2;
            b--;
            piedras = piedras + 3;
        }

        while(a>=1 and b>=2){
            b = b-2;
            a--;
            piedras = piedras + 3;
        }


        cout<<piedras<<endl;


    }
    return 0;
}