#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

bool imBalanced ( char c1, char c2 )
{
    return ( c1 == '(' && c2 == ')' ) || ( c1 == '{' && c2 == '}' ) || ( c1 == '[' && c2 == ']' );
}

int main()
{
    optimize();

    int n;
    cin >> n;

    while ( n-- )
    {
        string s;
        cin >> s;

        stack<char> st;
        bool done = 1;

        for ( auto u : s )
        {
            if ( u == '(' || u == '{' || u == '[' ) st.push ( u );
            else
            {
                if ( st.empty () )
                {
                    done = 0;
                    break;
                }
                else
                {
                    if ( imBalanced ( st.top(), u ) )
                    {
                        st.pop();
                    }
                    else
                    {
                        done = 0;
                        break;
                    }
                }
            }
        }

        if ( !st.empty() ) done = 0;

        if ( done ) cout << "YES\n";
        else cout << "NO\n";


    }


    return 0;
}

