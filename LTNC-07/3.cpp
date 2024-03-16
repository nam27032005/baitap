#include <bits/stdc++.h>
using namespace std;


int powerSum(int X, int N, int num = 1) {

    if (X == 0) {
        return 1;
    }

    if (X < 0 || pow(num, N) > X) {
        return 0;
    }

    return powerSum(X - pow(num, N), N, num + 1) + powerSum(X, N, num + 1);
}

int main() {
    int X, N;
    cin >> X >> N;
    cout << powerSum(X, N) << endl;
    return 0;
}
