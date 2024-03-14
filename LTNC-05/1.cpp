#include<bits/stdc++.h>
using namespace std;


void update(int *a, int *b) {
    cout << *a + *b << endl;
    cout << abs(*a - *b);
}

int main() {
    int a,b;
    cin >> a >> b;
    int *pa=&a, *pb=&b;
    update(pa,pb);
}
