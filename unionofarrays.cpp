#include<iostream>
using namespace std;
void unionArrays(int arr1[],int arr2[],int n,int m){
    int i,j;
    for ( i = 0; i <n; i++){
    for ( j = 0; j < m; j++)
    {
        if (arr1[i]=arr2[j])
        {
            int ele[]=arr1[i];
        }
        

    }

    

}
}

int main (){
    int arr1[100],arr2[100],i,j,N,M;
    cout<<"Enter the number of elements for arr1";
    cin>>N;
    cout<<"Enter the elements for arr2";
    for ( i = 0; i < N; i++)
    {
        cin>>N;/* code */
    }
    cout<<"Enter the number of elements for arr2";
    cin>>M;
    cout<<"Enter the elements for arr2";
    for ( i = 0; i < M; i++)
    {
        cin>>M;/* code */
    }
    unionArrays(arr1,arr2,M,N);



    
}