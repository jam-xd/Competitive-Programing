//http://codeforces.com/contest/118/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
       string cad;
       cin>>cad;

       deque<char>v;

       for(int i=0;i<cad.size();i++){

        if( cad[i] == 'A' || cad[i] == 'E' || cad[i] == 'I' || cad[i] == 'O' || cad[i] == 'U' || cad[i] == 'Y'){
           continue;
        }
            if(cad[i] == 'a' || cad[i] == 'e' || cad[i] == 'i' || cad[i] == 'o' || cad[i] == 'u'|| cad[i] == 'y' ){
            continue;
        }else{
            v.push_back(cad[i]);
        }

                                    }
            for(int i=0;i<v.size();i++){
                   if(v[i] >= 65 and v[i]<=90)v[i] = v[i]+32;
                cout<<"."<<v[i];
                    }

    return 0;
}