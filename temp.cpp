// Author: MDhruv03
// Problem: temp
// Time: 21:09 on 15/02/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


bool intersect(vector<int> &a,vector<int> &b){
    ll A=a[0]-b[0];
    ll B=a[1]-b[1];
    ll C=a[2]-b[2];

    return B*B - 4*A*C >= 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        vector<vector<int>> quad(n,vector<int>(3));
        for(int i=0;i<n;i++){
            cin >>quad[i][0]>>quad[i][1]>>quad[i][2];
    }

    map<int,int> count;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(!intersect(quad[i],quad[j])){
                count[i]++;
                count[j]++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout << count[i]+1 << " ";
    }
    cout << endl;

}
    return 0;
}