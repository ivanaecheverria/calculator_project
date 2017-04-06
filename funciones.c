#include <stdio.h>
#include <stdlib.h>


/** \brief Pide un numero
 *
 * \param recibe un texto desde el main el cual sera determinado por el uso de esta funcion
 * \param recibe el numero minimo aceptado a ingresar
 * \param recibe el numero aceptado aceptado a ingresar
 * \return el numero ingresado
 *
 */

int pedirNumero(char texto[])
{
    int numero;
    printf("%s",texto);
    fflush(stdin);
    scanf("%d", &numero);
    return numero;
}
/** \brief  Suma dos numeros
 *
 * \param recibe primer operando
 * \param recibe segundo operando
 * \return el resultado de la resta entre los dos operandos recibidos
 *
 */

float sumar(float num1,float num2)
{
    return num1+num2;
}
/** \brief Resta dos numeros
 *
 * \param  recibe primer operando
 * \param  recibe segundo operando
 * \return el resultado de la resta entre los dos operandos recibidos
 *
 */

float restar (float num1, float num2)
{
    return num1-num2;
}
/** \brief Divide dos numeros
 *
 * \param recibe primer operando
 * \param recibe segundo operando
 * \return el resultado de la division entre los dos numeros recibidos
 *
 */

float dividir(float num1,float num2)
{
    return num1/num2;
}

/** \brief Multiplica dos numeros
 *
 * \param   recibe primer numero a multiplicar
 * \param   recibe el segundo numero que indica por cuanto se multiplica el primero
 * \return  el resultado de la multiplicacion del los numeros recibidos
 *
 */
 float multiplicar (float num1, float num2)
 {
     return num1*num2;
 }

 /** \brief Recibe un valor y lo factoriza
  *
  * \param  recibe el numero  a factorizar
  * \return el resultado de la factorizacion
  *
  */
  int factorializar (int num1)
{
    int factorial=1;
    int i;
    for(i=1;i<=num1;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}

