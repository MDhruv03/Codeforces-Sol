// Author: MDhruv03
// Problem: temp
// Time: 21:00 on 18/01/2026

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
        int n,m,k;
        cin >> n >> m >> k;

        vector<ll> robots(n), spikes(m);
        for(int i=0;i<n;i++) cin >> robots[i];
        for(int i=0;i<m;i++) cin >> spikes[i];

        string gdCode;
        cin >> gdCode;

        vector<ll> pref(k+1,0);
        for(int i=1;i<=k;i++){
            pref[i] = pref[i-1] + (gdCode[i-1]=='L' ? -1 : 1);
        }

        unordered_map<ll,int> first;
        first.reserve(k*2);
        for(int i=1;i<=k;i++){
            if(!first.count(pref[i])) first[pref[i]] = i;
        }

        vector<pair<ll,int>> vals;
        vals.reserve(first.size());
        for(auto &p: first) vals.push_back(p);

        unordered_map<ll,int> rid;
        rid.reserve(n*2);
        for(int i=0;i<n;i++) rid[robots[i]] = i;

        const int INF = 1e9;
        vector<int> death(n, INF);

        int D = vals.size();
        const int B = 700;

        if(D <= B){
            for(auto &pr: vals){
                ll s = pr.first;
                int t = pr.second;
                for(ll b: spikes){
                    ll need = b - s;
                    auto it = rid.find(need);
                    if(it != rid.end()){
                        int id = it->second;
                        if(death[id] > t) death[id] = t;
                    }
                }
            }
        } else {
            for(ll b: spikes){
                for(auto &pr: vals){
                    ll s = pr.first;
                    int t = pr.second;
                    ll need = b - s;
                    auto it = rid.find(need);
                    if(it != rid.end()){
                        int id = it->second;
                        if(death[id] > t) death[id] = t;
                    }
                }
            }
        }

        vector<int> cnt(k+2,0);
        for(int i=0;i<n;i++){
            if(death[i] <= k) cnt[death[i]]++;
        }

        int alive = n;
        for(int i=1;i<=k;i++){
            alive -= cnt[i];
            cout << alive << " ";
        }
        cout << '\n';
    }

    return 0;
}