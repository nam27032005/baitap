#include <iostream>
#include <string>

using namespace std;

string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));
    int minute = stoi(s.substr(3, 2));
    int second = stoi(s.substr(6, 2));
    string period = s.substr(8, 2);

    if (period == "PM" && hour != 12) {
        hour += 12;
    } else if (period == "AM" && hour == 12) {
        hour = 0;
    }
    return (hour < 10 ? "0" : "") + to_string(hour) + ":" +
           (minute < 10 ? "0" : "") + to_string(minute) + ":" +
           (second < 10 ? "0" : "") + to_string(second);
}

int main() {
    string s ;
    cin >> s;
    cout << timeConversion(s) << endl;
  
}
