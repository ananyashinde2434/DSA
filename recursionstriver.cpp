#include<iostream>
using namespace std ;
void number(int i,int N){
    i=0;
    if(i>N)
        return ;
    
    cout<<i;
    number(i+1,N);

}
int main(){
    int i ,N;
    cout<<"Enter the number";
    cin>>N;
    number(i,N);


}