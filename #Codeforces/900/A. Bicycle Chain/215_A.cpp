//http://codeforces.com/contest/215/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin>>n;
    deque<int>pedalAxe(n);
    for(int i=0;i<n;i++)cin>>pedalAxe[i];
    int m; cin>>m;
	deque<int>rearWheel(m);
	for(int i=0;i<m;i++)cin>>rearWheel[i];


	map<int,int>jaja;
	//.first -- identificador
	//.second -- repeticiones
	for(int i=0;i<rearWheel.size();i++){
		for(int j=0;j<pedalAxe.size();j++){
			if(rearWheel[i] % pedalAxe[j] == 0){
				int save = rearWheel[i] / pedalAxe[j];
				jaja[save]++;
			}
		}
	}


	map<int,int>::iterator it;
	int maxValue = 0, answer = 0;
	for(it = jaja.begin(); it != jaja.end(); it++){
		if(it->first > maxValue){
			maxValue = it->first;
			answer =  it->second;
		}
	}

	cout<<answer<<endl;

    return 0;
}