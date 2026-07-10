# File Handling

## Modes

- r → Read
- w → Write
- a → Append
- x → Create

## Example

```python
with open("data.txt","r") as file:
    print(file.read())
```

## Why use with?

Automatically closes the file.