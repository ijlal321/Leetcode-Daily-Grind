# Intuition

The intuition for the `threeConsecutiveOdds` function involves iterating through the array and checking groups of three consecutive elements at each step. The function uses a for loop to traverse the array, and at each iteration, it applies a bitwise AND operation (`& 1`) to determine if the current element and the next two elements are all odd. If a triplet of consecutive odd numbers is found, it returns true; otherwise, it continues the search until the end of the array and returns false if no such triplet is found.

# Approach

The function iterates through the array, ensuring it stops at a position where there are still two more elements to check (hence `i <= n - 3`).
For each position `i`, the code checks if the elements at `i`, `i + 1`, and `i + 2` are odd using the bitwise AND operation (`& 1`). This operation checks the least significant bit of the number, which indicates whether it's odd or even.
If all three numbers are odd, the function immediately returns true.
If no such triplet is found, the function returns false after completing the loop.

# Complexity

**Time Complexity:** The primary factor that determines the time complexity is the single for loop that iterates through the array. In the worst case, this loop runs for almost the entire length of the array. Therefore, the time complexity is O(n), where n is the length of the array.

**Space Complexity:** The function uses a constant amount of extra space regardless of the input size. It only has a few local variables (like `n` and `i`) and does not use any additional data structures that grow with the input size. Therefore, the space complexity is O(1), which means it's constant space complexity.