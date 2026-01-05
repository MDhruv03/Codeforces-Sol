// Author: MDhruv03
// Time: 22:47 on 05/01/2026

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
        int w,h;
        cin >> w >> h;
        vector<int> x1;
        vector<int> x2;
        vector<int> y1;
        vector<int> y2;

        int count=4;
        while(count--){
            int k;
            cin >> k;
            for(int i=0;i<k;i++){
                int val;
                cin >> val;
                if(count==3) x1.push_back(val);
                else if(count==2) x2.push_back(val);
                else if(count==1) y1.push_back(val);
                else y2.push_back(val);
            }
        }

        sort(x1.begin(),x1.end());
        sort(x2.begin(),x2.end());
        sort(y1.begin(),y1.end());
        sort(y2.begin(),y2.end());

        ll max_area=0;
        max_area=max(max_area,1LL*(x1.back()-x1[0])*h);
        max_area=max(max_area,1LL*(x2.back()-x2[0])*h);
        max_area=max(max_area,1LL*(y1.back()-y1[0])*w);
        max_area=max(max_area,1LL*(y2.back()-y2[0])*w);

        cout << max_area << endl;
}

    return 0;
}