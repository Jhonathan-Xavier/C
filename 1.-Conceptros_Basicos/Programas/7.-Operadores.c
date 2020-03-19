/*
#include <stdio.h>

int main(){

    //Operadores Aritméticos
    /* El orden de resolución de operaciones es el mismo que el del álgebra y aritmétca: primero las multipliciones, luego las diviones, luego sumas y al final restas
     * Si se tiene alguna operacion entre paréntesis () eso se hará primero
     *  + (addition), - (subtraction), * (multiplication), / (division), and % (modulus division).
     *  C tiene loa peculariadad de que el operador "/" devolverá un entero si ambos operandos son enteros
     *  Cuando alguno de los operandos o los 2 operandos son flotantes o decimales, el resultado será un numero decimal
     *  El operador % devuelve solo el resto de la división de enteros. La división de módulos no se puede realizar en flotadores o dobles.
     *


    float price = 6.50;
    int increase = 2;
    float new_price;

    new_price = price + increase;
    printf("New price is %4.2f", new_price);

    /*Tenga en cuenta que el especificador de formato incluye 4.2 para indicar que el flotante se imprimirá en un espacio de al menos 4 caracteres de ancho con 2 decimales.
     * Cuando desee forzar el resultado de una expresión a un tipo diferente,
     * puede realizar una conversión de tipo explícita por conversión de tipo
     * */

    //CASTING
    //Pueden ser implícitos o explicitos
    //implícitos: int a, float b, division;
    // division = a/b = 23/4 un resultado int! ya que se hizo una conversion implícita

    //explítica: int a, float b, divison;
    //division = a/b = 23/4 un resultado int... a menos que se haga una conversion explcitta : divison = float (a/b);

    //Operadores de Asignación

    /*int x = 2;
    x += 1 -> x = x + 1 ;  // 3
    x -= 1 -> x = x - 1;  // 2
    x *= 3;  // 6
    x /= 2;  // 3
    x %= 2;  // 1
    x += 3 * 2;  // 7   La expresión completa de la derecha se evalúa y luego se agrega a x antes de asignarse a x. Puedes pensar en el enunciado como x = x + (3 * 2).


    //Incremento y Disminución
    //x++; Postfix: postfix usa el valor de la variable primero, antes de incrementarla / decrementarla.
    //y--;
    //++x; prefijo: La forma de prefijo aumenta / disminuye la variable y luego la usa en la instrucción de asignación.
    //--y;
    // postfix

    //x += y-- =>16 si x = 9 y y = 7: ya que en el caso de x está operando y luego asignando y y está asiganando y luego operando!
    return 0;
}

*/