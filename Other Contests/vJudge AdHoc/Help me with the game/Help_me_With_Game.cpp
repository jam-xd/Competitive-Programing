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

deque<pair<string,char> >white,black; // charx, (typeChar,intType)
deque<pair<char,string> >ordwhite, ordblack;//typeChar, (charx,int)
deque<pair<int,pair<char,char> > >prewhite, preblack;// int, (charx, typechar)

int toInt(char c){return (int)c-64;}
char toChar(int n){return (char)n+96;}
char toMayus(char c) {
    if(c >= 97 && c<= 122)return c-32;
    else return c;
}
//K, Q, R, B, N, P


int main()
{
    FileIn;
    FileOut;
    /*----------------------------*/
    map<char,int>mapint;
    mapint['K'] = 1;
    mapint['Q'] = 2;
    mapint['R'] = 3;
    mapint['B'] = 4;
    mapint['N'] = 5;
    mapint['P'] = 6;

    /*-----------------------------*/


    char image[17][33];
    deque<deque<char> >tablero(8);

    for(int i=0;i<17;i++){
        for(int j=0;j<33;j++){
            cin>>image[i][j];
        }
    }
    //cout<<"_____________"<<endl;

    int pointerx = 0, pointery = 0;
    for(int i=1;i<=15;i+=2){
        for(int j=2;j<=30;j+=4){
            tablero[pointerx][pointery] = image[i][j];
            pointery++;
        }
        pointerx++;
        pointery = 0;
    }

    for(int i=0;i<tablero.size();i++){
        for(int j=0;j<tablero.size();j++){
            if(tablero[i][j] != ':' && tablero[i][j] != '.'){

                char ggnomas = toChar(j+1);
                char insert = toMayus(tablero[i][j]);

                string save="", add, add2;
                stringstream ss;
                int num = 8-i;
                ss<<num;
                ss>>add;

                save = add + insert;

                if(tablero[i][j] >= (char)65 && tablero[i][j] <= (char)90){
                    white.push_back(pair<string,char>(save,ggnomas));
                }else black.push_back(pair<string,char>(save,ggnomas));
            }
        }
    }
    
    sort(white.begin(), white.end());
    sort(black.rbegin(), black.rend());

    for(int count = 0;count<black.size();count++){
        for(int i=black.size()-1;i>=0;i--){
            if(i != black.size()-1){
                while(mapint[black[i].first[1]]> mapint[black[i+1].first[1]]){
                    swap(black[i], black[i+1]);
                }
            }
            if(i != 0){
                
                while(mapint[black[i].first[1]] < mapint[black[i-1].first[1]]){
                    swap(black[i], black[i-1]);
                }
            }
        }
    }

    for(int count = 0;count<white.size();count++){
        for(int i=white.size()-1;i>=0;i--){
            if(i != white.size()-1){
                while(mapint[white[i].first[1]] > mapint[white[i+1].first[1]]){
                    swap(white[i], white[i+1]);
                }
            }
            if(i != 0){
                while(mapint[white[i].first[1]] < mapint[white[i-1].first[1]]){
                    swap(white[i], white[i-1]);
                }
            }
        }
    }
    
    //cout<<"first black "<<black[0].first<<black[0].second<<endl;

    for(int count = 0;count<black.size();count++){
        for(int i=black.size()-1;i>=0;i--){
            if(i != black.size()-1){
                while(black[i].first[0] == black[i+1].first[0] && mapint[black[i].first[1]] == mapint[black[i+1].first[1]]
                && black[i].second > black[i+1].second){
                    swap(black[i], black[i+1]);
                }
            }
            if(i != 0){
                while(black[i].first[0] == black[i-1].first[0] && mapint[black[i].first[1]] == mapint[black[i-1].first[1]]
                && black[i].second > black[i-1].second){
                    swap(black[i], black[i-1]);
                }
            }
        }
    }

    cout<<"White: ";
    for(int i=0;i<white.size();i++){
        char currchar = white[i].second;
        string currstr = white[i].first;
         if(currstr[1]!= 'P')cout<<currstr[1]<<currchar<<currstr[0];
         else cout<<currchar<<currstr[0];
        if(i!=white.size()-1)cout<<",";
    }cout<<endl;


    cout<<"Black: ";
    for(int i=0;i<black.size();i++){
        char currchar = black[i].second;
        string currstr = black[i].first;
        if(currstr[1] != 'P')cout<<currstr[1]<<currchar<<currstr[0];
        else cout<<currchar<<currstr[0];
        
        if(i!=black.size()-1)cout<<",";
    }//cout<<endl;


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


