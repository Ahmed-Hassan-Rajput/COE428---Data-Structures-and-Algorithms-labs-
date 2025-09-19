#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


#define ROW 8
#define COLUMN 3


char states[ROW][COLUMN] = {
    {'A', 'E', 'B'},
    {'B', 'F', 'A'}, 
    {'C', 'H', 'F'}, 
    {'D', 'G', 'C'},
    {'E', 'D', 'E'}, 
    {'F', 'H', 'E'}, 
    {'G', 'A', 'C'}, 
    {'H', 'B', 'G'}};

char current = 'B'; 

void ozC(char input){
    current = states[current - 'A'][input - '0' + 1];
    if(current != '\0'){
    printf("The next state is: %c\n", current);
}
    else if(current == '\0'){
        printf("This state has been deleted.\nPlease enter different input.\n");
    }
}


void changeC(char num, char state){

    bool validState = false;
    
    for(int i = 0; i < ROW; i++){
    if(states[i][0] == state){    
    states[current - 'A'][num - '0' + 1] = state;
    validState = true;
    }
    
}

if(validState == false){
    printf("State cannot be modified to a deleted state.\nPlease enter different input.\n");
}
}


void printC(){
    for(int i = 0; i < ROW; i++){
        for(int j = 0; j < COLUMN; j++){
            printf("%c", states[i][j]);
        }
        printf("\n");
    }
}

void garbage() {
    bool isReferenced[ROW] = {false}; 

    
    for (int i = 0; i < ROW; i++) {
        for (int j = 1; j < COLUMN; j++) {  
            for (int k = 0; k < ROW; k++) {
                if ((states[k][0] == states[i][j]) && (k!=i)) {
                    isReferenced[k] = true;  
                }
            }
        }
    }

    
    
    bool foundGarbage = false;
    for (int i = 0; i < ROW; i++) {
        if ((!isReferenced[i]) && (states[i][0] != '\0')) {
            printf("Garbage states: %c", states[i][0]);
            foundGarbage = true;
        }
    }

    if (!foundGarbage) {
        printf("No garbage");  
    }
    printf("\n");
}

void deleteGarbage(char state){
    bool isReferenced[ROW] = {false};  

    
    for (int i = 0; i < ROW; i++) {
        for (int j = 1; j < COLUMN; j++) {  
            for (int k = 0; k < ROW; k++) {
                if ((states[k][0] == states[i][j]) && (k!=i)) {
                    isReferenced[k] = true;  
                }
            }
        }
    }

    
    
    bool foundGarbage = false;

    if(state!='\0'){
        for(int i=0; i<ROW; i++){

            if(states[i][1] == state){
                for(int j=0; j<COLUMN; j++){
                    states[i][1] = '\0';
                }

            }

            if(states[i][2] == state){
                for(int j=0; j<COLUMN; j++){
                    states[i][2] = '\0';
                }
        }


            if(states[i][0] == state){
                printf("Deleted.");
                for(int j=0; j<COLUMN; j++){
                    states[i][j] = '\0';
                    
                }
                foundGarbage = true;
                
                
            }

            
    }
}


    else{
    for (int i = 0; i < ROW; i++) {
        if ((!isReferenced[i]) && (states[i][0] !='\0')) {
            printf("Deleted states: %c ", states[i][0]);
            for(int j = 0; j < COLUMN; j++){
            states[i][j] = '\0';
            
        }
        foundGarbage = true;
        }
    }
}

    if (!foundGarbage) {
        printf("No states deleted.");  
    }
    printf("\n");
}


void remove_spaces(const char *input, char *output) {
    int j = 0;
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] != ' ') {
            output[j++] = input[i];
        }
    }
    output[j] = '\0'; 
}

int main(){

    printf("Starting state: %c\n", current);

    char iinput[10];
    char input[10];
    while (1) {
        printf("Enter input: ");
        fgets(iinput, sizeof(iinput), stdin);
        
        
        iinput[strcspn(iinput, "\n")] = 0;  
    
        remove_spaces(iinput, input);
    
        if (input[0] == 'e') {
            break;
        }
    
        if (input[0] == '0' || input[0] == '1') {
            ozC(input[0]);
        } else if ((input[0] == 'c') && (input[1] == '0' || input[1] == '1') && (input[2] >= 'A' && input[2] <= 'H')) {
            changeC(input[1], input[2]);
        } else if (input[0] == 'p') {
            printC();
        } else if (input[0] == 'g') {
            garbage();
        } else if (input[0] == 'd' && (input[1] == '\0')) {
            deleteGarbage('\0');
        } else if (input[0] == 'd' && (input[1] >= 'A' && input[1] <= 'H')) {
            deleteGarbage(input[1]);
        } else{
            printf("Enter valid argument.\n");
        }
    }
    

}
