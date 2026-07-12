import random

print(random.randint(1,100))
print(random.random())

colors = ["Red","Green","Blue","Pink"]
print(random.choice(colors))

numbers = [1,2,3,4,5]
random.shuffle(numbers)
print(numbers)