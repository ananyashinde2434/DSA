#include<iostream>
using namespace std;
void arrayRotated(int arr[],int N){
    int i ;
   
for ( i = 0; i < N; i--)
{
    int temp =arr[i];
    arr[i]=arr[N];

    temp =arr[N];



    /* code */
}
for ( i = 0; i <N; i++)

{
    cout<<arr[i];
}



    

    
    
}
int main(){

    int arr[100],N,i;
    cout<<"enter the number of elements";
    cin>>N;
    cout<<"enter the elements";
    for(i=0;i<N;i++){
        cin>>arr[i];


    }
 arrayRotated(arr,N);
 return 0;




}