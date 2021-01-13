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

#include <iostream>

#include "tools.h"    
#include "fechas.h"
#include <string>    
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>


/** Main function
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
int main (int argc, char* argv[]) {
  Usage(argc, argv);
  std::stringstream date;
  std::stringstream get_data;
  std::string input_file = argv[1];
  std::string output_file = argv[2];
  std::vector<std::string> date_string;
  std::vector<Date>  date_object;

  std::ifstream input{input_file};
  std::ofstream output{output_file};
  std::string string_input;
  while (std::getline(input, string_input)) {

    int day, month, year;
    day = std::stoi(string_input.substr(0,2));
    month = std::stoi(string_input.substr(3,2));
    year = std::stoi(string_input.substr(6,2));

    Date some_date(day, month, year);
    date_object.push_back(some_date); 
  }

  std::sort(date_object.begin(),date_object.end());

  for(size_t i = 0; i < date_object.size(); ++i){
    output << date_object[i] << std::endl;
  }
}
