/***********************************************************/
/*           Programacion para mecatronicos                */
/*  Nombre:                                                */
/*  Matricula:                                             */
/*  Seccion:   Miercoles                                   */
/*  Practica:  calculadora                                 */
/*  Fecha:     2/6/2021                                    */
/***********************************************************/

#include <stdio.h> 
#include <math.h> 

float nun1 = 0.0;
float nun2 = 0.0;
float result = 0.0;

float multiplicacion (float nun1, float nun2)
{
    return (nun1 * nun2);
}

int main(int argc, char const *argv[])
{
    printf("introduzca el primer numero: ");
    scanf("%f",&nun1);
    printf("introduzca el segundo numero: ");
    scanf("%f",&nun2);
    printf("Resultado de %f x %f = %f",nun1,nun2, multiplicacion(nun1,nun2));
    return 0;
}

