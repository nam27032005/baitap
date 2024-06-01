#include <iostream>
#include <cmath> // Include the cmath library for the round function

using namespace std;

void solve(double meal_cost, int tip_percent, int tax_percent) {
 
    double tip = meal_cost * tip_percent / 100.0;

    double tax = meal_cost * tax_percent / 100.0;
    
    double total_cost = meal_cost + tip + tax;
    
    int rounded_total_cost = round(total_cost);
    
    cout << rounded_total_cost << endl;
}

int main() {
    double meal_cost;
    int tip_percent, tax_percent;

    cin >> meal_cost;
    cin >> tip_percent;
    cin >> tax_percent;

    solve(meal_cost, tip_percent, tax_percent);

    return 0;
}
