#include<bits/stdc++.h>

int cnt[256];

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    vector<int> v;
    for (int i=0;i<n;i++) {
        if (cnt[arr[i]]!=0) {
            v.push_back(cnt[arr[i]]);
        }
        cnt[arr[i]]=0;
    }
    sort(v.begin(),v.end(),greater<int>());
    cout << n-v[0];
}
