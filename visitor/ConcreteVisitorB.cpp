#include "ConcreteVisitorB.h"

void ConcreteVisitorB::visitConcreteElementA(ConcreteElementA *elementA)
{
	std::cout<<"visitConcreteElementA by ConcreteVisitorB"<<endl;
}

void ConcreteVisitorB::visitConcreteElementB(ConcreteElementB *elementB)
{
	std::cout<<"visitConcreteElementB by ConcreteVisitorB"<<endl;
}
