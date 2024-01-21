## Problem Statement

The given problem is :- [Problem Link](https://www.geeksforgeeks.org/problems/all-unique-permutations-of-an-array/1)

## Approach
- Input Validation:
  -Ensure that the input array is non-empty and contains distinct elements.
  
- Sort the Array:
  -Sort the input array to generate permutations in sorted order.
 
- Generate Permutations:
  -Use the next_permutation function from the <algorithm> header to generate all possible unique permutations.
 
- Print Permutations:
 -Implement a function to print each permutation.
  
- Implementation:
  -Create a C++ program that follows the outlined approach.
- Test Cases:
  -Include test cases to validate the correctness of the implementation.

## Code  
```cpp
class Solution {
  public:
    vector<vector<int>> uniquePerms(vector<int> &arr, int n) {
        sort(arr.begin(), arr.end());

        vector<vector<int>> out;
        do {
            out.push_back(arr);
        } while (next_permutation(arr.begin(), arr.end()));

        return out;
    }
};
```
## Thank You
Thank you for checking out MyProject! 🚀

If you find this project helpful or interesting, consider giving it a ⭐star. Your support means a lot and helps others discover the project.

### Why Give a Star?

- It encourages continuous development and improvements.
- It helps others find this solution more easily.
- Your feedback and suggestions are always welcome!

### How to Give a Star

If you'd like to give a ⭐star, you can do so by clicking the ⭐star icon at the top right of the project page.

I appreciate your time and support! 🙌

  
