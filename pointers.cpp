#include<iostream>
using namespace std;
void add(int*);
int main(){
int num = 2;
cout<<"The value of num before calling the function";
add(&num);
cout<<"The value of num after calling the function";
return 0;
}
void add(int *n){
    *n=*n+10;
    cout<<"the value of num in the called function =%d",*n;
}

