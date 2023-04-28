#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

const int mx = 1e5+123;
int a[mx];

int main()
{
    optimize();

    int m, n;
    cin >> m >> n;
    priority_queue<long long> q;

    for ( int i = 0; i < m; i++ ) {
        int x;
        cin >> x;
        q.push ( x );
    }

    long long ans = 0;

    for ( int i = 0; i < n; i++ ) {
        if ( !q.empty() ) {
            int a = q.top();
            q.pop();

            ans += a;
            a--;
            if ( a > 0 ) q.push ( a );
        }
    }

    cout << ans << endl;


    return 0;
}

