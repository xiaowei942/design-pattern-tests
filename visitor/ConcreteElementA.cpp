#include "ConcreteElementA.h"

void ConcreteElementA::Accept(Visitor &visitor)
{
	visitor.visitConcreteElementA(this);
}
