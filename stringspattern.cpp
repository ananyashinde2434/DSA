#include <iostream>
using namespace std;
int main(){
    int i,n,j;
    cout<<"enter the number";
    cin>>n;
    for ( i = 1; i < n; i++)      //i and j ko replace kardo 2 ques hai ismein 
    {
       for ( j = 0; j <n; j++)
       {  char ch='A'+j;
          cout<<ch;
       }
        cout<<endl;
    }
   return 0; 
}