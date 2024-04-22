import random
import ctypes
import os

# Get the full path to the shared object file
so_file_path = os.path.abspath('100-operations.so')

# Load the shared object file
cops = ctypes.CDLL(so_file_path)

# Rest of the script remains the same
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
