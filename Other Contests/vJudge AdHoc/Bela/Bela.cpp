//ACCEPTED
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double dbl;
#define QuieroComer ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define FileIn freopen("input.txt", "r", stdin)
#define FileOut freopen("output.txt", "w", stdout)
#define endl "\n"
#define debug(x) cout<<"--> "<<x<<endl
int const MOD = 10e9+7;

int main()
{

    int manos; cin>>manos;
    char thisOne; cin>>thisOne;
    int sum = 0;

    for(int i=0; i<4*manos;i++){
        string cad; cin>>cad;
        char first = cad[0], second = cad[1];

        if(first == 'A' && second != thisOne)sum +=11;
        else if(first == 'A' && second == thisOne) {sum+=11; continue;}

        if(first == 'K' && second != thisOne)sum +=4;
        else if(first == 'K' && second == thisOne) {sum+=4; continue;}

        if(first == 'Q' && second != thisOne)sum +=3;
        else if(first == 'Q' && second == thisOne) {sum+=3; continue;}

        if(first == 'J' && second != thisOne)sum +=2;
        else if(first == 'J' && second == thisOne) {sum+=20; continue;}

        if(first == 'T' && second != thisOne)sum +=10;
        else if(first == 'T' && second == thisOne) {sum+=10; continue;}

        if(first == '9' && second != thisOne)sum +=0;
        else if(first == '9' && second == thisOne) {sum+=14; continue;}

        if(first == '8' && second != thisOne)sum +=0;
        else if(first == '8' && second == thisOne) {sum+=0; continue;}

        if(first == '7' && second != thisOne)sum +=0;
        else if(first == '7' && second == thisOne) {sum+=0; continue;}
        
    }

    cout<<sum<<endl;
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
	
	//Animo, sales de gris :'v, haz upsolving cuando termine >:v
	//Despues comes :3
----------------------------------------------/
*/


