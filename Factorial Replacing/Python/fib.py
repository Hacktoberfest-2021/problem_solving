import sys
from distutils import util

def is_prime(num):
    if num > 1:
        for i in range(2, int(num/2)+1):
            if (num % i) == 0:
                return False
        else:
            return True
    else:
        return False

def is_multiple_of_five(num):
    return num % 5 == 0

end = int(sys.argv[1])
replace = True
if len(sys.argv) > 2:
    replace = util.strtobool(sys.argv[2])

previous = 1
second_previous = 0
print(second_previous, previous, end=' ')

for n in range(2, end):
    next_fib = previous + second_previous
    second_previous = previous
    previous = next_fib
    if replace and (is_multiple_of_five(next_fib) or is_prime(next_fib)):
        print('0', end=' ')
    else:
        print(next_fib, end=' ')

print()