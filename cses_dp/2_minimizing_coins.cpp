#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(auto i = (a); i < (b); ++i)
#define FORD(i,a,b) for(int i = (a); i >= (b); --i)
#define RI0n(i,n) FOR(i,0,(n))
#define RI1n(i,n) FOR(i,1,(n))
#define RI0n1(i,n) FOR(i,0,(n)-1)
#define RDn10(i,n) FORD(i,(n)-1,0)
// #define push_back pb;
typedef long long ll;
typedef vector<int> vi;
const ll inf = 1e9 + 7;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
ll fact[N];
int code2(int ind, int n, int k, vector<int>ar, vector<int>&dp) {
	// focus abhinay bir you can do it
	if (k == 0) {
		// cout << "in k==0" << endl;
		// for (auto it : dp) {
		// 	cout << it << endl;
		// }
		return dp.size();
	}
	if (ind == n)return INT_MAX;

	int a = INT_MAX, b = INT_MAX;
	if ((k - ar[ind]) >= 0) {
		dp.push_back(ar[ind]);
		a = min(a, code2(ind, n, k - ar[ind], ar, dp));
		dp.pop_back();
	}
	for (int i = ind + 1; i < n; i++) {
		if ( (k - ar[i]) >= 0) {
			dp.push_back(ar[i]);
			b = min(b, code2(i, n, k - ar[i], ar, dp));
			dp.pop_back();
		} else break;
	}
	return min(a, b);
}
void code() {
	int n, k; cin >> n >> k;
	vi ar;
	RI0n(i, n) {
		int temp; cin >> temp;
		ar.push_back(temp);
	}
	sort(ar.begin(), ar.end());
	vi dp = {};

	int ans = code2(0, n, k, ar, dp);
	if (ans == INT_MAX)cout << "-1"; else cout << ans; cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code();
}