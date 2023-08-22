# Analysis_and_Design_of_Algorithms

## Series and sumatorias


## Getting Started 

## INSERTION-SORT(A)

A = [5, 2, 4, 6, 1, 3]

```py
for j = 2 to A.length 
    key = A[j]
    // Insert A[j] into the sorted sequence A[1..j-1].
    i = j - 1
    while i > 0 and A[i] > key
        A[i + 1] = A[i]
        i = i - 1
    A[i + 1] = key
```

# Analyzing algorithms

![insertion](./images/insertion-sort.jpg)

The running time of the algorithm is the sum of running times for each statement executed.

$T(n)=c_1n+c_2(n-1)+0(n-1)+c_4(n-1)+c_5\sum_{j=2}^nt_j+c_6\sum_{j=2}^n(t_j-1)+c7\sum_{j=2}^n(t_j-1)+c_8(n-1)$


$T(n)=c_1n+c_2(n-1)+c_4(n-1)+c_5(n-1)+c_8(n-1)$

$ = (c_{1}+c_{2}+c_{4}+c_{5}+c_{8})n-(c_{2}+c_{4}+c_{5}+c_{8})$

$\sum_{j=2}^n=\frac{n(n+1)}{2}-1$ and $\sum_{j=2}^n(j-1)=\frac{n(n-1)}{2}$

T(n) Final

$T(n)=c_1n+c_2(n-1)+c_4(n-1)+c_5(\frac{n(n+1)}{2}-1)+c_6(\frac{n(n-1)}{2})+c_7(\frac{n(n-1)}{2})+c_8(n-1)$

$=(\frac{c_5}{2}+\frac{c_6}{2}+\frac{c_7}{2})n^2+(c_1+c_2+c_4+\frac{c_5}{2}-\frac{c_6}{2}-\frac{c_7}{2}+c_8)n-(c_2+c_4+c_5+c_8).$