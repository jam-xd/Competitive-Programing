//FAIL, IT DOESN'T WORK FOR ALL TEST CASES ... :[
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
int const MOD = 10e9+7;

int main()
{

    //FileIn;
    //FileOut;
    
    int n,m; cin>>n>>m;
    char jaja[n][m];
    for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin>>jaja[i][j];

    ll maxDepthRings = 0;

    ll firstGrid[n][m] = {};
    ll secondGrid[n][m] = {};
    ll finalGrid[n][m] = {};
/*------------FirstGrid-------------------------------*/
    for(int i=0;i<n;i++){
        int lowCurrent = 1, highCurrent = 1;
        int low, high;
        for(int j=0;j<m;j++){if(jaja[i][j] == 'T'){low = j; break;}}
        for(int j=m-1;j>=0;j--){if(jaja[i][j] == 'T'){high = j; break;}}
        //cout<<"pointers: L: "<<low<<" H: "<<high<<endl;
        while(low < high){
            firstGrid[i][low] = lowCurrent;
            firstGrid[i][high] = highCurrent;
            lowCurrent++;
            highCurrent++;
            low++;
            high--;
        }
        if(high == low)firstGrid[i][low] = lowCurrent;
    }
/*-----------SecondGrid----------------------------*/
    for(int i=0;i<m;i++){
        int lowCurrent = 1, highCurrent = 1;
        int low, high;
        for(int j=0;j<n;j++)if(jaja[j][i] == 'T'){low = j; break;}
        for(int j=n-1;j>=0;j--)if(jaja[j][i] == 'T'){high = j; break;}
        //cout<<"pointers: L: "<<low<<" H: "<<high<<endl;
        while(low < high){
            secondGrid[low][i] = lowCurrent;
            secondGrid[high][i] = highCurrent;
            lowCurrent++;
            highCurrent++;
            low++;
            high--;
        }
        if(high == low)secondGrid[low][i] = lowCurrent;
    }
/*------------Fill finalGrid with min(firstGrid,secondGrid)----------*/
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            finalGrid[i][j] = min(firstGrid[i][j], secondGrid[i][j]);
            maxDepthRings = max(maxDepthRings, finalGrid[i][j]);
        }
    }

    /*cout<<"FIRST GRID"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<firstGrid[i][j]<<" ";
        }cout<<endl;
    }cout<<"_________________"<<endl;

    cout<<"SECOND GRID"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<secondGrid[i][j]<<" ";
        }cout<<endl;
    }cout<<"_________________"<<endl;*/

/*-----------------------------------------------------------------*/

    //cout<<"Max depth: "<<maxDepthRings<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(maxDepthRings < 10){
                if(finalGrid[i][j] == 0)cout<<"..";
                else if(finalGrid[i][j] > 0)cout<<"."<<finalGrid[i][j];
            }else{
                if(finalGrid[i][j] == 0)cout<<"...";
                else if(finalGrid[i][j] > 0 && finalGrid[i][j] < 10)cout<<".."<<finalGrid[i][j];
                else if(finalGrid[i][j] >= 10 && finalGrid[i][j] < 100)cout<<"."<<finalGrid[i][j];
                else if(finalGrid[i][j] == 100)cout<<finalGrid[i][j];
            }
        }cout<<endl;
    }cout<<endl;
        
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
