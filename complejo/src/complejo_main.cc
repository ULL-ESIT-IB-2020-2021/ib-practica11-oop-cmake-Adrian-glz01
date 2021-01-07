
#include "complejo.h"


int main(){
  Complejo complejo1(5,2), complejo2(3,-1);
  complejo1.add(complejo2);
  complejo1.print();
  complejo1.sub(complejo2);
  complejo1.print();
  complejo1.mult(complejo2);
  complejo1.print();
  complejo1.div(complejo2);
  complejo1.print();
}

