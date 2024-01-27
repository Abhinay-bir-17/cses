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
int code2(int i, int n, vector<ll>&dp) {
	if (i > 6)return 0;
	if (n == 0)return 1;
	if (dp[n] != -1)return dp[n];
	ll a = 0, b = 0;

	if ( (n - i) >= 0) a = code2(i, n - i, dp);
	for (int j = 1; j <= 6; j++) {
		if (j != i) {
			if ((n - j) >= 0)b += code2(j, n - j, dp);
			else break;
		}
	} return dp[n] = (a + b) % M;
}            //////////////
void code() {
	int n; cin >> n;
	ll ans = 0;
	vector<ll> dp(n + 1, -1);
	for (int i = 1; i <= 6; i++) {
		ll cnt = 0;
		if ((n - i) >= 0) {
			cnt =  code2(i, n - i, dp); ans += cnt % M;
			// cout << " for i:" << i << ", total is:" << cnt << endl;
		}
	}
	cout << ans % M << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code();
}