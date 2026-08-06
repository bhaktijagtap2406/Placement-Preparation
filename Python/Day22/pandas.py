import pandas as pd

data = {
    "Name": ["Amit", "Riya", "John"],
    "Age": [21, 22, 20],
    "Marks": [90, 85, 88]
}

df = pd.DataFrame(data)

print(df)

df.head()
df.head(2)

df.tail()

df.info()

df.describe()