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
#pragma once

class FPR
{
public:
  virtual int limitEquation() = 0;
  virtual int recursionEquation() = 0;

  // Initical functions
  static int null(int arg);
  static int succesor(int arg);
  static int proyection(int index, std::vector<int> arguments);
};