#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

long long a, b, c;
long long getValue ( long long x )
{
    return ( a * x * x ) + ( b * x ) + c;
}


int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ) {
        long long k;
        cin >> a >> b >> c >> k;

        long long l = 0, r = 1e6;
        long long ans;

        while ( l <= r ) {
            long long mid = ( l + r ) >> 1;

            if ( getValue ( mid ) >= k ) {
                ans = mid;
                r = mid - 1;
            }
            else l = mid + 1;
        }

        cout << ans << endl;

    }



    return 0;
}

