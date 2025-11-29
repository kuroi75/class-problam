'''
mark = int(input("Enter mark:  "))

if mark >= 40:
    print("Pass")
else:
    print("Fail")
'''
# Simple calculator
num1 = int(input("Enter first number: "))
num2 = int(input("Enter second number: "))

op = input("Enter operation (+, -, *, /): ")

if op == '+':
    print ("Result:", num1 + num2)
elif op == '-':
    print ("Result:", num1 - num2)
elif op == '*':
    print ("Result:", num1 * num2)
elif op == '/':
    if num2 != 0:  #fail safe
        print ("Result:", num1 / num2)
    else:
        print("Error: Division by zero")
else:
    print("Invalid operation")
