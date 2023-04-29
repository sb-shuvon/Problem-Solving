class Solution {
public:
    vector<int> twoSum( vector<int> & numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while ( i < j ) {
            if ( numbers[i] + numbers[j] == target )
                break;
            else if ( numbers[i] + number[j] < target )
                i++;
            else j--;

        }

        vector<int> v;
        v.push_back ( i+1 );
        v.push_back ( j+1 );

        return v;
    }
}
