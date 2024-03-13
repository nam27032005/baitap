#include <iostream>
#include <string>
using namespace std;

string hackerrankInString(string s) {
    string target = "hackerrank";
    int i = 0, j = 0;
    while (i < s.length() && j < target.length()) {
        if (s[i] == target[j]) {
            j++;
        }
        i++;
    }
    if (j == target.length()) {
        return "YES";
    } else {
        return "NO";
    }
}

int main() {
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        string s;
        getline(cin, s);
        cout << hackerrankInString(s) << endl;
    }
}
