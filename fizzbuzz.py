#!/bin/python3

x = 0
while x <= 100:
    if x%3 == 0:
        # fizz
        fizz = True
    else:
        fizz = False

    if x%5 == 0:
        # buxx
        buzz = True
    else:
        buzz = False

    if fizz == True and buzz == True:
        print("FizzBuzz")
    elif fizz == True:
        print("Fizz")
    elif buzz == True:
        print("Buzz")
    else:
        print(str(x))
    x = x+1

