#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        vector<ll> a(n), b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        // 1) Build m and M arrays, and base sum
        vector<ll> m(n), M(n);
        ll base = 0;
        for(int i = 0; i < n; i++){
            m[i] = min(a[i], b[i]);
            M[i] = max(a[i], b[i]);
            base += (M[i] - m[i]);
        }

        // 2) Sort them
        sort(m.begin(), m.end());
        sort(M.begin(), M.end());

        // 3) For each m[j], find largest M[i] < m[j]
        vector<ll> gaps;
        gaps.reserve(n);
        int i = 0;  // pointer in M
        for(int j = 0; j < n; j++){
            // advance i so that M[i] < m[j], but M[i+1] >= m[j]
            while(i < n && M[i] < m[j]) 
                i++;
            if(i > 0 && M[i-1] < m[j])
                gaps.push_back(m[j] - M[i-1]);
            else
                gaps.push_back(0);
        }

        // 4) sort gaps ascending, take first k
        sort(gaps.begin(), gaps.end());
        ll extra = 0;
        for(int t = 0; t < k && t < (int)gaps.size(); t++){
            extra += gaps[t];
        }

        // 5) final answer
        cout << (base + 2*extra) << "\n";
    }
    return 0;
}
