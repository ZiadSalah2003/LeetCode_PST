// Problem-Link : https://leetcode.com/problems/apple-redistribution-into-boxes/description/
// Problem-ID : 3074
// Problem Name: Apple Redistribution into Boxes
// Verdict: AC
#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
#define sz(x) (int)(x).size()
#define Endl "\n"
#define all(v) v.begin(),v.end()
#define GG  ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
const ll N = 1e3 + 7, OO = 0x3f3f3f3f;
const ll M = 2e18 + 10;
const ll MOD = 1e9;
const double EPS = 1e-7;
class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(all(capacity));
        reverse(all(capacity));
        int sum = 0,sum2 = 0;
        for(int i=0;i<apple.size();i++)
            sum+=apple[i];
         for(int i=0;i<capacity.size();i++){
            sum2+=capacity[i];
            if(sum2>=sum)
            return i+1;
         }
        return -1;
    }
};