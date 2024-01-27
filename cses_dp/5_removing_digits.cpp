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
int code( int n, vi &dp) {
	if ( n == 10)return 2;
	if (n < 10)return 1;
	if (dp[n] != -1)return dp[n];

	int temp = n; int ans = INT_MAX;
	while (temp != 0) {
		int rem = temp % 10;
		if (rem != 0)ans = min(ans,  1 + code(n - rem, dp));
		temp = temp / 10;
	} return dp[n] = ans;
}
void code2() {
	int n; cin >> n; if (n < 10) {cout << "1" << endl; return;}
	int temp = n; int ans = INT_MAX; vi dp(n + 1, -1);
	while (temp != 0) {
		int rem = temp % 10;
		if (rem != 0)ans =  min(ans, 1 + code(n - rem, dp));
		temp = temp / 10;
	}
	dp[n] = ans;
	cout << dp[n] << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code2();
}