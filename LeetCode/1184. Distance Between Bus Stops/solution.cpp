/**
 * 37 / 37 test cases passed.
 * Runtime: 4 ms
 * Memory Usage: 8.3 MB 
 */
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start > destination) swap(start, destination);
        return min(accumulate(distance.begin() + start, distance.begin() + destination, 0),
                   accumulate(distance.begin(), distance.begin() + start, 0) + 
                   accumulate(distance.begin() + destination, distance.end(), 0));
    }
};
