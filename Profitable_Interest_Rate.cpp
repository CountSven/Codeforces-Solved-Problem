#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while ( t-- ) {
        int a, b;
        cin >> a >> b;

        if ( a >= b ) cout << a << "\n";
        else {
            int unprofdep = b - a;
            a -= unprofdep;
            int depdec = 2*unprofdep;
            b -= depdec;
            if ( a >= b && !( a <= 0 ) ) cout << a << "\n";
            else cout << 0 << "\n";
        }
    }

    return 0;
}