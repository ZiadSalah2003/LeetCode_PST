// Problem-Link : https://leetcode.com/problems/valid-parentheses/
// Problem-ID : 20
// Problem Name: Valid Parentheses
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
	bool isValid(string s) {
		stack<char>st;
		for (int i = 0; i < s.size(); i++)
		{
			if (s[i] == '(' || s[i] == '[' || s[i] == '{')st.push(s[i]);
			else {
				if (st.empty())return false;
				if (s[i] == ')' && st.top() != '(')return false;
				if (s[i] == ']' && st.top() != '[')return false;
				if (s[i] == '}' && st.top() != '{')return false;
				st.pop();
			}
		}
		return st.empty();
	}
};