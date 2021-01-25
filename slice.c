#include <stdio.h>
#include <stdlib.h>
#include <string.h>



#define SIZE 10

char* slice(char *string, int slice_from, int slice_to){
    char *buffer;
    buffer = (char *)malloc(SIZE*sizeof(char));
    if(slice_to < 0){
        slice_to = strlen(string) -1;
        printf("%d\n", slice_to);
        for(int i = 0, j = slice_from; i <= slice_to; i++, j++){
            buffer[i] = string[j];
        }
    }
    if(slice_to > slice_from){
        for(int i = 0, j = slice_from; i <= slice_to; i++, j++){
            buffer[i] = string[j];
        }
    }
    return buffer;

}
