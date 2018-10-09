/*
 * Este programa fue realizado como la tarea#14 el 8 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es dado los valores ingresados por el usuario en un arreglo,
 * mostrar un menú que permita seleccionar entre 4 opciones, sumar los elemntos,
 * obtener el promedio de los elementos, mostrar el numero menor y su posicion y
 * mostrar el numero mayor y su posicion.
 *
 * Fecha: 8 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>

//Funcion que se encarga de efectuar la suma de los elementos del arreglo
double suma(double numero[],int n){
  double s=0;
  for(int i=0;i<n;i++){
    s+=numero[i];
  }
  return s;
}

//Funcion que se encarga de efectuar el promedio de los elementos del arreglo
double promedio(double numero[], int n){
  return suma(numero,n)/n;
}

//Fuuncion que se encarga de mostrar el numero menor del arreglo y su posicion
void menor(double numero[], int n){
  double m=numero[0];
  int pos=0;
  for(int i=1;i<n;i++){
    if(numero[i]<m){
      m=numero[i];
      pos=i;
    }
  }
  printf("El valor menor es: %lf\n", m);
  printf("Y esta en la posicion: %d", pos);
}

//Fuuncion que se encarga de mostrar el numero mayor del arreglo y su posicion
void mayor(double numero[], int n){
  double m=numero[0];
  int pos=0;
  for(int i=1;i<n;i++){
    if(numero[i]>m){
      m=numero[i];
      pos=i;
    }
  }
  printf("El valor mayor es: %lf\n", m);
  printf("Y esta en la posicion: %d", pos);
}


int main(void) {

  //Declaracion de variables
  int n;
  int op;
  printf("Define el tamaño del arreglo: ");
  scanf("%i", &n);

  //Declaracion del arreglo
  double numero[n];

  printf("Escribe %i numeros\n", n);

  //Ciclo que se encarga de indicar al usuario que escriba los elementos
  // que van dentro del arreglo.
  for(int i=0;i<n;i++){
      printf("Escribe el numero %d:", i);
      scanf("%lf",&numero[i]);
  }

  //Ciclo que se encarga de imprimir el menu cada ves que se selecciona una opcion, hasta que
  //el usuario seleccione salir(5) o ponga algo diferente las opciones establecidas(1-5).
  do{
        printf("\nSelecciona una opcion.\n");
        printf("1. Suma.\n");
        printf("2. Promedio\n");
        printf("3. Menor\n");
        printf("4. Mayor\n");
        printf("5. Salir\n");

        scanf("%i", &op);

        //Switch que permite ejecutar cada una de las opciones, cada opcion llama a su
        //respectiva funcion.
        switch (op){
            case 1:
              printf("La suma es %lf", suma(numero,n));
              break;
            case 2:
              printf("El promedio es %lf", promedio(numero,n));
              break;
            case 3:
              menor(numero,n);
              break;
            case 4:
              mayor(numero,n);
              break;
            case 5:
              printf("Saliste.");
              break;
            default:
                printf("La opción elegida no es válida.\n");
        }
    } while (op<=5&&op>=0);

  return 0;
}