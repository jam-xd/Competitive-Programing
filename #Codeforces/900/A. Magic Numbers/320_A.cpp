//http://codeforces.com/contest/320/problem/A
#include <iostream>

using namespace std;

int main()
{
    string jaja; cin>>jaja;
    bool ok = true;
    for(int i=0;i<jaja.size();i++){
        if(jaja[i] == '1' && jaja[i+1] == '4' && jaja[i+2] == '4'){
            i = i+2;
        }else if(jaja[i] == '1' && jaja[i+1] == '4'){
            i++;
        }else if(jaja[i] == '1'){
            continue;
        }else{
            ok = false;
            break;
        }
    }

    if(ok == true)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}