// Problem-Link : https://leetcode.com/problems/maximum-average-subarray-i/description/?envType=study-plan-v2&envId=leetcode-75
// Problem-ID : 643 
// Problem Name: Maximum Average Subarray I
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
    double findMaxAverage(vector<int>& nums, int k) {
        int l=0,r=0;
        double sum=0,mx=-1000000;
        while(r<nums.size()){
            sum+=nums[r];
            if(r-l+1==k){
                mx=max(mx,(sum/k));
                sum-=nums[l++];
            }
            r++;
        }
        return mx;
    }
};