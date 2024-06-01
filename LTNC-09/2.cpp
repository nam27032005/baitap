#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    
    // Print the sum of both integer variables on a new line.
    
    // Print the sum of the double variables on a new line.
    
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    int new_i;
    double new_d;
    string new_s;

   
    cin >> new_i;
    cin >> new_d;
    cin.ignore();
    getline(cin, new_s);
    cout << i + new_i << endl;
    cout << fixed << setprecision(1) << d + new_d << endl;
    cout << s + new_s << endl;

    return 0;
}
