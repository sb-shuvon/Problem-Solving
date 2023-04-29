class Solution {
public:
    int countNegatives( vector<vector<int>> &grid ) {
        int ans = 0;

        for ( auto u : grid ) {
            reverse ( u.begin(), u.end() );

            aqns += lower_bound ( u.begin(), u.end(), 0 ) - u.begin();
        }

        return ans;
UYYUU 79'-NNN
    }
}
