#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;
class queuesof{

     public:

		static void printqueue(queue<int>q){

			 cout<<"print:";
			 while(!q.empty()){
				   cout<<q.front()<<"|";
				   q.pop();
			 }
			 cout<<"|";
		}

 static void reversequeue(queue<int>q){

             stack<int>st;
			 while(!q.empty()){

				  int m=q.front();
				  st.push(m);
				  q.pop();
			 }
			 while(!st.empty()){

				  int m=st.top();
				  q.push(m);
				  st.pop();
			 }
       
		  printqueue(q);			 
   }

  static getLastelement(queue<int>q){

	    cout<<"get last element:"<<q.back();
  }

  static void sumQueue(queue<int>q){

	    queue<int>vs;

		int sum=0;
		while(!q.empty()){

			sum+=q.front();
			q.pop();
		}
		cout<<"sum all queue:"<<sum<<endl;
      }

  static void frontRreaequa(queue<int>q){

	      if(q.front()==q.back()){
			  cout<<"yes equals";
		  }else{
			  cout<<"No equals";
		  }
	  }

  static void maxinqueue(queue<int>q){


  }

  static void minqueue(queue<int>q){


  }

  static void evenoddqueue(queue<int>q){


  }

  static void sumlastfirtq(queue<int>q){


  }

   static insertque(){

			  queue<int>q;
			  int size;

			  cin>>size;
			  for(int i=0;i<size;i++){
				    int num;
					cin>>num;
					q.push(num);
			  }
               frontRreaequa(q);
		}        	   
};
int main(){

	queuesof::insertque();

}
