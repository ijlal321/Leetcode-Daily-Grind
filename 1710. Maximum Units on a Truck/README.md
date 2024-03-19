# Truck Loading Algorithm

## Intuition
The intuition behind this algorithm is to sort the box types by the number of units per box in descending order. Then, fill the truck with as many boxes as possible from the most to the least efficient ones.

## Approach
The approach employs a greedy algorithm that iterates over the sorted box types. It keeps track of the total number of units and the current truck size. For each box type, it calculates the minimum number of boxes that can fit in the remaining space of the truck. Then, it adds that number times the units per box to the total units and updates the truck size by subtracting the number of boxes used. The algorithm stops when the truck is full or there are no more box types left.

## Complexity
- Time Complexity: O(nlogn), where n is the number of box types. This is due to sorting the box types by the units per box. The iteration over the box types takes O(n).
- Space Complexity: O(1), because only constant extra space is used to store the total units, the current truck size, and some temporary variables.

