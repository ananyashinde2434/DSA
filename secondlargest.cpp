#include<iostream>
using namespace std;
int secondLargest(int arr[],int N){
    int i, j, abc;
    for(i=0;i<N-1;i++){
        int min=0;
        for ( j = i+1; j < N; j++)
        {
             if(arr[i]<arr[min]){
                j=min;
            
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=arr[min];
        
    }
    
       
        
    
    
}
for ( i = 0; i < N; i++)
{ 
    abc=arr[N-2];
}


return abc;
}

int main (){
    int i,N, arr[100];
    cout<<"enter the number of elements";
    cin>>N;
    cout<<"enter the elements ";
    for ( i = 0; i < N; i++)
    {
     cin>>arr[i];
    }
    int abc=secondLargest(arr,N);
    cout<<"the second largest element is :"<<abc;
    return 0 ;
    

}