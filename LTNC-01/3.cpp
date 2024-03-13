#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    stringstream ss(s);
    string ans;
    while (ss >> ans) {
        cout << ans << endl;
    }
}
