/**
 * 30 / 30 test cases passed.
 * Runtime: 360 ms
 * Memory Usage: 60.3 MB 
 */
class Solution {
private:
    const int __boundary = 1e6;
    const int __limit = 100 * 199; // 200 * (200 - 1) / 2
    const int __dx[4] = {1, -1, 0, 0};
    const int __dy[4] = {0, 0, 1, -1};

private:
    using pii = pair<int, int>;

private:
    size_t hash(int x, int y) {
        return ((size_t) x << 20) | ((size_t) y);
    }

    pii unhash(size_t _hash) {
        return { _hash >> 20, _hash & 0xFFFFF };
    }
    
public:
    bool isEscapePossible(vector<vector<int>>& blocked, vector<int>& source, vector<int>& target) {
        unordered_set<size_t> ban;
        for (auto &block : blocked) {
            ban.insert( hash(block[0], block[1]) );
        }

        auto valid = [&](const vector<int> &src, const vector<int> &tar) {
            unordered_set<size_t> visited;
            queue<pii> que;
            que.push({src[0], src[1]});
            visited.insert(hash(src[0], src[1]));
            while (!que.empty()) {
                auto [x, y] = que.front(); que.pop();
                for (int i = 0; i < 4; ++ i) {
                    int xx = x + __dx[i];
                    int yy = y + __dy[i];
                    if (xx < 0 || xx >= __boundary || yy < 0 || yy >= __boundary) continue;
                    size_t _hash = hash(xx, yy);
                    if (ban.count(_hash)) continue;
                    if (visited.count(_hash)) continue;
                    if (xx == tar[0] && yy == tar[1]) return true;
                    visited.insert(_hash);
                    que.push({xx, yy});
                }
                if (visited.size() > __limit) return true;
            }
            return false;
        };
         
        return valid(source, target) && valid(target, source);
    }
};
