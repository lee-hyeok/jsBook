#include <stdio.h>
#include <stdlib.h> 

int globalVal = 10; 
static int constVal = 20; 


int func() { 
    int localFuncVal1 = 30; 
    int localFuncVal2 = 40; 
    printf("localFuncVal1 Address   : \t %p \n", &localFuncVal1);
    printf("localFuncVal2 Address   : \t %p \n", &localFuncVal2);
    return 20;
}

int main(void) {
    int localMainVal1 = 50;
    int localMainVal2 = 60;
    char *mallocVal1 = malloc(sizeof(char) * 16); 
    char *mallocVal2 = malloc(sizeof(char) * 16); 
    printf("constVal Address      : \t %p \n", &constVal);
    printf("globalVal Address     : \t %p \n", &globalVal);
    printf("main Address          : \t %p \n", &main);
    printf("func Address          : \t %p \n", &func);
    printf("mallocVal2 Address    : \t %p \n", mallocVal2);
    printf("mallocVal1 Address    : \t %p \n", mallocVal1);
    printf("localMainVal1 Address : \t %p \n", &localMainVal1);
    printf("localMainVal2 Address : \t %p \n", &localMainVal2);
    localMainVal1 = func();
    localMainVal2 = func();
    free(mallocVal1);
    free(mallocVal2);
    return 0;
}