#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

queue<int> _push( int arr[], int n );

void _pop( queue<int> s );


queue<int> _push(int arr[], int n )
{
    queue<int> q;

    for ( int i = 0; i < n; i++ ) q.push ( arr[i] );
    return q;
}

void _pop( queue<int> s )
{
    while ( !s.empty() ) {
        cout << s.front() << " ";
        s.pop();
    }
}

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- ) {
        int n;
        cin >> n;

        int arr[n];
        for ( int i = 0; i < n; i++ )
            cin >> arr[i];
        queue<int> mys = _push( arr, n );
        _pop ( mys );
        cout << endl;

    }



    return 0;
}


