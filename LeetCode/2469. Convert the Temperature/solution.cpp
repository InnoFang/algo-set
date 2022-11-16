/**
 * Runtime: 0 ms
 * Memory Usage: 5.9 MB 
 */
class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        return {celsius + 273.15, celsius * 1.8 + 32};
    }
};
