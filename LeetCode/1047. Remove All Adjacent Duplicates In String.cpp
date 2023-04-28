class Solution {
public:
    string removeDuplicates ( string s ) {
        stack<char> st;

        for ( auto u : s ) {
            if ( !st.empty() ) {
                if ( !st.empty() && st.top() == u ) st.pop();
                else st.push(u);
            }

            else st.push(u);
        }

        s.clear();
        while ( !s.empty() ) {
            s += st.top();
            st.pop();
        }

        reverse ( s.begin(), s.end() );
        return s;
    }c
}
