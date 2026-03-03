#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc < 2 || argc > 11) {
        printf("Error: Requires 1-10 arguments\n");
        return 1;
    }
    
    char buffer[200] = "";
    int valid = 1;
    
    for(int i=1; i<argc; i++) {
        if(strlen(argv[i]) < 1 || strlen(argv[i]) > 4) {
            valid = 0;
            break;
        }
    }
    
    if(!valid) {
        printf("Error: Each argument must be 1-4 characters\n");
        return 1;
    }
    
    for(int i=1; i<argc; i++) {
        strcat(buffer, argv[i]);
        if(i < argc-1) strcat(buffer, "-");
    }
    
    printf("%s\n", buffer);
    return 0;
}
