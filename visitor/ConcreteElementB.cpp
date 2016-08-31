#include "ConcreteElementB.h"

void ConcreteElementB::Accept(Visitor &visitor)
{
	visitor.visitConcreteElementB(this);
}	
