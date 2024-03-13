#include<bits/stdc++.h>


using namespace std;

int main () {
    string s1,s2;
    cin >> s1 >> s2;
    cout << s1.size() << " " << s2.size() << endl;
    string s3=s1+s2;
    cout << s3 << endl;
    string s4=s1;
    for (int i=0;i<1000;i++) {
        s4[0]=s2[0];
    }
    string s5=s2;
    for (int i=0;i<1000;i++) {
        s5[0]=s1[0];
    }
    string s6=s4+" "+s5;
    cout << s6;
}
