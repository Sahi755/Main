#include<iostream>
#include<algorithm>
using namespace std;
class Control{

	public:
		static void printEven(){

			 int num;

			 cout<<"Enter the n:";
			 cin>>num;

			 cout<<"Even Number:";
			 for(int i=0;i<num;i++){
				  if(i%2==0){
					  cout<<i<<" ";
				  }
			 }
		}

		static void printodd(){

			int num;

			cout<<"Enter the num:";
			cin>>num;

		    cout<<"odd Numbers:";
			for(int i=0;i<num;i++){
				 if(i%2==1){
					 cout<<i<<endl;
				 }
			}
		}

		static void divides(){

			 int num;

			 cout<<"Enter the num:";
			 cin>>num;

			 cout<<"number of 5 and 7:";
			for(int i=0;i<num;i++){
			 if(i%5==0 && i%7==0)

				   cout<<i<<" ";
		}
	}

     static void factorial(){

		   long int num;

		   cout<<"Enter the num:";
		   cin>>num;

		   long int fact=1;
		   for(long int i=1;i<=num;i++){

			     fact=fact*i;
		   }
		   cout<<"fact:"<<fact<<endl;
	 }

	 static void sumDigit(){

		  int sum=0;

		  int num;

		  cout<<"Enter the digit:";
		  cin>>num;

		  while(num!=0){

			   int save=num%10;
			   sum=sum+save;
			   num/=10;

		  }
		  cout<<"sum of digit:"<<sum<<endl;
	 }

	 static void reverseNumber(){

		  string rev="";

		  int num;

		  cout<<"Enter the num:";
		  cin>>num;

		  while(num!=0){
			   int save=num%10;
			   rev+=to_string(save);
			   num/=10;
		  }
		 // reverse(rev.begin(),rev.end());

		  cout<<"reverse number:"<<rev<<endl;
	 }

	static void cheakpalindrome(){

		  int num;
		  cout<<"Enter the num:";
		  cin>>num;

		  string ori=to_string(num);

		  string copy=to_string(num);

		  reverse(ori.begin(),ori.end());

		  cout<<copy;

	      if(copy==ori){
			   cout<<"is palindrom!";
		  }else{
			   cout<<"is not palindrom!";
		  }
	
	}
	static void dgitCounter(){

		int num;

		cin>>num;

		int counter=0;

		while(num!=0){

			 int save=num%10;
			 string take=to_string(save);
			 counter++;
			 num/=10;
		}
		cout<<"count:"<<counter<<endl;
	}

	static int GCD(int num1,int num2){

		  int currentGcd=1;
		  int mins=min(num1,num2);
		  for(int i=1;i<=mins;i++){
			  if(num1%i==0 && num2%i==0){
                    currentGcd=i;
			  }
		  }
		  return  currentGcd;
	}

	static int  LCM(int num1,int num2){
	
		int maxi=max(num1,num2);

			int currentLcm=maxi;
			int ans;

		while(true){
			if(currentLcm%num1==0 && currentLcm%num2==0){
			   ans=currentLcm;
			   break;
			}
			currentLcm++;
		}
		return 	currentLcm;
	}
};
int main(){

	 int n1;
	 int n2;
	 cin>>n1>>n2;

	 cout<<Control::LCM(n1,n2);

}
