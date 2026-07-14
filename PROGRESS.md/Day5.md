📒 Day 5 Notes
Binary Search on Answers Checklist
What are we finding? (Min/Max Answer)
Can we guess an answer?
Can we verify the guess?
Does it form a True/False pattern?
Find start.
Find end.
Write possible().
Apply Binary Search.
Problem: Ship Packages Within D Days (1011)

Answer: Minimum Ship Capacity

Search Space

start = max(weights);
end = sum(weights);

possible(capacity)

Load packages in order.
If next package exceeds capacity:
Start a new day.
Count days.

Return:

daysUsed <= days

Time Complexity

O(n log(sum))