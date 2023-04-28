#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- )
    {
        int n;
        cin >> n;
        priority_queue<long long> q;

        for ( int i = 0; i < n; i++ )
        {
            int a;
            cin >> a;
            q.push ( -a );
        }

        long long ans = 0;
        while ( q.size() > 1 )
        {
            long long a = -q.top();
            q.pop();

            long long b = -q.top();
            q.pop();

            q.push ( -( a + b ) );
            ans += ( a + b );

        }

        cout << ans << endl;
    }


    return 0;
}

