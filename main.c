#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char contrasenia [20];
    char prueba[20];
    int i=0;
    int comp=0;

    printf("ingrese la contrasenia:");
    gets(contrasenia);

    for(i=0;i<3;i++){
        printf("ingrese nuevamente la contrasenia:");
        gets(prueba);
        comp= strcmp(&contrasenia, &prueba);

        if(comp==0){
            system("cls");
            printf("Felicitaciones,recordás tu contrasenia\n");
            i=3;
        }
    }
    if(comp!=0){
        printf("Tenes que ejercitar la memoria\n");
    }
    system("pause");
}
