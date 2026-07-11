# Binary Search

## Definition

Binary Search is a searching algorithm that works on a sorted array by repeatedly dividing the search space into two halves.

## Conditions

- Array must be sorted.

## Algorithm

1. Set `low = 0`.
2. Set `high = n - 1`.
3. Calculate `mid = low + (high - low) / 2`.
4. If `arr[mid] == target`, return the index.
5. If `target > arr[mid]`, search the right half.
6. Otherwise, search the left half.
7. Repeat until found or `low > high`.

## Time Complexity

- Best Case: O(1)
- Average Case: O(log n)
- Worst Case: O(log n)

## Space Complexity

- O(1) (Iterative)