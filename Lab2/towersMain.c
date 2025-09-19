#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char * argv[])
{
    int n,from,dest;
    if(argc==1){
        n = 3;
        from = 1;
        dest = 2;
    }

    else if(atoi(argv[1])<=0){ //error check
        fprintf(stderr,"Disk value cannot be negative or 0, please try again.");
        exit(1);
    }
    else if(atoi(argv[1])>=1){

     if(argc==2){
        n = atoi(argv[1]);
        from = 1;
        dest = 2;

    }

    else if(argc==3 || argc>=5){ //error check
        fprintf(stderr, "You can only enter 0, 1, or 3 arguments, please try again.");
        exit(1);
    }

    else if(argc==4){
        n = atoi(argv[1]);
        from = atoi(argv[2]);
        dest = atoi(argv[3]);
        if(from==dest){ //error check
            fprintf(stderr, "The two IDS must be different, please try again.");
            exit(1);
        }
        else if(from <= 0 || from >=4 || dest <=0 || dest>=4){ //error check
            fprintf(stderr, "The tower IDS must be either 1, 2 or 3, please try again.");
            exit(1);
        }
    }

    
}




    towers(n, from, dest);
    exit(0);
}



