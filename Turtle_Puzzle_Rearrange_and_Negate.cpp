#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);

	int t;
	cin >> t;

	while ( t-- ){
		int n;
		cin >> n;
		int a[n];

		int sum = 0;

		for ( int i = 0; i < n; i++ ){
			cin >> a[i];
			sum += abs( a[i] );
		}

		cout << sum << "\n";
	}

	return 0;
}