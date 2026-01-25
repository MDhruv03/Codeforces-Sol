// Author: MDhruv03
// Problem: 1536B
// Time: 09:59 on 25/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt = 1;
    cin >> tt;
    while (tt--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string mex= "";
        for(char c = 'a'; c <= 'z'; ++c){
            if(s.find(c) == string::npos){
                mex += c;
                break;
            }
        }

        if(mex == ""){
            for(char c = 'a'; c <= 'z'; ++c){
                for(char d = 'a'; d <= 'z'; ++d){
                    string candidate = "";
                    candidate += c;
                    candidate += d;
                    if(s.find(candidate) == string::npos){
                        mex = candidate;
                        break;
                    }
                }
                if(mex != "") break;
            }
        }
        if(mex == ""){
            for(char c = 'a'; c <= 'z'; ++c){
                for(char d = 'a'; d <= 'z'; ++d){
                    for(char e = 'a'; e <= 'z'; ++e){
                        string candidate = "";
                        candidate += c;
                        candidate += d;
                        candidate += e;
                        if(s.find(candidate) == string::npos){
                            mex = candidate;
                            break;
                        }
                    }
                    if(mex != "") break;
                }
                if(mex != "") break;
            }
        }

        cout << mex << '\n';
    }

    return 0;
}