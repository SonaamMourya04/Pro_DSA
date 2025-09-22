#include<vector>
#include<iostream>
using namespace std;
void hashing(int n ,vector<int>&nums){
    int q;
    cin>>q;
    while(q>0){
        int x;
        cin>>x;
        int cnt=0;
        for(int i=0;i<n;i++){
            if(x==nums[i])cnt++;
        } cout<<cnt<<endl;
        q--;
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
}
