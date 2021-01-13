/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief Cada nuevo término de la serie de Fibonacci se genera sumando los dos anteriores. 
 *        Comenzando con 0 y 1, los primeros 10 términos serán: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
 *        Desarrolle en C++ un programa que calcule la suma de todos los términos de valor par 
 *        de la serie que sean menores que 1000.
 * @see https://docs.google.com/document/d/1-3hTIVf8tPrbn9u0vs0Cm2IGyX1XBgv8hReVU0KOSUQ/edit?usp=sharing
 * @see stoi http://www.cplusplus.com/reference/string/stoi/
 * An Object Oriented Version of the program:
 * @see https://stackoverflow.com/questions/21360694/sum-of-even-fibonacci-numbers-under-1000
 *
 */

#include <iostream>
#include <string>

#include "fechas.h"    

void Date::Print() {
  std::cout << "The Date is " << day_ << "/" << month_ << "/" << year_ << std::endl;
}

bool Date::IsLeapYear(Date date){
  if(((date.GetYear()%100)%4)==0){
   return true;
  }else{
    return false;
  }
}

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

std::ostream& operator<< (std::ostream &out, const Date& date) {
 out << date.day_ << "/" << date.month_ << "/" << date.year_; 
 return out; 
}

bool operator== (const Date &d1, const Date &d2) {
  return (d1.day_ == d2.day_ && d1.month_ == d2.month_ && d1.year_ == d2.year_);
}
