#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while ( t-- ) {
      int n, x;
      cin >> n >> x;

      vector<int> vc(n);
      for ( int i = 0; i < n; i++ ) cin >> vc[i];

      sort ( vc.begin(), vc.end() );
      int sz = unique ( vc.begin(), vc.end() ) - vc.begin();

      if ( sz == x ) cout << "Good" << endl;
      else if ( sz > x ) cout << "Average" << endl;
      else cout << "Bad" << endl;

    }


    return 0;
}
