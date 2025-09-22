#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
void frequency(int n,vector<int>&nums){
    unordered_map<int,int>freq;
    for(int it:nums){
        freq[it]++;
    }
    int q;
    cin>>q;
    while(q--){
        int x;
        cin>>x;
       // In map → the value (second) corresponding to key x.
        cout<<freq[x]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    frequency(n,nums);
    return 0;
}
