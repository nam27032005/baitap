#include<bits/stdc++.h>

using namespace std;

int dx[4]={-1,-1,0,0};
int dy[4]={0,0,-1,1};

void run(int arr[][1001], int n, int w, int h) {
    if (n>=h) return;
    for (int j=0;j<w;j++) {
        if (arr[n][j]==1) {
            for (int i=2;i<=3;i++) {
               if(arr[n+dx[i]][j+dy[i]]==3) {
                arr[n+dx[i]][j+dy[i]]=4;
               }
            }
        }
    }
        for (int i=0;i<w;i++) {
            if (arr[n][i]==4) arr[n][i]=1;
        }
        for (int i=0;i<w;i++) {
            if (arr[n+1][i]==3&&arr[n][i]==1) {
                arr[n+1][i]=1;
            }
        }
    run(arr,n+1,w,h);
}

int main() {
    int w,h;
    cin >> w >> h;
    int arr[1001][1001];
    int x,y;

    for (int i=0;i<h;i++) {
        for (int j=0;j<w;j++) {
            char c;
            cin >> c;
            if (c=='R') arr[i][j]=2;
            else if (c=='E') arr[i][j]=3;
            else if (c=='Y') arr[i][j]=1;
        }
    }
    run(arr,0,w,h);
    int cnt=0;
    for (int i=0;i<w;i++) {
        if(arr[h-1][i]==1) cnt++;
    }

    if (cnt>0) cout << "YES" << endl;
    else
    cout << "NO" << endl;
}

