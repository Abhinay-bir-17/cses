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
	int temp = 0;
	vi v;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			n = n / i;
			temp += 1;
			v.push_back(i);
		}
		if (n == 1)break;
	}
	if (n > 1) {
		v.push_back(n); temp += 1; // n is the prime no left
	}
	if (k > temp) {cout << "-1" << endl; return;}

	int ans = 1;
	for (int i = 0; i < k - 1; i++)cout << v[i] << " ";
	for (int i = k - 1; i < v.size(); i++)ans = ans * v[i];
	cout << ans << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	// int t; cin >> t;
	// while (t--)
	code();
}