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
 *  @param[in] d1 Date Object
 *  @param[in] d2 Date Object
 */
bool operator== (const Date &d1, const Date &d2) {
  return (d1.day_ == d2.day_ && d1.month_ == d2.month_ && d1.year_ == d2.year_);
}

/** IsDateValid function
 * Esta función permite comprobar que se ha introducido una fecha correcta
 *  @param[in] date Date Object
 */
void IsDateValid(Date date){
  switch (date.GetMonth()){
    case 2:
      if(date.IsLeapYear()){
        if(date.GetDay() < 30){
        }else{
          std::cout << "fecha incorrecta, (dd/mm/aa), con 0 donde sea necesario" << std::endl;
          exit(EXIT_SUCCESS);
        }
      }else{
        if(date.GetDay()<29){
        }else{
          std::cout << "fecha incorrecta, (dd/mm/aa), con 0 donde sea necesario" << std::endl;
          exit(EXIT_SUCCESS);
        }
      }      
      break;

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      if(date.GetDay() < 32){
      }else{
        std::cout << "fecha incorrecta, (dd/mm/aa), con 0 donde sea necesario" << std::endl;
        exit(EXIT_SUCCESS);
      }
      break;

    case 4:
    case 6:
    case 9:
    case 11:
      if(date.GetDay() < 31){
      }else{
        std::cout << "fecha incorrecta, (dd/mm/aa), con 0 donde sea necesario" << std::endl;
        exit(EXIT_SUCCESS);
      }
      break;
      
    default:
      std::cout << "fecha incorrecta, (dd/mm/aa), con 0 donde sea necesario" << std::endl;
        exit(EXIT_SUCCESS);
      break;
  }
}