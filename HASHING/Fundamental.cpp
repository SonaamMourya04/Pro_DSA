#include <bits/stdc++.h>
using namespace std;

void hasing(vector<int>& nums, int n, int q) {
    while (q--) {
        int x, cnt = 0;
        cin >> x;
        for (int i = 0; i < n; i++) {
            if (x == nums[i]) cnt++;
        }
        cout << cnt << "\n";   // newline after each query
    }
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);   // ✅ allocate size
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    int q;
    cin >> q;
    
    hasing(nums, n, q);
    return 0;
}

// git remote add origin https://github.com/SonaamMourya04/Pro_DSA.git
// git branch -M main
// git push -u origin main 
//TC=O(Q*N)
//SC=O(1)