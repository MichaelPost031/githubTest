#include <stdio.h>
#include <stdlib.h>

int addToArray(int array[], int intToAdd){
    int truthValue = 0;
    for(int i = 0; i < 10; i++){
        if(array[i] == intToAdd){
            truthValue == 1;
        }  
    }
    for(int i = 0; i < 10; i++){
        if(array[i] == NULL){
            array[i] == intToAdd;
        }  
    }
}

int main(){
    int array[10];
    array[3] = 5;
    printf("%s\n", "Hello World!");
    addToArray(array, 5);
    for(int i = 0; i < 10; i++){
        printf("%d\n", array[i]);
    }
}

