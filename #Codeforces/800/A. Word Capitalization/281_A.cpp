//http://codeforces.com/contest/281/problem/A
#include <iostream>

using namespace std;

char aMayuscula(char c){
    if(c>= 97 && c<=122)return c-32;
    else return c;
}

int main()
{
    string cad; cin>>cad;
    cad[0] = aMayuscula(cad[0]);
    cout<<cad<<endl;
    
    return 0;
}