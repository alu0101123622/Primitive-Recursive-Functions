// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Complejidad Computacional (CC)
// Curso: 4º
// Práctica 3 CC - Funciones Recursivas Primitivas.
// Autor: Jorge Acevedo de León
// Correo: alu0101123622@ull.es
// Fecha: 20/11/2020

#include <iostream>
#include <vector>
#include "../include/addition-fpr.hpp"

using namespace std;

bool proccessInputParameters(int argc, char **argv);

int main(int argc, char **argv)
{
  if (!proccessInputParameters(argc, argv))
  {
    return 0;
  }

  additionFPR Suma;
  cout << Suma.solve(1,2) << endl;
}

bool proccessInputParameters(int argc, char **argv)
{
  string arg1, arg2;
  if (argc > 1)
  {
    arg1 = argv[1];
  }
  if (arg1 == "--help" || arg1 == "-h")
  {
    cout << "-s: Recibe 2 argumentos e imprime su suma" << endl;
    cout << "-r: Recibe 2 argumentos e imprime su resta" << endl;
    cout << "-m: Recibe 2 argumentos e imprime su multiplicación" << endl;
    cout << "-p: Recibe 2 (a b) argumentos e imprime su potencia (a^b)" << endl;
    cout << "\nDesarrollado por Jorge Acevedo de Leon a 20/11/2020" << endl;
    return 0;
  }
  else if (argc < 3)
  {
    cout << "Modo de ejecución: ./FPR -[código de operación] [arg1] [arg2]\n."
            "Pruebe './FPR --help' (o -h) para más informacion\n";
    return 0;
  }
  // if (argc == 3)
  // {
  //   arg2 = argv[2];
  //   if (arg2 != "-s" && arg2 != "-f")
  //   {
  //     return -1;
  //   }
  // }
  return 1;
}
