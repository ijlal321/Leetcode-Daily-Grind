**Approach**

*Explanation*:

1. Initialize a variable `sum` to 0 to store the sum of unique elements.
2. Create a map `mp` to store the count of occurrences for each unique element.
3. Iterate through the vector `nums` using a range-based for loop (`for(auto it : nums)`).
4. Increment the count of the current element in the map.
5. Iterate through the map `mp` using another range-based for loop (`for(auto it : mp)`).
6. Check if the count (`it.second`) of the current element is 1.
   - If true, add the value of the current element (`it.first`) to the sum.
7. Return the final value of `sum`.

*Trace*:

Let's consider an example with the input vector `nums = {1, 2, 3, 2, 4, 1, 5}`.

Map `mp` after the first loop:
{1: 2, 2: 2, 3: 1, 4: 1, 5: 1}

In the second loop:
- For (1, 2), the count is 2, so skip.
- For (2, 2), the count is 2, so skip.
- For (3, 1), the count is 1, so add 3 to the sum.
- For (4, 1), the count is 1, so add 4 to the sum.
- For (5, 1), the count is 1, so add 5 to the sum.

The final sum is 3 + 4 + 5 = 12.

![1.jpg](1.jpg)

**Complexity**

- Time complexity: O(n)
- Space complexity: O(n)
