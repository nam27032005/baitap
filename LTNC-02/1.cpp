#include <bits/stdc++.h>

using namespace std;

int count(int n) {
    int cnt=0;
    string s=to_string(n);
    for (int i=0;i<s.size();i++) {
    if (s[i]!='0'&&n%(s[i]-'0')==0) {
        cnt++;
    }
    }
    return cnt;
}

int main (){
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << count(n) << endl;
    }
}
