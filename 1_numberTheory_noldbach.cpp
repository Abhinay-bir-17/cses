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
	// code here abhinay bir come on you can do it okay.
	int n; cin >> n; int k; cin >> k;
	int prime_1 = 2, prime_2;
	for (int i = 3; i <= n; i++) {


		// check if i is prime
		int flag = 1;
		for (int j = 2; j * j <= i; j++) {
			if ( i % j == 0) {
				flag = 0; break;
			}
		}
		if (flag) {
			prime_2 = i;
			int temp = prime_1 + prime_2 + 1;
			if (temp > n)  { break;}
			int aux = 1;
			for (int j = 2; j * j <= temp; j++) {
				if ( temp % j == 0) {
					aux = 0; break;
				}
			}
			if (aux) {
				k -= 1;
				if (k < 1) {
					cout << "YES" << endl; return;
				}
			}
			prime_1 = prime_2;
		}
	}
	cout << "NO" << endl;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	code();

}