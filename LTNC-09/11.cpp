#include<bits/stdc++.h>

using namespace std;

int main() {
    stack<int> st;
    int n;
    cin >> n;
    while(n>0) {
        st.push(n%2);
        n/=2;
    }
    string res="";
    while(!st.empty()) {
        res+=char(st.top()+'0');
        st.pop();
    }
    for (int i=0;i<res.size();i++) {
        if (res[i]=='0') res[i]=' ';
    }
    stringstream ss(res);
    string word;
    vector<string> v;
    while(ss >> word) {
        v.push_back(word);
        
    }
    int max=0;
    for (int i=0;i<v.size();i++) {
        if (v[i].size()>max) {
            max=v[i].size();     
        }
    }
   cout << max;
}
