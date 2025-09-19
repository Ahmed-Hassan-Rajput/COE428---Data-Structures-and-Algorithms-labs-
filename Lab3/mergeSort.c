#include "mySort.h"

void merge(int array[], unsigned int first, unsigned int mid, unsigned int last){
    int i, j, k, B[MAX_SIZE_N_TO_SORT];

    i = first;
    j = mid+1;
    k = first;

    while(i<=mid && j<=last){
        if(myCompare(array[i],array[j])<0){

            myCopy(&array[i], &B[k]);
            i++;
            k++;
        }
        else{
            
            myCopy(&array[j], &B[k]);
            j++;
            k++;
        }
    }

    while(i<=mid){
        
        myCopy(&array[i], &B[k]);
        i++;
        k++;
    }

    while(j<=last){
        
        myCopy(&array[j], &B[k]);
        j++;
        k++;
    }

    for(int i = first; i<=last; i++){

        
        myCopy(&B[i], &array[i]);
    }

}







void mySort(int array[], unsigned int first, unsigned int last)
    {
        int mid;
        if(myCompare(first,last)<0){
            mid = (first+last)/2;
            
            mySort(array, first, mid);
            mySort(array, mid+1, last);
            merge(array, first, mid, last);
        }
    }
