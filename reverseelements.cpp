#include<iostream>
using namespace std;
void ReverseElements(int arr[],int N){
    int i=0;

    
    
while (i<N)
        {
            int  temp=arr[i];
       arr[i]=arr[N-1];
       temp=arr[N-1];
       i++;
       (N-1)--; // start
       /* code */
        }
        
       


        /* code */
    
    for ( i = 0; i < N; i++)
    {
        cout<<arr[i];
        /* code */
    }
    
    
}
int main(){
    int arr[100], N, i;
    cout<<"Enter the number of elements";
    cin>>N;
    cout<<"enter the elments";
    for ( i = 0; i < N; i++)
    {
       cin>>arr[i];
        /* code */
    }
   ReverseElements(arr,N);
    

}