#include<bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n==0) return 1;
    else if (n==1) return 1;
    else return n*factorial(n-1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n);
}