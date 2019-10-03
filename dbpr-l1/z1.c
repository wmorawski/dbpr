//
// Created by s430692 on 10/3/19.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    char c[1000];
    FILE *fptr;
    char * line = NULL;
    size_t len = 0;
    ssize_t read;
    
    if ((fptr = fopen(argv[1], "r")) == NULL)
    {
        printf("Error! opening file\n");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    // reads text until newline
    while ((read = getline(&line, &len, fptr)) != -1) {
        char *s = strstr(line, argv[2]);
        printf("%s: %s", line, s);
    }
    fclose(fptr);
    printf("\n");
    return 0;
}
