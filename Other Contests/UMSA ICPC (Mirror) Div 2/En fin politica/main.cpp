#include <bits/stdc++.h>
using namespace std;
int main (){

  int nodos; cin>>nodos;
  int original = nodos;
  bool par = false;
  if(original%2 == 0)par = true;
  else par = false;

  nodos = 2*(nodos-1);

  deque<int>efe(nodos);
  deque<int >repeticiones[1000010];

  map<int,int> ggnomas;
  for(int i=0;i<nodos;i++){
    int jaja; cin>>jaja;
    efe[i] = jaja;
    ggnomas[jaja]++;
  }
  map<int,int>::iterator it;
  for(it = ggnomas.begin();it != ggnomas.end();it++){
    repeticiones[it->first] = repeticiones[it->second];
  	///cout<<"la frecuencia de " <<it->first<<" es "<<it->second<<endl;
   }

   for(int i=0;i<nodos/2;i=i+2){
        if(repeticiones[efe[i]] != 1 && repeticiones[efe[i+1]] != 1){
            if(par == true){
                cout<<original*1.5<<endl;
            }else cout<<(original*1.5)+1<<endl;
        }else cout<<original*2<<endl;
   }



	return 0 ;
}
