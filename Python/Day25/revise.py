import pandas as pd

df = pd.DataFrame({
    "Name": ["A", "B", "C", "D"],
    "Age": [20, 21, 22, 23],
    "Salary": [40000, 50000, 60000, 70000]
})

df.loc[1:2, ["Name", "Salary"]]

#Select row 0, Salary only.
# Select all rows, Age and Salary columns.

df.loc[0, "Salary"]
df.loc[:, ["Age", "Salary"]]

df.iloc[[1, 2], [0, 2]] #Select rows 1 and 2, columns 0 and 2 (Name and Salary)
df.iloc[:, [0, 2]]  # Select all rows, columns 0 and 2 (Age and Salary)

df.loc[df["Salary"] > 45000] # Select all rows, where Salary is greater than 45000

df.loc[(df["Age"] > 20) & (df["Salary"] > 45000)] # Select all rows, where Age is greater than 20 and Salary is greater than 50000

df.fillna(0) # Fill all NaN values with 0

df["Salary"] = df["Salary"].fillna(0)

df.dropna(subset=["Salary"])

df = pd.DataFrame({
    "Name": ["A", "B", "A", "C"],
    "Salary": [40000, 50000, 40000, 60000]
})

df.drop_duplicates(subset=["Name", "Salary"]) # Drop duplicate rows based on Name and Salary columns

df.sort_index() # Sort the DataFrame by index

df.sort_values("Salary", ascending=False)

df.sort_values("Age",ascending=True) # Sort the DataFrame by Age in ascending order


df = pd.DataFrame({
    "Department": ["IT", "IT", "HR", "HR"],
    "Salary": [50000, 70000, 60000, 80000]
})

df.groupby("Department")["Salary"].mean() # Group by Department and calculate the mean Salary

df.groupby("Department")["Salary"].agg(["min", "max"]) # Group by Department and calculate the minimum and maximum of Salary

df.value_counts("Department") # Count the occurrences of each unique value in the Department column

result = df.groupby("Department")["Salary"].mean()

result.reset_index() # Reset the index of the result DataFrame