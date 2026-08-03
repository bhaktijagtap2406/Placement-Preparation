import numpy as np

arr = np.array([1, 2, 3, 4, 5, 6])

print(arr)

print(arr.shape)

arr_2d = arr.reshape(2, 3)

print(arr_2d)

print(arr_2d.shape)

arr = np.array([[1,2,3],
                [4,5,6]])

new_arr = arr.flatten()

print(new_arr)

arr.ravel()

a = np.array([10,20,30])

print(a + 5)
print(a - 5)
print(a * 2)
print(a / 10)

a = np.array([1,2,3])
b = np.array([4,5,6])

print(a+b)

import numpy as np

arr = np.array([4,9,16])

print(np.sqrt(arr))

arr = np.array([2,3,4])

print(np.power(arr,2))

arr = np.array([1,2,3])

print(np.exp(arr))

arr = np.array([-5,-2,3])

print(np.abs(arr))

import numpy as np

sales = np.array([100, 200, 300, 400])

np.sum(sales)

np.mean(sales)

np.max(sales)

np.min(sales)

data = np.array([
    [10,20,30],
    [40,50,60]
])

np.sum(data)
np.sum(data, axis=0)
np.sum(data, axis=1)

import numpy as np

marks = np.array([35, 70, 45, 90, 20])

print(marks > 50)

marks[marks > 50]

salary = np.array([30000, 50000, 70000, 25000])

salary > 40000

salary[(salary > 30000) & (salary < 70000)]
salary[(salary < 30000) | (salary > 60000)]

import numpy as np

marks = np.array([45, 60, 75, 30, 90])

print(marks[(marks >= 60) & (marks <= 90)])

#broadcasting : it allows numpy to perform operations on arrays of different shapes. It automatically expands the smaller array to match the shape of the larger array.

import numpy as np

a = np.array([1,2,3])

print(a + 5) # [6 7 8]

a = np.array([
    [10,20,30],
    [40,50,60]
])

b = np.array([1,2,3])

print(a + b) # [[11 22 33]
              #  [41 52 63]]
              #because b is broadcasted to match the shape of a

import numpy as np

marks = np.array([
    [70,80,90],
    [60,75,85]
])

bonus = np.array([5,10,15])

print(marks + bonus)
#broadcasting rules:
#1. If the arrays have different number of dimensions, the shape of the smaller-dimensional array is padded with ones on its leading (left) side.
#2. If the shape of the two arrays does not match in any dimension, the array with shape equal to 1 in that dimension is stretched to match the other shape.
#3. If in any dimension the sizes disagree and neither is equal to 1, an error is raised.
#4. The resulting array shape is the maximum size along each dimension of the input arrays.