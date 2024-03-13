#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    
    cin >> n >> k;
    
    vector<int> res;
    
    if (n%2==0) {
        if (k%2==0) {
            res.push_back(k/2);
            res.push_back((n-k)/2);
        }
        else {
            res.push_back((k-1)/2);
            res.push_back((n+1-k)/2);
        }
    }
    else {
        if (k%2==0) {
            res.push_back((n-1-k)/2);
            res.push_back(k/2);
        }
        else {
            res.push_back((n-k)/2);
            res.push_back((k-1)/2);
        }
    }
    sort(res.begin(),res.end());
    
    cout << res[0] << endl;
}
