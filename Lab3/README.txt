1. Everything worked. I was able to implement an insertion sort and merge sort algorithm that was modified to include metric functions such as myCompare(), myCopy(), and mySwap(). The implementation of these metric functions served a similar purpose as the original sorting algorithm however it allowed for the number of comparisons, swaps, and copy operations to be counted.

2.  

Best case (Ω):

The best-case behavior occurs when the array that is provided is already sorted. This provides the algorithm with the least amount of work.
Avg case (ϴ):

The average case behaviour occurs when the array that is provided is randomly sorted. This provides the algorithm with a moderate amount of work (Less than worst case but more than best case).

Worst case (O):

The best case behavior occurs when the array that is provided is sorted in reverse order(from highest to lowest). This provides the algorithm with the most amount of work.

 
INSERTION SORT:

BEST CASE ARRAY: {1,2,3,4,5,6}

Comparisons = 5
f(n) = n-1

Swaps = 0
f(n) = 0

Copy operations = 5
f(n) = n-1

Time Complexity = O(n)

AVERAGE CASE ARRAY: {3,5,1,4,2,6}

Comparisons = 10
f(n) = 1/4(n^2-n)

Swaps = 6
f(n) = 1/4(n^2-n)

Copy operations = 5
f(n) = n-1

Time Complexity = O(n^2)

WORST CASE ARRAY: {6,5,4,3,2,1}

Comparisons = 15
f(n) = 1/2(n^2-n)

Swaps = 15
f(n) = 1/2(n^2-n)

Copy operations = 5
f(n) = n-1

Time Complexity = O(n^2)



MERGE SORT:

BEST CASE ARRAY: {1,2,3,4,5,6}

Comparisons = 20
f(n) = nlog(n)

Swaps = 0
f(n) = 0

Copy operations = 32
f(n) = nlog(n)

Time Complexity = O(nlog(n))

AVERAGE CASE ARRAY: {3,5,1,4,2,6}

Comparisons = 21
f(n) = nlog(n)

Swaps = 0
f(n) = 0

Copy operations = 32
f(n) = nlog(n)

Time Complexity = O(nlog(n))

WORST CASE ARRAY: {6,5,4,3,2,1}

Comparisons = 18
f(n) = nlog(n)

Swaps = 0
f(n) = 0)

Copy operations = 32
f(n) = nlog(n)

Time Complexity = O(nlog(n))






