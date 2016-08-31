#ifndef __CONCRETEVISITORA_H__
#define __CONCRETEVISITORA_H__

#include "Visitor.h"

class ConcreteVisitorA : public Visitor
{
public:
	virtual ~ConcreteVisitorA() {}
	virtual void visitConcreteElementA(ConcreteElementA *elementA);
	virtual void visitConcreteElementB(ConcreteElementB *elementB);
};
#endif
