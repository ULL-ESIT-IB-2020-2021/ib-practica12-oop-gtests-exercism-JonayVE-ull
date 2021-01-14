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
 *        tome como parámetro una fecha, un número y un nombre de fichero:
 * 
 *
 */
#ifndef FECHAS_H
#define FECHAS_H
class Date{
 public:
  Date(int day, int month, int year){day_ = day; month_ = month; year_ = year;}
  void Print();
  bool IsLeapYear();
  int GetYear() { return year_; }
  int GetMonth() { return month_; }
  int GetDay() { return day_; }
  void SetDate(int day, int month, int year){day_ = day; month_ = month; year_ = year;}
  friend bool operator< (const Date &d1, const Date &d2);
  friend bool operator> (const Date &d1, const Date &d2);
  friend bool operator== (const Date &d1, const Date &d2);
  friend std::ostream& operator<<(std::ostream &out, const Date &date);
  bool IsLeapYear(Date date);

 private:
  int day_;
  int month_;
  int year_;
};

void IsDateValid(Date date);
#endif