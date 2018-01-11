
from multiprocessing import Pool
import os
def f(x):
# use the os (=operating system) package to report the process id
print("parent ID: ", os.getppid())
print("process id:", os.getpid())
# compute the value of some function f(x) = x*x
f = x*x
return f
# create a team of 5 processes (its better to view these as threads)
p = Pool(5)
# tell each thread to compute f(x) where x is one of 1, 2, 3
input_list = [1, 2, 3]
result = p.map(f, input_list )
print(result)
