### Problem Statement
Start by $1 on the first day [MONDAY]. For every day in the week, put $1 more than yesterday. On the next Monday, start again by increasing $1 from the previous Monday.

### Approach
- **Week 1 money**: [1, 2, 3, 4, 5, 6, 7] -> 28
- **Week 2 money**: [2, 3, 4, 5, 6, 7, 8] -> 28 + 7
- **Week 3 money**: [3, 4, 5, 6, 7, 8, 9] -> 28 + 7 + 7

This forms an Arithmetic Progression.

Now, let \( n = 7 \times w + \text{extra_days} \)

For complete weeks [ \( w \) in code] :

- AP starting with 28 and an increment of 7.
- Money for \( w \) complete weeks = \( [ 28 \times w ] + [ 0 + 7 + 14 + ... + 7w ] \)
  \( = [ 28w + \frac{7w \times (w - 1)}{2} ] \)

For days that do not form a complete week:

- Add money using a loop starting with \( w + 1 \) for \( x \) days that are left. \( x < 7 \)

### Complexity
- Time complexity: \( O(1) \)
- Space complexity: \( O(1) \)

This solution can be reduced to a few lines as it is basic math, but then the code would not be readable. Happy Coding!!