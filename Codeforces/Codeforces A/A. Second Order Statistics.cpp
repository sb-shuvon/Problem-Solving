#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

int main()
{
    optimize();

    set<int> s;

    int n;
    cin >> n;

    for ( int i = 0; i < n; i++ )
    {
        int a;
        cin >> a;
        s.insert ( a );
    }

    if ( s.size() == 1 ) cout<< "NO" << endl;
    else
    {
        cout << *( ++s.begin() ) << endl;
    }


    return 0;
}


