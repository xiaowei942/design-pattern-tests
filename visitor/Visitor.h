#ifndef __VISITOR_H__
#define __VISITOR_H__

#include <iostream>
using namespace std;

class ConcreteElementA;
class ConcreteElementB;
class Visitor
{
public:
	virtual ~Visitor();
	virtual void visitConcreteElementA(ConcreteElementA *elementA) = 0;
	virtual void visitConcreteElementB(ConcreteElementB *elementB) = 0;
protected:
	Visitor();
};

#endif
