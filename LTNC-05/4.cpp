#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }
    
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        auto it = lower_bound(v.begin(), v.end(), x);
        int i = it - v.begin();
        
        if (it != v.end() && *it == x) {
            cout << "Yes " << i + 1 << endl;
        } else {
            cout << "No " << i + 1 << endl;
        }
    }
}
