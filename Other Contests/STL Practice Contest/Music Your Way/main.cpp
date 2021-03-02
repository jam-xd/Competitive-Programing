#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define Fiaaaauuu ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define deb(x) cout<<"--> "<<x<<endl
#define furula cout<<"furula hasta aqui"<<endl
int const MOD = 10e9+7;

deque<string>diff_keys;
int sortByThElement; 

void countKeys(string &cad){
    string current = "";
    for(int i=0;i<cad.size();i++){
        if(cad[i] != ' ')current += cad[i];
        else{
            diff_keys.push_back(current);
            current = "";
        }
    }
}

bool compare(deque<string>a , deque<string>b){
    return a[sortByThElement] < b[sortByThElement];
}

int main()
{
    FileIn;
    FileOut;
    
    string cad;
    getline(cin,cad); 
    string title = cad;
    cad += ' ';
    countKeys(cad);
    int manyKeys = diff_keys.size();
    int inputs; cin>>inputs;
    deque<deque<string> >ggnomas(inputs);

    for(int i=0;i<inputs;i++){
        for(int count = 0; count < manyKeys; count++){
            string curr; cin>>curr;
            ggnomas[i].push_back(curr);
        }
    }

    int queries; cin>>queries;
    while(queries--){
        string thisSort;
        cin>>thisSort;
        for(int i=0;i<diff_keys.size();i++){
            if(diff_keys[i] == thisSort)sortByThElement = i;
        }

        cout<<title<<endl;
        stable_sort(ggnomas.begin(), ggnomas.end(),compare);
        for(int i=0;i<inputs;i++){
            for(int j=0;j<manyKeys;j++){
                cout<<ggnomas[i][j]<<" ";
            }cout<<endl;
        }cout<<endl;

        
    }
    /*deb(diff_keys.size());
    for(int i=0;i<diff_keys.size();i++)cout<<diff_keys[i]<<"."<<endl;
    cout<<endl;*/

    return 0;
}


/*--------------------------------------------/
	* overflow?
	* Corner cases (n=1? || n=n-1?)
	* n=n+1 (!=) n+=1; 
	  (copy n) ~ (don't make a copy of n)
	* if(use vector, string, deque in function) use "&"before.
	  (to rewrite, instead of make a copy)
	* DON'T GET STUCK ON ONE APPROACH
	
	//weno....ns....
----------------------------------------------/
*/
