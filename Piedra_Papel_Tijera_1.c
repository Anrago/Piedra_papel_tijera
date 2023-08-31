//Antonio Ramos Gonzalez Equipo 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int opc, ran;
    srand(time(NULL));
    ran=rand()%3+1;
    
    printf("Ingrese una opcion\n");
    printf("1-piedra\n2-papel\n3-tijera\n");
    scanf("%d",&opc);

    switch(opc-ran)
    {
        case 1:
        
            printf("Gano el usuario");
            break;

        case -1:

            printf("Gano computadora");
            break;

        case -2:

            printf("Gano el usuario");
            break;

        case 2:

            printf("Gano computadora");
            break;

        default:

            printf("empate");
    }
    return 0;
}