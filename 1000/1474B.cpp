// Author: MDhruv03
// Time: 15:37 on 08/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
int tt;
  cin >> tt;
    while (tt--){
        int d;
        cin >> d;
        ll firstPrime = 0;
        for (int i = 1 + d; ; i++) {
            if (isPrime(i)) {
                firstPrime = i;
                break;
            }
        }
        ll secondPrime = 0;
        for (int i = firstPrime + d; ; i++) {
            if (isPrime(i)) {
                secondPrime = i;
                break;
            }
        }
        cout << min(firstPrime * secondPrime, firstPrime * firstPrime * firstPrime) << endl;

}

    return 0;
}