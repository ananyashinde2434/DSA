#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i;
    int n=nums.size();
    int lastFoundDigit=0;
    for(i=0;i<n;i++){
        nums[lastFoundDigit++]=nums[i];

    }
    for(i=lastFoundDigit;i<n;i++){
        nums[i]=0;

    }


        
        
    }
    
};
    int main(){
        Solution solution;
        int N,arr[100],i;
        cout<<"Enter the number of elements";
        cin>>N;
        cout<<"Enter the elements";
        for(i=0;i<N;i++){
            cin>>arr[i];

        }
            vector<int>arr(N);
    solution.moveZeros(arr);
    cout<<"Array after moving zeros";
    for(i=0;i<N;i++){
        cout<<arr[i];
    }



        





    }