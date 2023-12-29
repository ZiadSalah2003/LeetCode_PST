// Problem-Link : https://leetcode.com/problems/combinations/
// Problem-ID : 77
// Problem Name: Combinations
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
ll n,k;
vector<ll>v;
vector<vector<int>>s;
class Solution {
	vector<int>v;
	vector<vector<int>>s;
public:
	vector<vector<int>> combine(int n, int k) {
		f(n,k,1);
		return s;
	}
	void f(int n,int k,int i) {
		cout << i << endl;
		if (v.size() == k) {
			s.push_back(v);
			return;
		}
		for (ll j = i; j <= n; j++)
		{
			v.push_back(j);
			f(n,k,j + 1);
			v.pop_back();
		}
	}
};