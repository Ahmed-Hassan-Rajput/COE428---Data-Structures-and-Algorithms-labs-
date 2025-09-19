
#include <stdio.h> 
#include <stdlib.h>
#include <ctype.h>

extern int pop();
extern void push(int);
extern void addHeap(int);
extern int heapDelete();
extern int heapSize();
extern int isEmpty();

int main(int argc, char * argv[])
{
  int value;

  
  while (scanf("%d", &value) != EOF) {
    fprintf(stderr, "READING INPUT: %d\n", value);
    addHeap(value);
  }

  
printf("<heap>\n");
int tempHeap[100];  
int tempCount = 0;  

while (heapSize() > 0) {
    int maxVal = heapDelete();
    printf("  <node id=\"%d\"></node>\n", maxVal);
    push(maxVal);  
    tempHeap[tempCount++] = maxVal;  
}
printf("</heap>\n");


printf("Sorted order:\n");
for (int i = 0; i < tempCount; i++) {
    printf("%d\n", tempHeap[i]);
}



  printf("Reverse order:\n");
  while (!isEmpty()) {
    printf("%d\n", pop());
  }

  exit(0);
}


