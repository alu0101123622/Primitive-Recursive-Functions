// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Complejidad Computacional (CC)
// Curso: 4º
// Práctica 3 CC - Funciones Recursivas Primitivas.
// Autor: Jorge Acevedo de León
// Correo: alu0101123622@ull.es
// Fecha: 20/11/2020

#include "../include/addition-fpr.hpp"

int additionFPR::limitEquation(int arg)
{
    std::vector<int> proyectionArray{arg};
    return (FPR::proyection(0, proyectionArray));
}

int additionFPR::recursionEquation(int firstArg, int secondArg)
{
  if (secondArg == 0)
  {
    std::vector<int> proyectionArray{firstArg};
    return limitEquation(FPR::proyection(0, proyectionArray));
  }
  else
  {
    std::vector<int> proyectionArray{firstArg, secondArg--, recursionEquation(firstArg, secondArg--)};
    return FPR::successor(FPR::proyection(2, proyectionArray));
  }
}

int additionFPR::solve(int firstArg, int secondArg)
{
  return recursionEquation(firstArg, secondArg);
}