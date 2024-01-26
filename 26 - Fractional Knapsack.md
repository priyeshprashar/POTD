```cpp
class Solution {
public:
    double fractionalKnapsack(int W, Item arr[], int n) {
        sort(arr, arr + n, [](auto &a, auto &b) {
            return a.value * b.weight > b.value * a.weight;
        });

        double value = 0;

        // Filling the knapsack
        for (int i = 0; i < n; i++) {
            auto &item = arr[i];

            if (item.weight <= W) {
                value += item.value;
                W -= item.weight;
            } else {
                value += double(item.value) * W / item.weight;
                break;
            }
        }

        return value;
    }
};
```
