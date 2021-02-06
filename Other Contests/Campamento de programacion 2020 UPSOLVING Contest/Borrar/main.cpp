#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cad = "hola";
    string n1 = "";
    string n2;

    char c = cad[0];
    stringstream ss;
    string temp;
    ss<<c;
    ss>>temp;
    n1 = n1 + temp;

    n2 = cad;
    n2.pop();

    cout<<n1<<" "<<n2<<endl;
    return 0;
}
