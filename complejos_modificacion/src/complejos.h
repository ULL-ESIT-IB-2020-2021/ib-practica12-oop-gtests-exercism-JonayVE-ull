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
#ifndef COMPLEJOS_H
#define COMPLEJOS_H
class Complex{
 public:
  Complex(double real = 0, double imaginary = 0){real_ = real; imaginary_ = imaginary;};
  void Print();
  void SetComplex(double real_, double imaginary);
  int GetReal() { return real_; }
  int GetImaginary() { return imaginary_; }
  void Add(Complex complex1, Complex complex2);
  void Sub(Complex complex1, Complex complex2);
  void Multiplicate(Complex complex1, Complex complex2);
  void Divide(Complex complex1, Complex complex2);
  friend Complex operator* (const Complex &complex1, const int &int_number);
  friend Complex operator* (const Complex &complex1, const double &real_number);

 private:
  double real_;
  double imaginary_;

};
#endif
