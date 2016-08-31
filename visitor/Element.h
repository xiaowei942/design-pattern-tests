#ifndef __ELEMENT_H__
#define __ELEMENT_H__

class Visitor;
class Element
{
public:
	virtual ~Element() {}
	virtual void Accept(Visitor &visitor) = 0;
protected:
	Element() {}
};
#endif
