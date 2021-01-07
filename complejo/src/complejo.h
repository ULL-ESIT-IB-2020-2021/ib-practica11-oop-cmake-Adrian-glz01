#ifndef _COMPLEJO_
#define _COMPLEJO_

#include <iostream>
#include <cmath>

class Complejo{
private:
  int real_; 
  int imag_; 
public:
  Complejo(int real, int imag); //constructor
  void print();
  void add(Complejo &complejo2);
  void sub(Complejo &complejo2);
  void mult(Complejo &complejo2);
  void div(Complejo &complejo2);
};

#endif