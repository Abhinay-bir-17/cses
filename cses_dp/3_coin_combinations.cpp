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
ll code2(int ind, vector<int>&ar, int n, int x, vector<ll>&dp) {
	if (x == 0)return 1;
	if (n == -1)return 0;
	if (x < 0)return 0;
	if (dp[x] != -1)return dp[x];
	ll ans = 0;
	for (int i = 0; i < n; i++) {
		if ( (x - ar[i]) >= 0)ans += code2(i, ar, n, x - ar[i], dp);
	}
	return dp[x] = ans % M;
}
void code() {
	int n; cin >> n;
	int x; cin >> x ;
	vi v;
	RI0n(i, n) {
		int temp; cin >> temp; v.push_back(temp);
	}
	// sort(v.begin(), v.end());
	vector<ll> dp(x + 1, -1);
	cout << code2(0, v, n, x, dp);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code();
}