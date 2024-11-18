#include<iostream>
using namespace std;
void largestElement(int arr[],int N){
    int i;
    int max=i;
    for ( i = 1; i < N; i++)

    {
        if (arr[i]>arr[max])
        {
            max=i;
        }
        int temp=arr[max];
        arr[max]=arr[i];
        arr[i]=temp;

       
    }
   

}
int main(){
    int N,i,arr[100];
    cout<<"enter the number of elements";
    
    
        cin>>N;
    
    cout<<"enter the elements";
    for ( i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    largestElement(arr,N);
    cout<<"the array after finding the the largest element";
   
        cout<<i<<" ";
    
    return 0;
    
    

}