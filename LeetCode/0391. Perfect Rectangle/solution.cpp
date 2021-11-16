/**
 * 47 / 47 test cases passed.
 * Runtime: 100 ms
 * Memory Usage: 31.2 MB 
 */
class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {
        map<pair<int, int>, int> coord_count;
        int minx = rectangles[0][0], miny = rectangles[0][1],
            maxx = rectangles[0][2], maxy = rectangles[0][3];

        int square_sum = 0;
        for (auto &rectangle : rectangles) {
            // count the number of occurrences of 4 coordinate points in the rectangle  
            coord_count[make_pair(rectangle[0], rectangle[1])] ++;
            coord_count[make_pair(rectangle[0], rectangle[3])] ++;
            coord_count[make_pair(rectangle[2], rectangle[1])] ++;
            coord_count[make_pair(rectangle[2], rectangle[3])] ++;

            // update the minimum coordinate and maximum coordinate
            minx = min(minx, rectangle[0]);
            miny = min(miny, rectangle[1]);
            maxx = max(maxx, rectangle[2]);
            maxy = max(maxy, rectangle[3]);

            // calculate the area sum of all rectangles
            square_sum += (rectangle[2] - rectangle[0]) * (rectangle[3] - rectangle[1]);
        }

        // if the area sum is not equal with the (maxx - minx) * (maxy - miny) 
        // that's mean all the rectangles together form cannot cover of a rectangular region
        if (square_sum != (maxx - minx) * (maxy - miny)) {
            return false;
        }

        // if all of the coordinates occurs twice or 4 times (except the minimum and maximum coordinates)
        // that means it's exactly cover of a rectangle region, vice versa

        // except the minimum and maximum coordinates
        coord_count[make_pair(minx, miny)] --;
        coord_count[make_pair(minx, maxy)] --;
        coord_count[make_pair(maxx, miny)] --;
        coord_count[make_pair(maxx, maxy)] --;

        for (auto &item: coord_count) {
            if (item.second != 0 && item.second != 2 && item.second != 4) {
                return false;
            }
        }
        return true;
    }
};
