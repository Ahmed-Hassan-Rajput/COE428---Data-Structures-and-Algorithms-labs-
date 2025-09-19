#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

extern char *pop();      
extern void push(char *); 
extern int isEmpty();   
#define MAX_TAG_LEN 100  

int main(int argc, char *argv[]) {
    char tag[MAX_TAG_LEN];  
    int ch, i;

    while ((ch = getchar()) != EOF) {  
        if (ch != '<') 
            continue;

        i = 0;  
        ch = getchar();  
        
        if (ch == '/') {  
            ch = getchar();  
            
            
            while (isalnum(ch)) {
                tag[i++] = ch;
                ch = getchar();
            }
            tag[i] = '\0';  

            
            char *topTag = pop();
            if (topTag == NULL || strcmp(topTag, tag) != 0) {
                printf("INVALID XML\n"); 
                exit(1);
            }

        } else {  
           
            while (isalnum(ch) || ch == ' ') {
                if(ch == ' '){
                    while(ch != '>' && ch != EOF){
                        ch = getchar();
                    }
                    continue;
                }
                tag[i++] = ch;
                ch = getchar();
            }
            tag[i] = '\0';  
            
            push(strdup(tag));  
        }
    }

   
    if (!isEmpty()) {
        printf("INVALID XML\n");  
    } else {
        printf("VALID XML\n");  
    }

    exit(0);
}

