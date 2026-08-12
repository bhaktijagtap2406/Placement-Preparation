
from turtle import pd


pd.merge(employees, departments, on="DeptID")

result = pd.merge(
    employees,
    departments,
    on="DeptID",
    how="inner"
)
pd.merge(
    employees,
    departments,
    on="DeptID",
    how="left"
)

pd.merge(
    employees,
    departments,
    on="DeptID",
    how="outer"
)

pd.merge(
    employees,
    departments,
    left_on="DeptID",
    right_on="DepartmentID"
)

pd.concat([df1, df2])

pd.concat([df1, df2], axis=0) #rows
pd.concat([df1, df2], axis=1) #columns it aligns the dataframes based on the index. If the indexes do not match, it will fill in missing values with NaN.

pd.concat([df1, df2], axis=1, ignore_index=True) # resets the index after concatenation

df.rename(columns={"Salary": "AnnualSalary"}) # returns a new DataFrame with the column renamed, but does not modify the original DataFrame

df.rename(columns={"Salary": "AnnualSalary"}, inplace=True) # modifies the original DataFrame

df.rename(columns={
    "Name": "EmployeeName",
    "Age": "EmployeeAge"
})

df["Salary"] = df["Salary"].apply(lambda x: x * 1.10)

df["Age"].apply(lambda x: x + 1)

def increase_age(x):
    return x + 1

df["Age"] = df["Age"].apply(increase_age)

df["SalaryLevel"] = df["Salary"].apply(
    lambda x: "High" if x > 80000 else "Medium" if x >= 50000 else "Low"
)

df["Department"] = df["Department"].map({
    "IT": "Information Technology",
    "HR": "Human Resources",
    "FIN": "Finance"
}) # returns a new DataFrame with the column values mapped, but does not modify the original DataFrame if not present in the mapping, it will be replaced with NaN

df["Department"].replace({
    "IT": "Information Technology",
    "HR": "Human Resources"
})# returns a new DataFrame with the column values replaced, but does not modify the original DataFrame if not present in the mapping, it will remain unchanged