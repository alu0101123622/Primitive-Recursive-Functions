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
#include "fpr.hpp"

#pragma once

class productFPR : public FPR
{
public:
  int limitEquation(int arg);
  int recursionEquation(int firstArg, int secondArg);
  int solve(int firstArg, int secondArg);
};