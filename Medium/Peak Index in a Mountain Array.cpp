// Problem-Link : https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
// Problem-ID : 852
// Problem Name: Peak Index in a Mountain Array
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
	int peakIndexInMountainArray(vector<int>& arr) {
		for (ll i = 1; i < arr.size() - 1; i++)
		{
			if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])return i;
		}
		return -1;
	}
};