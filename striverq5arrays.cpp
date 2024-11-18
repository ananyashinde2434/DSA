#include<iostream>
using namespace std;
int leftRotated(int arr[], int  N){
 for ( int i = 0; i < N; i++)
 {
    int temp;
   arr[0]=temp;
   arr[N]=arr[0];
   arr[N]=temp;
   
    /* code */
 }
 
 
    

}
int main(){
    int i , j, arr[100],N;
    cout<<"Enter the number of elements";
    cin>>N;
    cout<<"enter the elements";
    for ( i = 0; i < N; i++)
    {
       cin>>arr[i]; /* code */
    }
    int ans= leftRotated(arr,N);
    cout<<ans;

    


}