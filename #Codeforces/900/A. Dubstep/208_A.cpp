//http://codeforces.com/contest/208/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string cad; cin>>cad;
    deque<char>answer;
    bool espacio = false;
    for(int i=0;i<cad.size();i++){
        if(cad[i] == 'W' && cad[i+1] == 'U'
            && cad[i+2] == 'B'){
                i = i + 2;
                if(espacio == true)answer.push_back(' ');
            }else {
            answer.push_back(cad[i]);
            espacio = true;
            }
    }


    for(int i=0;i<answer.size();i++)cout<<answer[i];
    return 0;
}