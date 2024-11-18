#include<iostream>                        //q. print numbers form 1 to N 
using namespace std;
 void number( int A , int N){
    
    if (A==N){
      cout<<"pahuch gya"<<endl;
      return ;

    }
    //processing -ek step aage bhad jao

 A++;
 
number(A, e  N);


}


int main(){
    int N,A;
    cout<<"enter the number";
    cin>>N;
   number(N,A);

}