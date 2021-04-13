#include <stdio.h>
#include <stdlib.h>

int main (){

    int var=11;
    int *pvar=&var;
   // printf("contenido de la variable: %d\n",var);
   
    //2-a
    printf("contenido de lo que apunta el puntero: %d\n",*pvar);
    //2-b
    printf("contenido del puntero: %u\n",pvar);
    //2-c
    printf("direccion de memoria de la variable: %u\n",&var);
    //2-d
    printf("direccion de memoria de donde esta ubicado el puntero: %u\n",&pvar);
    //2-e
    printf("tamanio del puntero: %d",1*sizeof(var));

    /*printf("con diferentes notaciones \n");
    printf("contenido del puntero con notacion de hexadecimal sin signo: %x\n",pvar);
    printf("contenido del puntero con notacion de decimal sin signo: %u\n",pvar);
    printf("contenido del puntero con notacion de puntero: %p\n",pvar);*/



    getchar();

    
    return 0;
}