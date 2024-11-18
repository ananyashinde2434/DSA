#include<iostream>
using namespace std ;
void Reverseprint(int i, int N){
    if(i>=N){
        return ;
    }
    
    cout<<i;
    Reverseprint(i,N-1);
}
int main(){
    int i,N;
    cout<<"enter the number";
    cin>>N;
    Reverseprint(i,N);
    return 0;
}