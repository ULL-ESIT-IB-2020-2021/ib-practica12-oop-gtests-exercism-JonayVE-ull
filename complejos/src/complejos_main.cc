/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gabriel Jonay Vera Estévez
 * @date 10.enero.2021
 * @brief Desarrolle un programa cliente complejos.cc que permita operar con números 
 *        complejos y haga uso de la clase Complejo que diseñe. La clase Complejo ha 
 *        de contener al menos métodos que permitan (Print()) imprimir un número complejo 
 *        así como sumar (Add()) y restar (Sub()) números complejos. 
 * 
 *
 */

#include "complejos.h"
#include <iostream>

  
int main (int argc, char* argv[]) {
  
  Complex complex1{4, 5}, complex2{7, -8};
  Complex result{0,0};

  result.Add(complex1, complex2);
  result.Print();
  result.Sub(complex1, complex2);
  result.Print();
  result.Multiplicate(complex1, complex2);
  result.Print();
  result.Divide(complex1, complex2);
  result.Print();

  return 0;
}
