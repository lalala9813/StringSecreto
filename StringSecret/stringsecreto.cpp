#include <iostream>
#include <ctype.h>/*inclui esta libreria para poder usar isalpha para ver si eran letras y isdigit para ver si eran numeros
decimales */
#include <cstdio>/*use esta libreria para poder guardar los elementos de mi variable de tipo char en una variable
tipo string*/

using namespace std;

int main()
{
    /*B,u%e-n*a-s7P*r,o&f+e!s$o/r7M#a'n"u'e/l*/

    int i,j;
    char exp[39];
    cout << "Pruebelo con esto jajaja y mire la magia --> B,u%e-n*a-s7P*r,o&f+e!s$o/r7M#a-n+ue/l\n" ;
    cout << "\nIntroduzca su expresion --> ";
    gets(exp);/* Para que mi array exp reciba los valores del cout de arriba*/

    int tam=sizeof(exp);/*almacene el tamaño de mi lista exp en una variable entera llamada tam*/
    for(i=0;i<tam;i++)/*for que recorre toda la expresion guardada en la variable exp*/
    {
        if(isalpha(exp[i]))/*si encuentra una letra la imprime*/
        {
            cout << exp[i];
        }
        else if(isdigit(exp[i]))/*si encuentra un numero decimal crea un espacio*/
        {
            cout << " ";
        }
        else /*si encuentra cualquier otro tipo de caracter lo borra o no lo imprime*/
        {
            cout << "";
        }
    }

    return 0;
}
