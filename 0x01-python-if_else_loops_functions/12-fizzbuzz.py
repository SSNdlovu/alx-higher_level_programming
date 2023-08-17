#!/usr/bin/python3
# 12-fizzbuzz.py


def fizzbuzz():
    """Print the num 1 2 100 sep by a space.

    For multi of three
    For multi of fiv
    For multi of three and five
    """
    for number in range(1, 101):
        if number % 3 == 0 and number % 5 == 0:
            print("FizzBuzz ", end="")
        elif number % 3 == 0:
            print("Fizz ", end="")
        elif number % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(number), end="")
