// Author: MDhruv03
// Time: 22:05 on 12/01/2026

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

int countResponseTimeRegressions(vector<int> responseTimes) {
    int average=responseTimes[0];
    int n = responseTimes.size();
    int ans=0;
    for(int i=1;i<n;i++)
    { 
      if(responseTimes[i]>average) ans++;
      average=(average*(i+1) + responseTimes[i])/(i+1);  
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

vector<int> responseTimes = {100, 200, 150, 300};
int result = countResponseTimeRegressions(responseTimes);
cout << "Number of response time regressions: " << result << endl;


    return 0;
}