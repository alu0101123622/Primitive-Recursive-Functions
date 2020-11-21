// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Complejidad Computacional (CC)
// Curso: 4º
// Práctica 3 CC - Funciones Recursivas Primitivas.
// Autor: Jorge Acevedo de León
// Correo: alu0101123622@ull.es
// Fecha: 20/11/2020

#include "../include/fpr.hpp"

int FPR::null(int arg)
{
  return 0;
}

int FPR::proyection(int index, std::vector<int> arguments)
{
  return arguments[index];
}

int FPR::succesor(int arg)
{
  return (arg + 1);
}
