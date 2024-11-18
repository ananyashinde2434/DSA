#include<iostream>
using namespace std; 
void shiftElements(int arr[],int N){
    int k,i;

    cin>>k;
    int temp=arr[N-1];
    for(i=N-1;i>0;i++){
    arr[i]=arr[i-k];
    }
    temp=arr[0];
     for(i=0;i<N;i++){
        cout<<arr[i];

     }
    



}
int main(){
    int arr[100];
    int N,i,k;

    cout<<"Enter the number of elements";
    cin>>N;
    
    cout<<"Enter the elements ";
    for ( i = 0; i < N; i++)
    {
       cin>>arr[i];/* code */

    }
    shiftElements(arr,N);
    return 0;

    

}