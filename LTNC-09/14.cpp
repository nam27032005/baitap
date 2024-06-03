#include <iostream>
#include <string>
#include <exception>

using namespace std;

int main() {
    string S;
    cin >> S;

    try {
        int number = stoi(S); 
        cout << number << endl; 
    } catch (exception &e) {
        cout << "Bad String" << endl; 
    }

    return 0;
}
