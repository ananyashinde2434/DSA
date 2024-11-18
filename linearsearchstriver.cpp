#include<iostream>
using namespace std;
void linearSearch(int arr[],int N,int key){ 
    int i;
     key =0;

    for ( i = 0; i < N; i++)

    {
        if (key==arr[i])
        {
            cout<<"The Element is found";


        
        }
    
        else{
            key++;
            
        }
        
        
    }
   
    
    


}
int main(){
    int arr[100],N,i,key;
    cin>>N;
    cin>>key;
    cin>>arr[i];
    linearSearch(arr,N,key);




    
}
