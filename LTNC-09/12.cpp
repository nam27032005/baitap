#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[][6]) {
    int max_sum = INT_MIN; 
    for (int i = 0; i <= 3; i++) {
        for (int j = 0; j <= 3; j++) {
            int a = arr[i][j] + arr[i][j+1] + arr[i][j+2];
            int b = arr[i+1][j+1];
            int c = arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];
            int sum = a+b+c;
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }
    return max_sum;
}

int main() {
    int arr[6][6];
    for (int i=0;i<6;i++) {
        for (int j=0;j<6;j++) {
            cin >> arr[i][j];
        }
    }
    cout << maxSum(arr) << endl; 
}
