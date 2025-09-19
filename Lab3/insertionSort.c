#include "mySort.h"
#include <stdio.h>
#include <stdlib.h>

void mySort(int array[], unsigned int first, unsigned int last)
    {
        int key,j;

        for(int i = first + 1; i <= last; i++){

            key = array[i];
            j = i-1;

            while(j >= 0 &&  myCompare(key, array[j]) < 0){

                mySwap(&array[j], &array[j+1]);
                j--;

            }
           myCopy(&key, &array[j+1]);
        }
    }
