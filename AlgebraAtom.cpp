#include "AlgebraAtom.h"

using namespace std;

AlgebraAtom::AlgebraAtom(){
  operation = SUBTRACTION;
}

AlgebraAtom::~AlgebraAtom(){}

void AlgebraAtom::setLeft(AlgebraAtom newLeft){
  left = &newLeft;
}

void AlgebraAtom::setRight(AlgebraAtom newRight){
  right = &newRight;
}

void AlgebraAtom::setOperation(OPERATION newOperation){
  operation = newOperation;
}

OPERATION AlgebraAtom::getOperation(){
  return operation;
}
