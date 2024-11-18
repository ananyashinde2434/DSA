#include<iostream>
using namespace std;
int removeDuplicate( int arr[],int N){
    int i=0;
    for ( int j = 1; j <N; j++)
    {
       
        
        if (arr[i]!=arr[j])
        {
            arr[i+1]=arr[j];
            i++;
        }
        
    }
    return i+1;
    
}

int main(){
    int i , j , arr[100],N;
    cout<<"Enter the number of  elements";
    cin>>N;
    cout<<"enter the elements";
    for ( i = 0; i < N; i++)
    {
       cin>>arr[i]; /* code */
    }
    int ans=removeDuplicate(arr,N);
    cout<<"the array after removing the duplicate elements"<<" ";
    for ( i = 0; i <ans; i++)
    {
        cout<<arr[i];
        /* code */
    }
    cout<<endl;
    
    
    
    cout<<"the number of duplicate elemets"<<" "<<ans;
    return 0;
    

}