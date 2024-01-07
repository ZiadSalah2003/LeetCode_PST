// Problem-Link : https://leetcode.com/problems/search-insert-position/
// Problem-ID : 35
// Problem Name: Search Insert Position
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
    int searchInsert(vector<int>& nums, int target) {
        int l = 0, r = nums.size()-1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (nums[mid]==target) {
			return mid;
		}
        else if(nums[mid]<target){
            l = mid + 1;
        }
		else {
			r = mid - 1;
		}
	}
    return l;
    }
};