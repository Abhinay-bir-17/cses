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
	int d; cin >> d;
	for (int i = 6; ; i++) {
		int temp = 2, prev = 1, prev2 = i, f = 1;
		for (int j = 2; j * j <= i; j++) {
			if (i % j == 0) {
				if (j != (i / j)) {
					if ( (j - prev) >= d && (i - (i / j) >= d) ) {
						temp += 2; prev = j; prev2 = i / j;
					} else {
						f = 0; break;
					}
				} else {
					if ( (j - prev) >= d) {
						temp += 1; prev = j;
					} else {f = 0; break;}
				}

			}
		}
		if (f) {
			if ( (temp >= 4) ) {
				cout << i << endl; return;
			}
		}

	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while (t--) code();

}