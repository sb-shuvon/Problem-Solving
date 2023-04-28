#include<bits/stdc++.h>
using namespace std;
queue<long long int> rev( queue<long long int> q );

int main ()
{
    long long int test;
    cin >> test;

    while ( test-- )
    {
        queue<long long int> q;
        long long int n, var;
        cin >> n;
        while ( n-- ) {
            cin >> var;
            q.push( var );
        }

        queue<long long int> a = rev(q);
        while ( !a.empty() )
        {
            cout << a.front() << " ";
            a.pop();
        }
        cout << endl;
    }
}

queue<long long int> rev(queue<long long int> q) {
    queue<long long> ret;
    stack<long long> st;

    while ( !q.empty() ) {
        st.push ( q.front() );
        q.pop();
    }

    while ( !st.empty() ) {
        ret.push ( st.top() );
        st.pop();
    }

    return ret;
}

