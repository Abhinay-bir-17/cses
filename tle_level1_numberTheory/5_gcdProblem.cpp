#include <bits/stdc++.h>
void fastscan(int &number)
{	bool negative = false;
	register int c;
	number = 0;
	c = getchar();
	if (c == '-')
	{	negative = true;
		c = getchar();
	} for (; (c > 47 && c < 58); c = getchar())
		number = number * 10 + c - 48;
	if (negative)
		number *= -1;
}
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
void code1(vi v, int n) {   // 2 4 3 6 5 7 8
	if (n == 1) {
		cout << v[0] << endl;
	}
	int cnt = 0; ll sum = v[0]; ll aux = 0;
	int l = v[0];
	for (int i = 1; i < n; i++) {
		if (v[i] < l) {
			cnt += 1;
			aux += v[i];
		} else {
			if (cnt > 0) {
				sum += l * cnt - aux;
				cnt = 0; aux = 0;
			} else { // count == 0

			}
			l = v[i];
		}
		sum += v[i];
	} cout  << sum << endl;
}
void code2(int n) {

}
void code3(vi v, int n, int k) {

}
void code() {
	// code here abhinay bir come on you can do it okay.
	int n; cin >> n;  vi v;
	RI0n(i, n) {
		int temp; cin >> temp; v.push_back(temp);
	}
	code1(v, n);
}
int main()
{
#ifndef ONLINE_JUDGE
	//for getting input from input.txt
	freopen("input_2023.txt", "r", stdin);
	//for writing output to output.txt
	freopen("output_2023.txt", "w", stdout);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t; cin >> t; while (t--)code();

}

