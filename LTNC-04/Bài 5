#include<bits/stdc++.h>

using namespace std;

int a[1000001]={0};

int main() {
    int n;
    cin >> n;
    int c[n],d[n+1];
    for (int i=0;i<n;i++) {
        cin >> c[i];
        a[c[i]]++;
    }
    for (int i=0;i<n+1;i++) {
        cin >> d[i];
        a[d[i]]--;
    }

    for (int i=1;i<=1000;i++) {
       if (a[i] < 0) {
           cout << i << " ";
       }
    }
}
