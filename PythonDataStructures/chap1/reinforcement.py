# Reinforcement section

def is_multiple(n, m):
    """ R-1.1 
       
    Write a short Python function, is_multiple(n, m), that takes two integer 
    values and returns True if n is a multiple of m, that is, n = mi for some 
    integer i, and False otherwise.

    >>> is_multiple(2, 4)
    True
    >>> is_multiple(2, 3)
    False
    """
    return m % n == 0

def is_even(k):
    """R-1.2

    Write a short Python function, is_even(k), that takes an integer value and 
    returns True if k is even, and False otherwise. However, your function cannot 
    use the multiplication, modulo, or division operators.
    
    >>> is_even(8)
    True
    >>> is_even(7)
    False
    """
    return bin(k).endswith('0')

def minmax(data):
    """R-1.3

    Write a short Python function, minmax(data), that takes a sequence of one or 
    more numbers, and returns the smallest and largest numbers, in the form of a 
    tuple of length two. Do not use the built-in functions min or max in implementing 
    your solution.

    >>> minmax([1, 2, 3, 4])
    (1, 4)
    >>> minmax([5, 78, 42, 3, 6])
    (3, 78)
    """
    temp_data = data  # Don't mutate the incoming data structure
    smallest = temp_data.pop(0)
    largest = smallest 

    for number in temp_data:
        if number > largest:
            largest = number
        elif number < smallest:
            smallest = number
    return smallest, largest


def sum_squares(n):
    """R-1.4
    
    Write a short Python function that takes a positive integer n and returns 
    the sum of the squares of all the positive integers smaller than n.

    >>> sum_squares(4)
    14
    >>> sum_squares(6)
    55
    """
    total = 0 
    for i in range(n):
       total = total + (i**2) 
    return total


# R-1.5 Give a single command that computes the sum from Exercise R-1.4, relying 
# on Python's comprehension syntax and the built-in sum function.
assert sum([i**2 for i in range(6)]) == 55, 'Your sum of squares expression does not work'


def sum_odd_int_squares(n):
    """R-1.6

    Write a short Python function that takes a positive integer n and returns the sum of 
    the squares of all the odd positive integers smaller than n.

    >>> sum_odd_int_squares(4)
    10
    >>> sum_odd_int_squares(6)
    35
    """
    total = 0
    for i in range(1, n, 2):
        total = total + (i**2)
    return total


# R-1.7 Give a single command that computes the sum from Exercise R-1.6, relying 
# on Python's comprehension syntax and the built-in sum function.
assert sum([i**2 for i in range(1,6,2)]) == 35, 'Your expression does not work' 


## TODO: Raise errors for edge cases


if __name__ == "__main__":
    import doctest
    doctest.testmod()
