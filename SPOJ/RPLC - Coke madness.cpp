#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

const int mx = 1e6+123;
long long a[mx];
int n;

bool check ( long long val )
{
    for ( int i = 1; i <= n; i++ ) {
        val += a[i];
        if ( val >= 0 ) return 0;
    }

    return 1;
}

int main()
{
    optimize();

    int t;
    cin >> t;
    for ( int tc = 1; tc <= t; tc++ ) {
        cin >> n;
        for ( int i = 1; i <= n; i++ ) cin >> a[i];
        long long l = 1, r = 1e14, ans;

        while ( l <= r ) {
            long long mid = ( l + r ) >> 1;

            if ( check ( mid ) ) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << "Scenario #" << tc << ": " << ans << endl;
    }



    return 0;
}


