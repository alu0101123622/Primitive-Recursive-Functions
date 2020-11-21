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
#include "../include/product-fpr.hpp"
#include "../include/power-fpr.hpp"

using namespace std;

int proccessInputParameters(int argc, char **argv);

int main(int argc, char **argv)
{
  int opCode = proccessInputParameters(argc, argv);
  int op1 =  (argc <= 2) ? 0 : stoi(argv[2]);
  int op2 =  (argc <= 3) ? 0 : stoi(argv[3]);
  switch (opCode)
  {
  case 0:
    break;
  case 1:
  {
    additionFPR Addition;
    cout << Addition.solve(op1, op2) << endl;
    break;
  }
  case 2:
  {
    productFPR Product;
    cout << Product.solve(op1, op2) << endl;
    break;
  }
  case 3:
  {
    powerFPR Power;
    cout << Power.solve(op1, op2) << endl;
    break;
  }
  }

  // additionFPR Addition;
  // productFPR Product;
  // powerFPR Power;
  // cout << Addition.solve(209, 300) << endl;
  // cout << Product.solve(7, 90) << endl;
  // cout << Power.solve(5, 3) << endl;
}

int proccessInputParameters(int argc, char **argv)
{
  string arg1, opcode;
  if (argc > 1)
  {
    arg1 = argv[1];
  }
  if (arg1 == "--help" || arg1 == "-h")
  {
    cout << "-s: Recibe 2 argumentos e imprime su suma" << endl;
    cout << "-m: Recibe 2 argumentos e imprime su multiplicación" << endl;
    cout << "-p: Recibe 2 (a b) argumentos e imprime su potencia (a^b)" << endl;
    cout << "\nDesarrollado por Jorge Acevedo de Leon a 20/11/2020" << endl;
    return 0;
  }
  else if (argc < 3)
  {
    cout << "Modo de ejecución: ./FPR -[código de operación] [arg1] [opcode]\n."
            "Pruebe './FPR --help' (o -h) para más informacion\n";
    return 0;
  }
  if (argc == 4)
  {
    opcode = argv[1];
    if (opcode == "-s")
    {
      return 1;
    }
    else if (opcode == "-m")
    {
      return 2;
    }
    else if (opcode == "-p")
    {
      return 3;
    }
  }
  return 0;
}
