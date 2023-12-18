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
	int t; cin >> t; int n; cin >> n;
	int flag = 0;
	for (int i = 2; i * i <= n; i++) {
		if ( n % i == 0) {
			if (i % 2 == 0)flag += 1;
			if ( (n / i) != i && (n / i) % 2 == 0)flag += 1;
		}
	}
	if (n & 1)cout << ans; else cout << ans + 1;
	cout << endl;

}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) code();

}