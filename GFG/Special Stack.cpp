#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cout.tie(0);

void push ( int a );
bool isFull ( int n );
bool isEmpty ();
int pop();
int getMin();

stack<int> s;

int main()
{
    optimize();

    int t;
    cin >> t;

    while ( t-- )
    {
        int n, a;
        cin >> n;
        while ( !isEmpty() )
        {
            pop();
        }

        while ( !isFull(n) )
        {
            cin >> a;
            push( a );
        }
        cout << getMin() << endl;
    }


    return 0;
}

void push( int a )
    {
        s.push ( a );
    }

    bool isFull( int n )
    {
        return n == s.size();
    }

    bool isEmpty()
    {
        return s.empty();
    }

    int pop()
    {
        s.pop();
    }

    int getMin()
    {
        int mn = 2e9;

        while ( !s.empty() )
        {
            mn = min ( s.top(), mn );
            s.pop();
        }

        return mn;
    }

