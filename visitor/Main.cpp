#include "Visitor.h"
#include "Element.h"
#include "ConcreteVisitorA.h"
#include "ConcreteElementA.h"

int main()
{
	Visitor *visitorA = new ConcreteVisitorA();
	Element *elementA = new ConcreteElementA();
	elementA->Accept(*visitorA);
	delete elementA;
	delete visitorA;

	return 0;
}
