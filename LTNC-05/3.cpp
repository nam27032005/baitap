#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    int a,b,c;
    cin >> a >> b >> c;
    v.erase(v.begin()+a-1);
    for (int i=0;i<c-b;i++) {
        v.erase(v.begin()+b-1);
    }
    cout << v.size() << endl;
    for (int i=0;i<v.size();i++) {
        cout << v[i] << " ";
    }
}
