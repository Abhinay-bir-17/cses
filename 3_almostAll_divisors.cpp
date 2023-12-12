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

	sort(ar.begin(), ar.end());
	ll len = ar.size();
	ll temp = ar[0] * ar[len - 1];
	for (int i = 1, j = len - 2; i <= j; i++, j--) {
		if (  ar[i]*ar[j]  != temp) {
			cout << "-1" << endl; return;
		}
	}

	// count total no of factors of temp, if its = n+2, cout below else -1
	ll cnt = 1;
	for (int i = 2; i <= sqrt(temp); i++) {
		int aux = 0;
		while (temp % i == 0) {
			aux += 1; temp = temp / i;
		}
		cnt = cnt * (aux + 1);
		if (temp == 1)break;
	}
	if (temp != 1)cnt = cnt * 2;
	if (cnt == (n + 2))	cout << ar[0]*ar[len - 1] << endl;
	else cout << "-1" << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) code();

}