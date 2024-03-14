#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> se;

    while(n--) {
        int x,y;
        cin >> x >> y;

        if (x==1) {
            se.insert(y);
        }
        else if (x==2) {
            se.erase(y);
        }
        else if (x==3) {
            auto it=se.find(y);
            if (it!=se.end()) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
}
