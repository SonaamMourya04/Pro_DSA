#include <iostream>
#include<vector>
#include<climits>
using namespace std;
//function to find largest number
   int LargestElement(vector<int>&nums,int n, int Lelement){
    for(int i=0;i<n;i++){
        if(nums[i]>Lelement){
            Lelement=nums[i];
        }

    }
    return Lelement;
}

int main(){
    int Lelement=INT_MIN;
 int n;
 cin>>n;
 vector<int>nums(n);
 for(int i=0;i<n;i++){
    cin>>nums[i];
 }
Lelement=LargestElement(nums,n, Lelement);
cout<<Lelement;
    return  0;
}