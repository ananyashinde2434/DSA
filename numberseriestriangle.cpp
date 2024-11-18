#include<iostream>
using namespace std; 
int main(){
    int i,n,j,a;
    cout<<"enter the number ";
    cin>>n;
    a=1;
    

    for ( i = 1 ; i<= n; i++)
    { 
        for ( j = 1; j <= i; j++)
        {
            cout<<a;
            a++;
            }
        
        cout<<endl;
    }
        
    }
    

