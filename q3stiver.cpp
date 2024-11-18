#include<iostream>
using namespace std;
void printnumber(int i,int N){
    if (i>=N)
    {
        return ; /* code */
    }
    i++;
    cout<<i;

    printnumber(i,N);
    
    

}
int main(){
    int i,N;
    cout<<"enter the number";
    cin>>N;
    printnumber(0,N);
    return 0;
}