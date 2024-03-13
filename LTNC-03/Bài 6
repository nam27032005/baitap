#include<bits/stdc++.h>
using namespace std;
string Cipher(string s , int k) {


    for (int i=0;i<s.size();i++) {
        if (isupper(s[i])) {
            s[i]=char((s[i]-'A'+k)%26+'A');
        }
        else if (islower(s[i])) {
            s[i]=char((s[i]-'a'+k)%26+'a');
        }
        else if (isdigit(s[i])) {
            s[i]=char((s[i]-'0'+k)%10+'0');
        }
    }
    return s;
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string s;
    getline(cin,s);
    if (s.size()==n) {
    int k;
    cin >> k;
    cout << Cipher(s,k);
    }
}
