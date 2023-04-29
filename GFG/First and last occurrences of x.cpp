/// In the name of ALLAH

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int T;
    cin >> T;
    for ( int tc = 1; tc <= T; tc++ ) {
        int n, x;
        cin >> n >> x;
        vector<int> v(n);

        for ( int i = 0; i < n; i++ ) cin >> v[i];

        int lo = lower_bound ( v.begin(), v.end(), x ) - v.begin();
        int up = upper_bound ( v.begin(), v.end(), x ) - v.begin();

        if ( lo == up ) cout << "-1\n";
        else {
            cout << lo << " " << up-1 << endl;
        }
    }

}
