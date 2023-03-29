#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);
#define endl '\n'

int main()
{
    optimize();

    vector<string> v;

    int t;
    cin >> t;

    while ( t-- ) {
        string s;
        cin >> s;

        v.push_back ( s );

        do{
            cout << s << endl;
        }while( next_permutation ( v.begin(), v.end() ) );
    }


    return 0;
}
