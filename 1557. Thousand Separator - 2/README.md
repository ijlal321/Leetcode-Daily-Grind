# Thousand Separator

## Intuition
The goal of this code is to convert a given integer `n` into a string representation with thousand separators. For example, if `n` is 123456789, the function should return "123,456,789".

## Approach
1. The code first converts the integer `n` to a string `a` using the `toString` method.
2. It then checks the value of `n` to determine the appropriate thousand separators to insert into the string.
3. Depending on the value of `n`, it uses the `split`, `splice`, `reverse`, and `join` methods to insert the separators at the correct positions.
4. Finally, it returns the formatted string.

## Complexity
- Time complexity: O(log10(n)), where `n` is the input integer. It is logarithmic in the value of `n` because the number of iterations depends on the number of digits in the input integer. Each iteration involves constant time operations (splitting, splicing, reversing, etc.).
- Space complexity: O(log10(n)), where `n` is the input integer. The code uses extra space to store the string representation of `n` (`a`) and the array `array` to hold the individual characters of the formatted string. The space required scales with the number of digits in `n`.
