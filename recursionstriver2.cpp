#include<iostream>
using namespace std;
void reverseNumber(int j ,int N){
   if(j<=0){
    return ;
   }
   cout<<j;
   reverseNumber(j-1,N);
   


    
}
int main(){
    int i,N;
   
    
    cout<<"Enter the number";
    cin>>N;
     i=N;
    reverseNumber(i,N);
    return 0;
    
}