// Problem-Link : https://leetcode.com/problems/minimum-array-length-after-pair-removals/description/
// Problem-ID : 2856
// Problem Name: Minimum Array Length After Pair Removals
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
    int minLengthAfterRemovals(vector<int>& nums) {
       int i=0,j=(nums.size()+1)/2,sum=0;
        while (j<nums.size()){
            if(nums[i]<nums[j]){
                sum++;
                i++;
            }
            j++;
    }
    return nums.size()-2*sum;
    }
};