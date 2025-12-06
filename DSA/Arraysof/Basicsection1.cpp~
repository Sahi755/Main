#include<iostream>
#include<cmath>
using namespace std;
class Basic{

	 public:
		 static solve1(){

			 cout<<"hello world";
		 }

		static void sum(){

			int num1;
			int num2;

			cout<<"Enter the num1:";
			cin>>num1;
			cout<<"Enter the num2:";
			cin>>num2;

			int sumx=num1+num2;

			cout<<"Sum:"<<sumx<<endl;
		}

		static void product(){

			 int prod=1;

			 int num1;
			 int num2;

			 cout<<"Enter the num1:";
			 cin>>num1;
			 cout<<"Enter the num2:";
			 cin>>num2;

			 prod=num1*num2;

			 cout<<"product:"<<prod<<endl;	
		}

		static void AreaCircle(){

			 float pi=3.14159;

			 int radius;

			 cout<<"Enter the number:";
			 cin>>radius;

			 float Areas=pi*(radius*radius);

			 cout<<"circle Area:"<<Areas<<endl;
		}

		static void swap(){

			int num1;
			int num2;
			int temp;

			cout<<"Enter the numbers:";
			cin>>num1>>num2;

			temp=num1;
			num1=num2;
			num2=temp;

			cout<<"num1:"<<num1<<endl;
			cout<<"num2:"<<num2<<endl;
		}

		static void evenODD(){

			 int digit;
			 
			cout<<"Enter the digit:";
			cin>>digit;

			if(digit%2==0){
				cout<<"Even";
			}else{
				cout<<"Odd";
			}

		}

		static void greatTwo(){

			 int num1;
			 int num2;

			 cout<<"Enter the data:";
			 cin>>num1>>num2;

			 if(num1>num2){
				  cout<<"Max:"<<num1;
			 }else{
				  cout<<"Max:"<<num2;
			 }
		}

		static void greatThree(){

			int num1;
			int num2;
			int num3;

			cout<<"Enter the data:";
			cin>>num1>>num2>>num3;

			if(num1>=num2 && num1>=num3){

				cout<<"Max:"<<num1<<endl;

			}else if(num2>=num1 && num2>=num3){

				cout<<"Max:"<<num2<<endl;
			}else{
			    cout<<"Max:"<<num3<<endl;
			}
		}

		static void sqrtCube(){

			  int num;

			  cout<<"Enter the num:";
			  cin>>num;

			  int sqrt=num*num;
			  int cube=num*num*num;

			  cout<<"sqrt:"<<sqrt<<endl;
			  cout<<"cube:"<<cube<<endl;

		}

		static void VOWELS(){

			 char ch;

			 cout<<"Enter the char:";
			 cin>>ch;

			 if(ch=='a'||ch=='u'||ch=='o'||ch=='e'||ch=='i' || ch=='A'||ch=='U'||ch=='O'||ch=='E'||ch=='I'){

				      cout<<"YES";
			 }else{
				       cout<<"NO";
			 }
		}

		static void simpleintrst(){

			  int P;
			  int R;
			  int T;

			  cout<<"Enter the principle:";
			  cin>>P;
			  cout<<"Enter the Rate:";
			  cin>>R;
			  cout<<"Enter the Time:";
			  cin>>T;

			  int SI=P*R*T/100;

			  cout<<"simple intrest:"<<SI<<endl;
		}

		static void compundIntrest(){

			 int P;
			 int R;
			 int T;

			 int n=1;

			  cout<<"Enter the principle:";
			  cin>>P;
			  cout<<"Enter the Rate:";
			  cin>>R;
			  cout<<"Enter the Time:";
			  cin>>T;

			   double rate_per_period = R / (100.0 * n);
               double periods = n * T;
               int CI=P * pow(1.0 + rate_per_period, periods);


			  cout<<"compund intrest:"<<CI-P<<endl;
		}

		static createMarksheet(){

			int marathi;
			int english;
			int sanskrit;
			int computer;
			int math;
			int science;

			  cout<<"Marathi:";
			  cin>>marathi;
			  cout<<"English:";
			  cin>>english;
			  cout<<"sanskrit:";
			  cin>>sanskrit;
	          cout<<"computer:";
			  cin>>computer;
			  cout<<"math:";
			  cin>>math;
			  cout<<"science:";
			  cin>>science;

			  int total= marathi+english+sanskrit+computer+math+science;

			  int percentage=total/7;

			  cout<<"**********************Mark sheet********************************\n";
			  cout<<"---------------------------------------------------------------\n";
		      cout<<"english               | "<<english<<endl;
			  cout<<"---------------------------------------------------------------\n";
			  cout<<"marathi   			   | "<<marathi<<endl;
              cout<<"---------------------------------------------------------------\n";
			  cout<<"sanskrit              | "<<sanskrit<<endl;
			  cout<<"---------------------------------------------------------------\n";
		   	  cout<<"computer              | "<<computer<<endl;
			  cout<<"---------------------------------------------------------------\n";
			  cout<<"math                  | "<<math<<endl;
			  cout<<"---------------------------------------------------------------\n";
			  cout<<"science               | "<<science<<endl;
			  cout<<"---------------------------------------------------------------\n";
			  cout<<"  Total:"<<total<<"|"<<"percentage:"<<percentage<<endl;
			  cout<<"---------------------------------------------------------------\n";
		}

		static void posneg(){

			  int num;

			  cout<<"Enter the num:";
			  cin>>num;

			  if(num==0){
				  cout<<"zero!";
			  }else if(num>0){
				   cout<<"positive!";
			  }else{
				   cout<<"negative!";
			  }
		}

		static void leapyear(){

			  short year;

			  cout<<"Enter the year:";
			  cin>>year;

			  if(year%4==0 ||(year%400==0 && year%100!=0)){
				    cout<<"leap year!";
			  }else{
				    cout<<"not leap year!";
			  }
		}

		static void printSumNatural(){

			  int num;

			  cout<<"Enter the num:";
			  cin>>num;
			  int sum=0;
			  for(int i=1;i<=num;i++){
				  sum+=i;
			  }
			 cout<<"sum:"<<sum;
		}
};
int main(){

	 Basic::printSumNatural();

}
