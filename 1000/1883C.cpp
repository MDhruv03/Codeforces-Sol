// Author: MDhruv03
// Time: 23:27 on 04/08/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int tt;
  cin >> tt;
    while (tt--){

        int n,k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
            cin >> arr[i];
        
            int mini=INT_MAX;
            int curr;
          if(k==2 || k==3 || k==5)
          {
            for(int i=0;i<n;i++)
          {
            curr=arr[i]%k;
            mini=min(mini,(k-curr)%k);
            if(curr==0)
                break;
          }
          cout << mini << endl;
          }
          else
          {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(arr[i]%4==0)
                {
                    mini=0;
                    break;
                }
                if(arr[i]%4==3)
                {
                    mini=1;
                }
                if(arr[i]%2==0)
                    count++;
                if(count>=2)
                    mini=0;
                else
                mini=min(mini,2-count);        
            }
            cout << mini << endl;
          }
}

    return 0;
}