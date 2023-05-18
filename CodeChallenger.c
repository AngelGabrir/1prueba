/***********************************************************/
/*           Programacion para mecatronicos                */
/*  Nombre:    Angel Segura                                */
/*  Matricula: 2021-0311                                   */
/*  Seccion:   Miercoles                                   */
/*  Practica:  Code Challenger                             */
/*  Fecha:     18/08/2021                                  */
/***********************************************************/
#include <stdlib.h>/*Se utiliza con frecuencia en la asignación de puntero de memoria que es común en la mayoría de los programas de C más grandes.
Tambien,sus funciones es generador de números aleatorios.*/
#include <math.h>/*es un archivo de cabecera de la biblioteca estándar del lenguaje de programación C diseñado para operaciones matemáticas básicas.*/
#include <stdio.h>/*Es el archivo de cabecera que contiene las definiciones de las macros, las constantes, 
las declaraciones de funciones de la biblioteca estándar del lenguaje de programación C para hacer operaciones,
estándar, de entrada y salida, así como la definición de tipos necesarias para dichas operaciones.
Como el programa utiliza la instruccion prinf se debe incluir esta biblioteca.*/

void find_roots(double a, double b, double c, double *root1, double *root2){
    // Waiting to be implemented
    double x1=0,x2=0,x,discriminante,parteReal,parteImaginaria;
    if(a==0){//si a es 0 en ambas raices retorno 0, a nunca debe ser 0
    	(*root1)=x1;
        (*root2)=x2;
	}else{
        discriminante=pow(b,2)-4*a*c;//evaluamos la discriminante
        if(discriminante>=0){//mayor o igual a 0, en un caso sea negativo deberia usar parte real e imaginaria
        	if(discriminante==0){//si la discriminante es 0 tiene raiz unica
                x=-b/(2*a);//raiz unica 
                (*root1)=x;//igualamos nuestras variables unicas
        		(*root2)=x;//a nuestras raices de retorno
            }else{
                x1=(-b+sqrt(discriminante))/(2*a);//calculamos las raices en ambos puntos, positivo y negativo
                x2=(-b-sqrt(discriminante))/(2*a);
                (*root1)=x1;
       			(*root2)=x2;
            }
		}
		else{//la discriminante llegaria a ser menor que 0
        	discriminante=fabs(discriminante);//trabajaremos con parte real e imaginaria
        	parteReal=-b/(2*a);
        	parteImaginaria=sqrt(discriminante)/(2*a);
        	(*root1)=parteReal;//igualamos a nuestras raices
       		(*root2)=parteImaginaria;//podria ser + o -, positivo o negativo
   		}  	 
    }  
}

#ifndef RunTests
int main(){
    double root1,root2;
    find_roots(2,10,8,&root1,&root2);
    printf("Roots: %f, %f",root1,root2);
}
#endif
