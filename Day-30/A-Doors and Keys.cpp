#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0)
#define ll long long
const ll mod = 1000000007; //10^9+7

#ifdef ONLINE_JUDGE
#define debug(...) void(0);
#else
#include "debug.hpp"
#endif

void heySaksham() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("error.txt", "w", stderr);
#endif
}

void problem_solver()
{
	string s;
	cin >> s;

	if (s[0] == 'R' || s[0] == 'G' || s[0] == 'B') {
		cout << "NO";
		return;
	}
	int n = s.size();

	if (s[n - 1] == 'r' || s[n - 1] == 'g' || s[n - 1] == 'b') {
		cout << "NO";
		return;
	}

	unordered_set<int> st;

	for (int i = 0; i < n; i++)
	{
		if (s[i] == 'r' || s[i] == 'g' || s[i] == 'b') {
			st.insert(s[i]);
		}

		else if ( st.find(s[i] + 32) == st.end()) {
			cout << "NO";
			return;
		}
	}
	cout << "YES";
	return;
}

int32_t main() {
	heySaksham();
	fast;
	ll t = 1;
	cin >> t;
	while (t--)
	{
		problem_solver();
		cout << endl;
	}

	return 0;
}