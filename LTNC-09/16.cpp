#include<iostream>
#include<algorithm>

using namespace std;


void sorting(int arr[], int n) {
    int cnt=0;
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (arr[i]>arr[j]) {
                swap(arr[i],arr[j]);
                cnt++;
            }
        }
    }
    cout << "Array is sorted in " << cnt <<" swaps." << endl;
    cout << "First Element: "<< arr[0] << endl;
    cout << "Last Element: " << arr[n-1] << endl;
} 
int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    sorting(a,n);
}
