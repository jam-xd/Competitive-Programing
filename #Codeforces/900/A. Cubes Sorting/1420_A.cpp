//http://codeforces.com/contest/1420/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{


int casos;
cin>>casos;

while(casos--){
    int n;
    cin>>n;

    deque<int>jaja(n), ggnomas(n);
    for(int i=0;i<n;i++){
        cin>>jaja[i];
        ggnomas[i] = jaja[i];
    }

    bool todosmismos = false;
    for(int i=1;i<jaja.size();i++){
        if(jaja[i] == jaja[i-1]){
            todosmismos = true;
        }
    }
    if(todosmismos == true){
        cout<<"YES"<<endl;
    }else{


    bool igual = false;
    sort(ggnomas.rbegin(), ggnomas.rend());
    for(int i=0;i<ggnomas.size();i++){
        if(ggnomas[i] == jaja[i]){
            igual = true;
        }else{
            igual = false;
            break;
        }
    }

    if(igual == true)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
}

    return 0;
}
