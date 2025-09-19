#include <stdio.h>
#include <stdlib.h>
#include "mySort.h"
int main(int argc, char * argv[])
{
int data[100000]; /* Array of ints to sort */
int nDataItems; /* number of actual items in the array */
int i;
/* Test data */
if(argc == 1){
nDataItems = 4;
data[0] = 100;
data[1] = 20;
data[2] = 360;
data[3] = 40;
mySort(data, nDataItems);
/* Check that the data array is sorted. */
/* Print sorted array to stdout */
for(i = 0; i < nDataItems; i++) {
printf("%d\n", data[i]);
}

}

else if(argc > 1){
    nDataItems = argc-1;
    for(i=1; i<=nDataItems; i++){
    data[i-1]=atoi(argv[i]);
   // printf("%d", data[i-1]);
}
for(i=0; i<nDataItems; i++){
    mySort(data, nDataItems);
}
for(i=0; i<nDataItems; i++){
    printf("%d\n", data[i]);
}
}

exit(0);
}
