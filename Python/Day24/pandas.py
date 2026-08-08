# import pandas as pd

df = pd.DataFrame({
    "Name": ["A", "B", "C"],
    "Age": [20, 21, 22],
    "Salary": [40000, 50000, 60000]
})

df.loc[0, "Name"]

df.iloc[0, 0]

df.loc[:, ["Name", "Salary"]]
df.iloc[:, [0, 2]]

df[df["Salary"] > 45000]

df[(df["Age"] > 20) & (df["Salary"] > 45000)]
df["Salary"].isnull()

df["Salary"].fillna(0)

df.dropna()