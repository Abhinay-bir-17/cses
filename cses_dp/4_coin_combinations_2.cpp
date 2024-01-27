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
void code2() {
	int n, x; cin >> n >> x; vi ar; RI0n(i, n) {int temp; cin >> temp; ar.push_back(temp);}
	int dp[n + 1][x + 1];
	for (int i = 0; i <= x; i++)dp[0][i] = 0;
	for (int i = 1; i <= n; i++)dp[i][0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= x; j++) {
			if ( ( j - ar[i - 1]) >= 0) dp[i][j] = (dp[i - 1][j]  + dp[i][ j - ar[i - 1]]) % M;
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][x] % M << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code2();
}