# Write a simple calculator that takes two numbers and an operator as input and performs the calculation.
# The program should print the result to the console.
# The program should support:
# Addition
# Subtraction
# Multiplication
# Division


def calculator():
    print("Welcome to the Python Calculator")
    print("Please enter your first number")
    num1 = float(input())
    print("Please enter your second number")
    num2 = float(input())
    print("Please enter your operator")
    operator = input()

    if operator == "+":
        print(num1 + num2)
    elif operator == "-":
        print(num1 - num2)
    elif operator == "*":
        print(num1 * num2)
    elif operator == "/":
        print(num1 / num2)
    else:
        print("Please enter a valid operator")

    print("Would you like to calculate again? Y/N")
    response = input()
    if response == "Y":
        calculator()
    else:
        print("Thank you for using the Python Calculator")


calculator()
