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

#include <iostream>
#include "complejos.h"    

/** Print function
 *  La función permite imprimir los objetos de la clase Complex
 */
void Complex::Print() {
  std::cout << real_ << " + (" << imaginary_ << ") i" << std::endl;
}
/** SetComplex function
 *  La función permite definir los parametros de los objetos de la clase Complex
 *  @param[in] real real part of complex object
 *  @param[in] imaginary imaginary part of complex object
 */
void Complex::SetComplex(double real, double imaginary) {
  real_ = real;
  imaginary_ = imaginary;
}

/** Add function
 *  La función permite sumar dos números complejos
 *  @param[in] complex1 Complex Object
 *  @param[in] complex2 Complex Object
 */
void Complex::Add(Complex complex1, Complex complex2){
  real_ = complex1.real_ + complex2.real_;
  imaginary_ = complex1.imaginary_ + complex2.imaginary_;
}

/** Add function
 *  La función permite restar dos números complejos
 *  @param[in] complex1 Complex Object
 *  @param[in] complex2 Complex Object
 */
void Complex::Sub(Complex complex1, Complex complex2){
  real_ = complex1.real_ - complex2.real_;
  imaginary_ = complex1.imaginary_ - complex2.imaginary_;
}

/** Add function
 *  La función permite multiplicar dos números complejos
 *  @param[in] complex1 Complex Object
 *  @param[in] complex2 Complex Object
 */
void Complex::Multiplicate(Complex complex1, Complex complex2){
  real_ = complex1.real_ * complex2.real_ - complex1.imaginary_ * complex2.imaginary_;
  imaginary_ = complex1.real_ * complex2.imaginary_ + complex1.imaginary_ * complex2.real_;
}

/** Add function
 *  La función permite dividir dos números complejos
 *  @param[in] complex1 Complex Object
 *  @param[in] complex2 Complex Object
 */
void Complex::Divide(Complex complex1, Complex complex2){
  real_ = (complex1.real_ * complex2.real_ - complex1.imaginary_ * complex2.imaginary_) / (complex2.real_ * complex2.real_ + complex2.imaginary_ * complex2.imaginary_);
  imaginary_ = (complex1.real_ * complex2.imaginary_ + complex1.imaginary_ * complex2.real_) / (complex2.real_ * complex2.real_ + complex2.imaginary_ * complex2.imaginary_);
}

Complex operator* (const Complex &complex1, const int &int_number){

  int real = complex1.real_ * int_number;
  int imaginary = complex1.imaginary_ * int_number;

  return Complex(real, imaginary);
}

Complex operator* (const Complex &complex1, const double &real_number){

  double real = complex1.real_ * real_number;
  double imaginary = complex1.imaginary_ * real_number;
  return Complex(real, imaginary);
}