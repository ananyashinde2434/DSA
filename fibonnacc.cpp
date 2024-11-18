#include<iostream>
using namespace std;
int main(){
    int N, arr[100];
    cout<<"Enter the number";
    cin>>N;
    cout<<"Enter the elements";
    for ( int i = 0; i < N; i++)
    {
       cin>>arr[i]; /* code */
    }
    int ans=Fibonacci(N);

 
    
    
    


    
}
int  Fibonacci(int N){
    int i;
    int t1=0, t2=1 ;
    int nextterm=0;



    for ( i =3; i < N; i++)
    {

     nextterm =t1+t2;
    cout<<nextterm<<",";
    t1=t2;
    t2=nextterm;

}
Fibonacci(N)*Fibonacci(N)*



    
}
