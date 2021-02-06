//http://codeforces.com/contest/581/problem/A
#include <iostream>

using namespace std;

int main()
{
    int rojo, azul;
    cin>>rojo>>azul;

    cout<<min(rojo,azul)<<" "<<(max(rojo,azul)-min(rojo,azul))/2<<endl;

    return 0;
}