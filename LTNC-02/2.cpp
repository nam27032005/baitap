#include <bits/stdc++.h>

using namespace std;

string check(int x1, int v1, int x2, int v2) {
    for (int i=0;i<10000;i++) {
        if (x1+v1*i==x2+v2*i) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    
    string res=check(x1,v1,x2,v2);
    
    cout << res << endl;
}
