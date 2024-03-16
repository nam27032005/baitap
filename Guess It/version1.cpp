#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int ScretNumber() {
    return rand()%100 + 1;
}

int Play() {
    int guess;
    cin >> guess;
    if (!cin.good()) exit(1);
    return guess;
}

void printAnswer(int guess, int scretnumber) {
    if (guess>scretnumber) {
        cout << "Too big!" << endl;
    }
    else if (guess<scretnumber) {
        cout << "Too small!" << endl;
    }
    else {
        cout << "You won!" << endl;
    }
}

int main() {
    srand(time(0));
    int scretnumber=ScretNumber();
    int guess;
    cout << "Nhap so trong khoang 1...100:" << endl;
    do {
        guess=Play();
        printAnswer(guess,scretnumber);
        if (guess>scretnumber) {
            cout << "Vui long nhap so nho hon:" << endl;
        }
        else if (guess<scretnumber) {
            cout << "Vui long nhap so lon hon:" << endl; 
        }
    } while(guess!=scretnumber);
    return 0;
}
