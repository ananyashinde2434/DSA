#include<iostream>
using namespace std;                     //q.1 WAP to print out an output  of 1 till 4 upto 4 lines
int main (){                              
    
    for ( int i = 1; i < 5; i++)
    {
        for ( int j=1; j<i ; j++)
        {
             cout<<j;
        }
        cout<<endl;    //point hai ki yaad karna ki end l yahan for loop mein lagana hai outer loop 
        
    }

                           
}                                      