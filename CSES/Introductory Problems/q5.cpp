// Author: MDhruv03
// Time: 10:30 on 26/10/2025

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

int n;
cin >> n;
if(n<=1)
    cout << "NO SOLUTION" << endl;
 
vector<int> nums(n);
for(int i=0; i<n; i++){
    cin >> nums[i];
}
if(n==2)
{
    if(abs(nums[0]-nums[1])<=1)
        cout << "NO SOLUTION" << endl;
    else
        cout << nums[0] << " " << nums[1] << endl;
}
if(n==3)
{
    sort(nums.begin(), nums.end());
    if(abs(nums[0]-nums[1])<=1 && abs(nums[1]-nums[2])<=1)
        cout << "NO SOLUTION" << endl;
    else
        cout << nums[0] << " " << nums[1] << " " << nums[2] << endl;
}

    return 0;
}