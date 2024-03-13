#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s, int start, int end) {
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int Index(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            if (isPalindrome(s, i + 1, n - i - 1)) {
                return i;
            }
            if (isPalindrome(s, i, n - i - 2)) {
                return n - i - 1;
            }
            return -1;
        }
    }
    return -1;
}

int main() {
    int q;
    cin >> q;
    while (q--) {
        string s;
        cin >> s;
        int result = Index(s);
        cout << result << endl;
    }
}
