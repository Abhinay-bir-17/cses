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
// O(n) method
void code() {
	int n; cin >> n;
	vi prime_factors;
	for (int i = 2; i <= n; i++) { // for loop ends when n becomes 1
		while (n % i == 0) {   // for n= 24 , n= 24/2 = 12, n = 12/2= 6, n= 6/2 = 3;
			prime_factors.push_back(i);// 3%2!==0 so i becomes 3, n = 3/3 =1;
			n = n / i;// 1%3!==0 so i = 4, 4<=1, loop stops;
		}
		// i thouught of updating i = 2 but
// turns out the 1st factor of new 'n' will be > than i.
	}
	for (auto it : prime_factors)cout << it << " ";
}

// O(sqrt(n)) method
void code1() {
	int n; cin >> n;
	vi prime_factors;
	for (int i = 2; i * i <= n; i++) {
		while (n % i == 0) {
			prime_factors.push_back(i); n = n / i;
		}
	}
	if (n > 1)prime_factors.push_back(n);
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
	code();
}