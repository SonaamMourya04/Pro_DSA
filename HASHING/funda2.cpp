#include<iostream>
#include <algorithm>
#include<vector>
using namespace std;
void hashing(int n , vector<int>&nums){
     int maxVal = *max_element(nums.begin(), nums.end());
     vector<int>freq(maxVal+1,0);
     for(auto it:nums){
        freq[it]++;
     }
     int q;
     cin>>q;
     while(q--){
        int x;
        cin>>x;
        if(x<=maxVal){
cout<<freq[x]<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
     }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    hashing(n,nums);
    return 0;

}
//tc=o(n)+o(n)+o(n)+o(q)
//sc=o(n)
