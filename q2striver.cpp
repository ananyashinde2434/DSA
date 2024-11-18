#include<iostream>
using namespace std;
int function(int i,int N)
{
if (i>N)
{return 1;
   }
 cout<<"Raj"<<endl;
 i++;
 return function(i,N);/* code */
}


int main(){
 int i=1, N;
 cout<<"Enter the number";
 cin>>N;
 function(i,N);
 return 0;
 
}