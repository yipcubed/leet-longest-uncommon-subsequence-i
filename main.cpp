#include <algorithm>
#include <cstring>
#include <climits>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>


#include "../utils/VectorUtils.hpp"
#include "../utils/PrintUtils.hpp"
// #include "../utils/HeapUtils.hpp"
// #include "../utils/BinarySearch.hpp"
// #include "../utils/TreeUtils.hpp"


// https://leetcode.com/problems/longest-uncommon-subsequence-i/

using namespace std;

#pragma GCC diagnostic ignored "-Wunknown-pragmas"

// Live coding problems, watch at
// https://www.twitch.tv/yipcubed
// https://www.youtube.com/channel/UCTV_UOPu7EWXvYWsBFxMsSA/videos
//

// makes code faster, but larger. Just for LeetCode fun!
#pragma GCC optimise ("Ofast")

// makes stdin not synced so it is faster. Just for LeetCode fun!
static auto __ __attribute__((unused)) = []() {              // NOLINT
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();

class Solution {
public:
    int findLUSlength(string& a, string& b) {
        if (a == b) return -1;
        if (a.length() == b.length()) return a.length();
        return max(a.length(), b.length());
    }
};

void test1() {
    string a = "aba", b = "cdc";

    cout << " 3? " << Solution().findLUSlength(a, b) << endl;

    a = "aba", b = "cdba";

    cout << " 2? " << Solution().findLUSlength(a, b) << endl;
}

void test2() {

}

void test3() {

}