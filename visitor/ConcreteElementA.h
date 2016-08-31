#ifndef __CONCRETEELEMENTA_H__
#define __CONCRETEELEMENTA_H__

#include "Visitor.h"
#include "Element.h"

class ConcreteElementA : public Element
{
public:
	virtual ~ConcreteElementA() {}
	virtual void Accept(Visitor &visitor);
};
#endif
