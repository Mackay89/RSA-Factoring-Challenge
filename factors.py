#!/usr/bin/python3

from sys import argv

def factors(number_to_check):
    """
    Find two small number that multiply to a given  number.
    """

    i = 2

    if number_to_check < 2:
        return

    while number_to_check % i:
        i += 1

    print(f"{number_to_check}={int(number_to_check / i)}*{i}")


if len(argv) != 2:
    exit()

try:
    with open(argv[1]) as file:
            line = file. readline()

            while line != "":
                number_to_check = int(line.strip())
                factors(number_to_check)
                line = file.readline()

except Exception as e:
    pass
