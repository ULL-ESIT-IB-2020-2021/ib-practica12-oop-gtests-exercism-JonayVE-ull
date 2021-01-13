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


void Complex::Print() {
  std::cout << real_ << " + (" << imaginary_ << ") i" << std::endl;
}

void Complex::SetComplex(double real, double imaginary) {
  real_ = real;
  imaginary_ = imaginary;
}

void Complex::Add(Complex complex1, Complex complex2){
  real_ = complex1.real_ + complex2.real_;
  imaginary_ = complex1.imaginary_ + complex2.imaginary_;
}

void Complex::Sub(Complex complex1, Complex complex2){
  real_ = complex1.real_ - complex2.real_;
  imaginary_ = complex1.imaginary_ - complex2.imaginary_;
}

void Complex::Multiplicate(Complex complex1, Complex complex2){
  real_ = complex1.real_ * complex2.real_ - complex1.imaginary_ * complex2.imaginary_;
  imaginary_ = complex1.real_ * complex2.imaginary_ + complex1.imaginary_ * complex2.real_;
}

void Complex::Divide(Complex complex1, Complex complex2){
  real_ = (complex1.real_ * complex2.real_ - complex1.imaginary_ * complex2.imaginary_) / (complex2.real_ * complex2.real_ + complex2.imaginary_ * complex2.imaginary_);
  imaginary_ = (complex1.real_ * complex2.imaginary_ + complex1.imaginary_ * complex2.real_) / (complex2.real_ * complex2.real_ + complex2.imaginary_ * complex2.imaginary_);
}

