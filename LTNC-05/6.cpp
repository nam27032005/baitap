#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<string,int> mp;

    while(n--) {
        int x;
        string s;
        cin >> x >> s;
        if (x==1) {
            int y;
            cin >> y;
            mp[s]+=y;
        }
        else if (x==2) {
            mp.erase(s);
        }
        else if (x==3) {
            auto it=mp.find(s);
            if (it!=mp.end()) {
                cout << mp[s] << endl;
            }
            else {
                cout << 0 << endl;
            }
        }
    }
}
