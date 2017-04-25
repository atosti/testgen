/* AlgebraAtom.h */

#ifndef ALBEGRA_ATOM_H
#define ALBEGRA_ATOM_H

using namespace std;

enum OPERATION {
  NONE,
  ADDITION,
  SUBTRACTION,
  MULTIPLICATION,
  DIVISION
  };

class AlgebraAtom {
public:
  AlgebraAtom();
  ~AlgebraAtom();
  void setLeft(AlgebraAtom newLeft);
  void setRight(AlgebraAtom newRight);
  OPERATION getOperation();
  void setOperation(OPERATION newOperation);

protected:
  AlgebraAtom* left;
  AlgebraAtom* right;
  OPERATION operation;
};
#endif
