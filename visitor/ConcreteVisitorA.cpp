#include "ConcreteVisitorA.h"

void ConcreteVisitorA::visitConcreteElementA(ConcreteElementA *elementA)
{
	cout<<"visitConcreteElementA by ConcreteVisitorA"<<endl;
}

void ConcreteVisitorA::visitConcreteElementB(ConcreteElementB *elementB)
{
	std::cout<<"visitConcreteElementB by ConcreteVisitorA"<<endl;
}
