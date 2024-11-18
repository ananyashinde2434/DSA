#include<iostream>
using namespace std;
void sumOfNumbers(int j,int N){
    int sum;
    if(j>N){
        return ;
    }
    
    sum=sum+j;
   
sumOfNumbers(j,N);
cout<<sum;
}
int main(){
    int i=0 ,sum=0, N;
    cout<<"Enter the number";
    cin>>N;
    sumOfNumbers(i,N);
    return 0;


}