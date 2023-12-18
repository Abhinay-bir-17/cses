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
	ll n, k, minans = 0, maxans = 0;
	cin >> n >> k;
	RI0n(i, n) {
		ll temp; cin >> temp;
		if (temp % k == 0)maxans += temp / k;
		else maxans += (temp / k) + 1;

		minans += temp;
	}

	if ( (minans % k) == 0)minans = minans / k;
	else minans = (minans / k) + 1;
	cout << minans << " " << maxans << endl;


}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) code();

}