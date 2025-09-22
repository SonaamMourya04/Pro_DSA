#include <iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int>&nums,int n){
    int left=0;
    int right=n-1;
    while(left<right){
        swap(nums[left],nums[right]);
        left++;
        right--;
    }
}
 int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    reverseArray(nums,n);
    for(auto it:nums){
        cout<<it<< " ";
    }
    return 0;
 }
 //tc=0(n) sc=O(n)