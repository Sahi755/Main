#include<bits/stdc++.h>
#include<utility>
#define MOD1  1000000007
#define MOD2  1000000009 
#define Maxlenstr  10000000018
#define MODADD(a,b) a+b % MOD1
#define MODSUB(a,b,MOD1) a+b+MOD1 % MOD1  // Avoid negatives
#define MODMUL(l,a,b,MOD1) 1LL * a * b%MOD1  // Use 1LL to avoid overflow
#define  P  31             // Prime base	  
using namespace std;
class Comparators{

	public:static  bool cmp(pair<int,int>a,pair<int,int>b){

			   return a.second<b.second;
		  }
};
class Algorithms{

};
class NumberTeoryAlgo{
	public:
        static int gcd(int a, int b) {
       if (b == 0)
          return a;
         return gcd(b, a % b);
        }
         static int lcm(int a, int b) {
           return (a * b) / gcd(a, b);
       }
};

class Solution:public Comparators, Algorithms, NumberTeoryAlgo{

public:
  	 static void solve(vector<int>&start,vector<int>&end,int caseNum ){    
   
	
}

     static void input(int T){

         vector<int>start;
		 vector<int>end;
		 int n;
		 int x;

			 cin>>n;
              for(int i=0;i<n;i++){
                    cin>>x;
					start.push_back(x); 
			  }
			    cout<<endl;
	
                for(int i=0;i<n;i++){
                    cin>>x;
					end.push_back(x); 
			  }
		      solve(start,end,T);
	}
 };

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);


	    int T;
		cin>>T;

		for(int idx=1;idx<=T;idx++){

				 Solution::input(idx);
		}

		
		
}
