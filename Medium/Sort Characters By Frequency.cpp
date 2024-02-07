// Problem-Link :https://leetcode.com/problems/sort-characters-by-frequency/
// Problem-ID : 451
// Problem Name: Sort Characters By Frequency
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
    string frequencySort(string s) {
        string a="";
        priority_queue<pair<int, char>>p;
        map<char, int>mp;
        for (auto i : s)mp[i]++;
        for (auto i : mp)p.push({ i.second,i.first });
        while (!p.empty()) {
	        int x = p.top().first;
	        char y = p.top().second;
	        p.pop();
	        while (x) {
		        a += y;
		        x--;
	        }
        }
        return a;
    }
};