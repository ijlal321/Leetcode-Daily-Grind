### ✅ Intuition

The intuition behind this code is to iterate through the Roman numeral string from right to left, converting each symbol to its corresponding integer value. If the current symbol has a smaller value than the symbol to its right, we subtract its value from the result; otherwise, we add its value to the result. By processing the string from right to left, we can handle cases where subtraction is required (e.g., IV for 4) effectively.

### ✅ Approach for Code

1. **Create an unordered map (romanValues)** to store the integer values corresponding to each Roman numeral symbol ('I', 'V', 'X', 'L', 'C', 'D', 'M').
2. **Initialize a variable `result` to 0** to store the accumulated integer value.
3. **Iterate through the input string `s` from right to left** (starting from the last character).
4. For each character at index `i`, **get its integer value (`currValue`)** from the `romanValues` map.
5. **Check if the current symbol has a smaller value than the symbol to its right** (i.e., `currValue < romanValues[s[i + 1]]`) using the condition `i < s.length() - 1`. If true, subtract `currValue` from the `result`; otherwise, add it to the `result`.
6. **Update the result** accordingly for each symbol as you iterate through the string.
7. Finally, **return the accumulated result** as the integer equivalent of the Roman numeral.

### ✅ Complexity

1. **Time Complexity**: The time complexity of this code is O(n), where 'n' is the length of the input string `s`. This is because we iterate through the entire string once from right to left.

2. **Space Complexity**: The space complexity is O(1) because the size of the `romanValues` map is fixed and does not depend on the input size. We use a constant amount of additional space to store the result and loop variables, so the space complexity is constant.