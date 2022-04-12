#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    //definicion e inicializacion de variables.
    
    char contrasenia [20];
    char prueba[20];
    int i=0;
    int comp=0;
    
    //se solicita la contraseña al usuario.
    
    printf("ingrese la contrasenia:");
    gets(contrasenia);
    
    //se le solicita la contraseña 3 veces comparando la variable pueba y contraseña.
    
    for(i=0;i<3;i++){
        printf("ingrese nuevamente la contrasenia:");
        gets(prueba);
        comp= strcmp(&contrasenia, &prueba);
        
    //se verifica si hubo coincidencia y se muestra por teclado los respectivos mensajes.
        
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
