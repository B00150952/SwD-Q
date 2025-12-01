import sys

def add(x, y)
    """Add function"""
    return x+y

def subtract(x, y):
    """Subtract function"""
    return x-y

def multiply(x, y):
    """Multiply function"""
    return x*y

def divide(x, y):
    """Divide function"""
    if y == 0:
        raise ValueError("Cannot divide by zero")
    return x/y

print(add(10,5))
print("Hello from pythin!")
print("Your Python version is:"  + sys.version)
