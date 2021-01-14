/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Gabriel Jonay Vera Estévez
 * @date 29.dic.2020
 * @brief Este codigo verifica que los parametros pasados por linea de comandos son los esperados
 */

#include <iostream>
#include <cstdlib>    // exit

#include "tools.h"    

/** Muestra el modo de uso correcto del programa
 *  En caso de que el uso no sea el correcto, muestra el mensaje y finaliza
 *  la ejecución del programa.
 *  El programa precisa un único número natural para su ejecución.
 *
 *  @param[in] argc Number of command line parameters
 *  @param[in] argv Vector containing (char*) the parameters
 */
void Usage(int argc, char *argv[]) {
  if (argc != 3) {
    if (argc == 2) {
      std::string parameter{argv[1]};
      if (parameter == "--help") {
        std::cout << kHelpText << std::endl;
        exit(EXIT_SUCCESS);
      }
    }
    std::cout << argv[0] << " - Gestión de fechas" << std::endl;
    std::cout << "Modo de uso: " << argv[0] << " fichero de entrada fichero_salida" << std::endl;
    std::cout << "Pruebe " << argv[0] << " --help para más información" << std::endl;
    exit(EXIT_SUCCESS);
  }

}
