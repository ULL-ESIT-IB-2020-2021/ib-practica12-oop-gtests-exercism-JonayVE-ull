/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gabriel Jonay Vera Estévez
 * @date 10.enero.2021
 * @brief Desarrolle una clase Fecha que permita representar y gestionar fechas. Incorpore en la clase los miembros de datos 
 *        y métodos que considere adecuados para la finalidad que se persigue en este ejercicio. Incluya un método que permita 
 *        determinar si el año correspondiente a una fecha es un año bisiesto o no. Realice un programa cliente fechas.cc que 
 *        tome como parámetro un fichero de entrada y un fichero de salida:
 * 
 *
 */

#include <iostream>
#include <string>

#include "fechas.h"    

/** Print function
 *  La función permite imprimir los objetos de la clase Date
 */
void Date::Print() {
  std::cout << "The Date is " << day_ << "/" << month_ << "/" << year_ << std::endl;
}

/** IsLeapYear function
 *  La función permite saber saber si el año del objeto Date es bisiesto.
 */
bool Date::IsLeapYear(){
  if(year_<100){
    if(((year_%100)%4)==0){
      return true;
    }else{
      return false;
    }
  }else{
    if((year_%4)==0){
      return true;
    }else{
      return false;
    }
  }
}

/** Overload < function
 *  @param[in] d1 Date Object
 *  @param[in] d2 Date Object
 */
bool operator< (const Date &d1, const Date &d2){
  if(d1.year_ < d2.year_){
    return true;
  }else{
    if(d1.month_ < d2.month_){
      return true;
    }else{
      if(d1.day_ < d2.day_){
        return true;
      }
    }
  } 
  return false;
}

/** Overload > function
 *  @param[in] d1 Date Object
 *  @param[in] d2 Date Object
 */
bool operator> (const Date &d1, const Date &d2){
  if(d1.year_ > d2.year_){
    return true;
  }else{
    if(d1.month_ > d2.month_){
      return true;
    }else{
      if(d1.day_ > d2.day_){
        return true;
      }
    }
  } 
  return false;
}

/** Overload << function
 *  @param[in] d1 Date Object
 *  @param[in] d2 Date Object
 */
std::ostream& operator<< (std::ostream &out, const Date& date) {
 out << date.day_ << "/" << date.month_ << "/" << date.year_; 
 return out; 
}

/** Overload == function
 *  @param[in] const d1 Date Object
 *  @param[in] const d2 Date Object
 */
bool operator== (const Date &d1, const Date &d2) {
  return (d1.day_ == d2.day_ && d1.month_ == d2.month_ && d1.year_ == d2.year_);
}
