#ifndef __CONCRETEVISITORB_H__
#define __CONCRETEVISITORB_H__

#include "Visitor.h"

class ConcreteVisitorB : public Visitor
{
public:
	virtual ~ConcreteVisitorB() {}
	virtual void visitConcreteElementA(ConcreteElementA *elementA);
	virtual void visitConcreteElementB(ConcreteElementB *elementB);
};
#endif
