#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n%2==0) {
         if ((n>=2 && n<=5)||(n>20)) {cout << "Not Weird";}
        else if (n>=6 && n<=20) {cout << "Weird";}
    }
    else  {
       cout << "Weird";
    }
}
