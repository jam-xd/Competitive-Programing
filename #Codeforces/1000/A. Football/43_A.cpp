//http://codeforces.com/contest/43/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{

	int n; cin>>n;
    map<string, int> jaja;
    for(int i=0;i<n;i++){
    	string cad; cin>>cad;
    	jaja[cad]++;
    }

    map<string, int>::iterator it;
    int maxRep = 0;
    string answer;
    for(it = jaja.begin(); it != jaja.end(); it++){
    	 if(it->second > maxRep){
    	 	maxRep = it->second;
    	 	answer = it->first;
    	 }
    }

    cout<<answer<<endl;
    return 0;
}