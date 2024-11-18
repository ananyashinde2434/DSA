#include<iostream>
using namespace std;

void linearSearch(int arr[],int N ){
    int key;

    cout<<"enter the key";
    cin>>key;
    int i ;
    for ( i = 0; i < N; i++)
    {
   if(arr[i]==key){

    cout<<"Element found at"<<i; 
    }
    }
}
   
    
   
    


        



    
    
    

        

    
    

    

int main(){
    int arr[100],N,i;
   cout<<"Enter the numberof elements";
   cin>>N;
   cout<<"Enter the elements";

   for ( i = 0; i <N; i++)
   {
     cin>>arr[i]; /* code */
   }
    linearSearch(arr,N);

   
   


}
