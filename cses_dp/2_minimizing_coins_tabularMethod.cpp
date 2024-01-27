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
void code() {
	int n, k; cin >> n >> k;
	vi ar;
	RI0n(i, n) {
		int temp; cin >> temp;
		ar.push_back(temp);
	}
	vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {
			if (dp[i - 1][j] == 0) {
				if ( (j - ar[i - 1]) >= 0) {
					if (dp[i][j - ar[i - 1]] > 0 || ((j - ar[i - 1]) == 0) )dp[i][j] = 1 + dp[i][j - ar[i - 1]];
					else dp[i][j] = 0;
				} else dp[i][j] = 0;
			} else {
				if ( (j - ar[i - 1]) >= 0) {
					if (dp[i][j - ar[i - 1]] > 0 || ((j - ar[i - 1]) == 0) )dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - ar[i - 1]]);
					else dp[i][j] = dp[i - 1][j];
				} else dp[i][j] = dp[i - 1][j];
			}

		}
	}
	if (dp[n][k])cout << dp[n][k]; else cout << "-1"; cout << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code();
}