#include "complejo.h"

Complejo::Complejo(int real, int imag){
  real_ = real;
  imag_ = imag;
}

void Complejo::print(){
  std::cout << real_ << " + " << imag_ << "i" << std::endl;
}

void Complejo::add(Complejo &complejo2){
  real_ += complejo2.real_;
  imag_ += complejo2.imag_;
}

void Complejo::sub(Complejo &complejo2){
  real_ -= complejo2.real_;
  imag_ -= complejo2.imag_;
}

void Complejo::mult(Complejo &complejo2){
  int real_output = (real_*complejo2.real_) + (-1)*(imag_*complejo2.imag_);
  int imag_output = (imag_*complejo2.real_) + (real_*complejo2.imag_);
  real_ = real_output;
  imag_ = imag_output;
}

void Complejo::div(Complejo &complejo2){
  Complejo My_Conjugado(complejo2.real_, (-1)*complejo2.imag_);
  int divisor = pow(complejo2.real_,2) + pow(My_Conjugado.imag_,2);
  int real_output = (real_*My_Conjugado.real_) + (-1)*(imag_*My_Conjugado.imag_);
  int imag_output = (imag_*My_Conjugado.real_) + (real_*My_Conjugado.imag_);
  //std::cout << real_output << "/" << divisor << "+" << imag_output << "/" << divisor << std::endl;
  real_ = real_output/divisor;
  imag_ = imag_output/divisor;
}