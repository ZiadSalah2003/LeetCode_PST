// Problem-Link : https://leetcode.com/problems/sort-colors/
// Problem-ID : 75
// Problem Name: Sort Colors
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
    void sortColors(vector<int>& nums) {
    for (int i = 0; i < nums.size(); i++) {
	bool swaped = false;
	for (int j = 0; j < nums.size() - i - 1; j++) {
		if (nums[j] > nums[j + 1]) {
			swap(nums[j], nums[j + 1]);
			swaped = true;
		}
	}
	if (!swaped) 
		break;
    }
}
};