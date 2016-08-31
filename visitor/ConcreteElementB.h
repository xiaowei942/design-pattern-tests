#ifndef __CONCRETEELEMENTB_H__
#define __CONCRETEELEMENTB_H__

#include "Visitor.h"
#include "Element.h"

class ConcreteElementB : public Element
{
public:
	virtual ~ConcreteElementB() {}
	virtual void Accept(Visitor &visitor);
};

#endif
