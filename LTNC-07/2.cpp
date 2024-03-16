#include<bits/stdc++.h>

using namespace std;

void generateStrings(const vector<char>& v, int length, string currentString = "") {
    if (length == 0) {
        cout << currentString << endl;
        return;
    }

    for (char c : v) {
        generateStrings(v, length - 1, currentString + c);
    }
}

int main() {
    vector<char> v = {'a', 'b', 'c', 'd'};
    
    generateStrings(v, 3);

    return 0;
}
