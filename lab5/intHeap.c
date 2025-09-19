/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */

// int heapDelete()
// {
//   return 0;  //A dummy return statement
// }

// /**
//  *  addHeap(thing2add) adds the "thing2add" to the Heap.
//  *
//  */
// void addHeap(int thing2add)
// {
// }

// /**
//  * heapSize() returns the number of items in the Heap.
//  *
//  */
// int heapSize()
// {
//   return 0;  //A dummy return statement
// }



/* intHeap.c */
#include <stdio.h>

static int heap[100];
static int heapCount = 0;

void addHeap(int thing2add) {
  if (heapCount >= 100) {
    fprintf(stderr, "Error: Heap overflow\n");
    return;
  }

  int i = heapCount++;
  while (i > 0 && heap[(i - 1) / 2] < thing2add) {
    heap[i] = heap[(i - 1) / 2];  
    i = (i - 1) / 2;
  }
  heap[i] = thing2add;  
}

int heapDelete() {
  if (heapCount == 0) {
    fprintf(stderr, "Error: Heap underflow\n");
    return -1;
  }

  int maxVal = heap[0]; 
  heap[0] = heap[--heapCount]; 

  int i = 0;
  while (2 * i + 1 < heapCount) {
    int j = 2 * i + 1;
    if (j + 1 < heapCount && heap[j] < heap[j + 1]) {
      j++; 
    }
    if (heap[i] >= heap[j]) break;

    
    int temp = heap[i];
    heap[i] = heap[j];
    heap[j] = temp;

    i = j;
  }

  return maxVal;
}

int heapSize() {
  return heapCount;
}

