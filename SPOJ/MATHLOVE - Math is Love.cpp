#include<bits/stdc++.h>
using namespace std;

long long getSum ( long long n )
{
    return ( n * ( n + 1 ) ) >> 1;
}

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
        long long y;
        cin >> y;

        long long l = 1, r = 1e18, ans = -1;

        while ( l <= r ) {
            long long mid = ( l + r ) >> 1;

            if ( getSum ( mid ) == y ) {
                ans = mid;
                break;
            }

            if ( getSum ( mid ) < y ) l = mid + 1;
            else r = mid - 1;
        }

        if ( ans == -1 ) cout << "NAI\n";
        else cout << ans << endl;

    }



    return 0;
}
