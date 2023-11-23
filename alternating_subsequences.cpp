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
	ll n; cin >> n;
	vector<ll> ar;
	RI0n(i, n) {
		ll temp; cin >> temp; ar.push_back(temp);
	}
	ll aux = ar[0];
	ll f;
	if (aux > 0)f = 1;
	else f = 0;
	ll sum = 0;
	for (int i = 1; i < n; i++) {
		if (f) {
			if (ar[i] > 0) {
				aux = max(aux, ar[i]);
			} else {
				sum += aux; aux = ar[i];
				f = 0;
			}
		} else {
			if (ar[i] > 0) {
				sum += aux;
				f = 1;
				aux = ar[i];
			} else {
				aux = max(aux, ar[i]);
			}
		}
	} sum += aux;
	cout << sum << endl;

}
int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--)code();

}