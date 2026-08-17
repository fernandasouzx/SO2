#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 100

int main(){
    char buf[BUFFER_SIZE];
    int n;

    //ler do teclado
    n = read(0, buf, BUFFER_SIZE);

    //imprime no terminal o que foi lido do teclado
    if(n>0){
        write(1, buf, n);
    }



    return 0;
}