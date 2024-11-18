#include<iostream>
using namespace std;
void secondLargest(int arr[],int N){
    int i;
    int min=i;
    min=0;
    int j;
    for ( i = 0; i < N-1; i++)
    {
        for ( j = i; i < N; j++)
        {
            if (arr[j]<arr[min]){
                min=j;/* code */
        }
        }
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
      
      /* code */
 
    

}
return ;
}
int main(){
    int i, N, arr[100];
    cout<<"enter the no. of elements";
    cin>>N;
    cout<<"enter the elements";
    for ( i = 0; i < N; i++)
    {
        cin>>arr[i];/* code */
    }
    secondLargest(arr,N);
    cout<<"the second largest element is :"<<" "<<i-1;
    return 0;
    
}