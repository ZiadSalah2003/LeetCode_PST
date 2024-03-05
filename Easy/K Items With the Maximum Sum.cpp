// Problem-Link : https://leetcode.com/problems/k-items-with-the-maximum-sum/description/
// Problem-ID : 2600
// Problem Name: K Items With the Maximum Sum
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
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        priority_queue<int> pq;
        while(numOnes--) pq.push(1);
        while(numZeros--) pq.push(0);
        while(numNegOnes--) pq.push(-1);
        int ans = 0;
        while(k--) ans += pq.top(), pq.pop();
        return ans;
    }
};