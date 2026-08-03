import numpy as np

numbers = np.array([1, 2, 3, 4])

numbers * 2

arr = np.array([
    [1, 2, 3],
    [4, 5, 6]
])

print(arr)

arr.shape
np.zeros(5)

np.ones(4)

np.arange(1,10)

np.arange(0,10,2)

np.linspace(0,10,5)

arr.ndim

arr.size

arr = np.array([10,20,30,40])

print(arr[0])

arr = np.array([
    [1,2,3],
    [4,5,6]
])

print(arr[0][1])

arr = np.array([10,20,30,40,50])

arr[1:4]

arr = np.array([
    [1,2,3],
    [4,5,6],
    [7,8,9]
])

arr[0:2, 1:3]