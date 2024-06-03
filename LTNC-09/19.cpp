#include <iostream>
using namespace std;

int bitwiseAnd(int N, int K) {
    int maxVal = 0;
    for (int A = 1; A < N; A++) {
        for (int B = A + 1; B <= N; B++) {
            int current = A & B;
            if (current < K) {
                maxVal = max(maxVal, current);
            }
        }
    }
    return maxVal;
}

int main() {
    int T;
    cin >> T;
    while (T-- > 0) {
        int N, K;
        cin >> N >> K;
        cout << bitwiseAnd(N, K) << endl;
    }
    return 0;
}
