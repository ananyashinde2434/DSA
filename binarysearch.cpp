#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int key=0;
    int N; 
    int high, low;

    int mid=(high+low)/2 ;
cout<<"Enter the number of elemmets";

cin>>N;
int i;

cout<<"Enter the elements";
for (int  i = 0; i < N; i++)
{
   cin>>arr[i];

}
cout<<"Enter the element u want to search";
cin>>key;

while (low<high)
{
    if (arr[mid]==key)
    {
        cout<<"The element is Found";
    }
    
    
    if (key<arr[mid])
{
high=mid-1;
}
if(key>arr[mid]){
    low=mid+1;

}
}
for(i=0;i<N;i++){

cout<<arr[i];
}


return 0;



}






