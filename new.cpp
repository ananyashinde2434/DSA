#include<iostream>
using namespace std;
void sortArray( int arr[], int N){
   int i, j;
   int min =0;
  
   for (i=0;i<N-1;i++){
    if (arr[i+1]>arr[i]){
        continue;
    }
    else{
        for ( i = 0; i < N-1; i++)
        {
            int min=i;
          
            for ( j = i; j < N; j++)
            {   if (arr[j]<arr[min])
               min=j; 
            
        }
            int temp =arr[i];
           arr[i]=arr[min];
           arr[min]=temp;
        }
    }
   }

    return;
}

int main(){
    int arr[100], N, i;
    cout<<"enter the number: ";
    cin>>N;
    cout<<"enter the elements";
    for ( i = 0; i < N; i++)
    {
        cin>>arr[i];}
        sortArray( arr,N);
        cout<<"the sorted array is ";
        for ( i = 0; i < N; i++)
        {
            cout<<arr[i];/* code */
        }
        return 0;
}