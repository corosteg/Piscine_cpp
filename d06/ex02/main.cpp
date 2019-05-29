#include "Base.hpp"

Base		*generate( void )
{
	int		type = std::rand() % 3;

	if (type == 0)
	{
		std::cout << "created A" << std::endl;
		return new A;
	}
	else if (type == 1)
	{
		std::cout << "created B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "created C" << std::endl;
		return new C;
	}
}

void		identify_from_pointer( Base * p )
{
	A		*foo1;
	B		*foo2;
	C		*foo3;

	if ((foo1 = dynamic_cast<A *>(p)))
		std::cout << "identified * A" << std::endl;
	if ((foo2 = dynamic_cast<B *>(p)))
		std::cout << "identified * B" << std::endl;
	if ((foo3 = dynamic_cast<C *>(p)))
		std::cout << "identified * C" << std::endl;
}

void		identify_from_reference( Base & r )
{
	Base	*p = &r;
	A		*foo1;
	B		*foo2;
	C		*foo3;

	if ((foo1 = dynamic_cast<A *>(p)))
		std::cout << "identified & A" << std::endl;
	if ((foo2 = dynamic_cast<B *>(p)))
		std::cout << "identified & B" << std::endl;
	if ((foo3 = dynamic_cast<C *>(p)))
		std::cout << "identified & C" << std::endl;
}

int			main( void )
{
	std::srand(std::time(nullptr));

	Base	*bar = generate();

	identify_from_pointer(bar);
	identify_from_reference(*bar);

    delete bar;

	return (0);
}