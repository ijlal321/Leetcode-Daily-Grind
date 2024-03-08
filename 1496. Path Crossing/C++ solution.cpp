#pragma GCC optimize("O3", "unroll-loops")
using int2=pair<int, int>;
struct Myhash {
    size_t operator()(int2 const& s) const {
        size_t h1 = hash<int>{}(s.first);
        size_t h2 = hash<int>{}(s.second);
        return h1 ^ (h2 << 15); 
    }
};
class Solution {
public:
    bool isPathCrossing(string& path) {
        unordered_set<int2, Myhash> P;
        int x0 =10000, y0=10000;
        P.insert({x0, y0});

        for (char c : path) {
            switch (c) {
                case 'N': y0++; break;
                case 'S': y0--; break;
                case 'E': x0++; break;
                case 'W': x0--; break;
            }
            if (P.count({x0, y0})==1) return 1;
            P.insert({x0, y0});
        }
        return 0;    
    }
};