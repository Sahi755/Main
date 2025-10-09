#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Arrays{

    public:
     static  int max_arr( int arr[],int n){

          int  max_ele=arr[0];
           for(int i=0;i<n;i++){
                if(arr[i]>max_ele){
                     max_ele=arr[i];
                }
           }
           return max_ele;
     }

     static int min_arr(int arr[],int n){

         int min_ele=arr[0];
         for(int i=0;i<n;i++){

             if(arr[i]<min_ele){
                 min_ele=arr[i];
             }
         }
         return min_ele;
     }

     static int sumofarr(int arr[],int n){
          int sum=0;
          for(int i=0;i<n;i++){
             sum+=arr[i];
          }
          return sum;
     }

     static double average(int arr[],int n){

          return sumofarr(arr,n)/n;
     }

     static void countEvenodd(int arr[],int n){

          int countEven=0;
          int countOdd=0;
          for(int i=0;i<n;i++){

               if(arr[i]%2==0){
                    countEven++;
               }else{
                    countOdd++;
               }
          }
          cout<<"even count:"<<countEven<<endl;
          cout<<"even count:"<<countOdd<<endl;
     }

     static void reverseArr(int arr[],int n){

          int left=0;
          int right=n-1;

          while(left<right){
                 int temp=arr[left];
                 arr[left]=arr[right];
                 arr[right]=temp;
                left++;
                right--;
          }
           for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
          }
     }

     static void secondlargest(int arr[],int n){
     
            sort(arr,arr+n);

            cout<<"second largest num:"<<arr[n-2];
     }
     static void secondsmallest(int arr[],int n){
     
           sort(arr,arr+n);
           cout<<"second smallest num:"<<arr[1];

     }

      static void inputArr(){

           int n;
           int T;
           cin>>T;
           while(T--){
                cin>>n;
                int arr[n];
                for(int i=0;i<n;i++){
                     cin>>arr[i];
                }
               secondsmallest(arr,n);
       }

      }
};
class SearchingSorting{

   public:
      static void inputArr(){

           int n;
           int T;
           cin>>T;
           while(T--){
                cin>>n;
                int arr[n];
                for(int i=0;i<n;i++){
                     cin>>arr[i];
                }
               secondsmallest(arr,n);
       }
      }
};
int main(){

    SearchingSorting::inputArr();
    
}