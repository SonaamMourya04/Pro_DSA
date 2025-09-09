#include <bits/stdc++.h>
using namespace std;
 void hasing(int q,  vector<int>&arr,int n){ 
    while (q--) {
        int x;
        cin >> x;  // the query element
        int count = 0;
        
        // Brute-force traversal of array
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                count++;
            }
        }
        
        cout << count << endl;  // print frequency of x
    }}

int main() {
    int n;
    cin >> n;  // size of array
    
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int q;
    cin >> q;  // number of queries
    hasing(q,arr,n);
    
   
    
    return 0;
}  