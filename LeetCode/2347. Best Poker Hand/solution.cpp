/**
 * Runtime: 0 ms
 * Memory Usage: 9.8 MB 
 */
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_set<char> colors;
        for (auto &suit: suits) colors.emplace(suit);
        if (colors.size() == 1) return "Flush";
        unordered_map<char, int> cards;
        for (auto &rank: ranks) cards[rank]++;
        if (cards.size() == 5) return "High Card";
        for (auto &[card, cnt]: cards) {
            if (cnt > 2) return "Three of a Kind";
        }
        return "Pair";
    }
};
