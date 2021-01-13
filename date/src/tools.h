/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author F. de Sande
 * @date 7.nov.2020
 * @brief This file declares the "Help Text" constant and two functions
 *
 */

#include <iostream>

const std::string kHelpText = "El programa imprime en el fichero de salida (segundo parámetro) las \
fechas que contiene el fichero de entrada (primer parametro), en orden cronológigo";

void Usage(int argc, char *argv[]);
