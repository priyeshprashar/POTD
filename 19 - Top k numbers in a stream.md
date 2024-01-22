```cpp
class Solution {
  public:
    static bool comp(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first) {
            return a.second < b.second;
        }
        return a.first > b.first;
    }

    vector<vector<int>> kTop(vector<int>& arr, int N, int K) {
        unordered_map<int, int> freqMap;
        set<pair<int, int>, decltype(&comp)> topKSet(comp);
        vector<vector<int>> result(N);

        for (int i = 0; i < N; ++i) {
            if (freqMap.find(arr[i]) != freqMap.end()) {
                topKSet.erase({freqMap[arr[i]], arr[i]});
            }

            freqMap[arr[i]]++;
            topKSet.insert({freqMap[arr[i]], arr[i]});

            vector<int> temp;
            auto it = topKSet.begin();

            for (int j = 0; j < K && it != topKSet.end(); ++j, ++it) {
                temp.push_back(it->second);
            }

            result[i] = temp;
        }
        return result;
    }
};
```
