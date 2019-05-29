#include <iostream>

struct Data
{
	std::string		s1;
	int 			n;
	std::string		s2;
};

void		*serialize( void )
{
	static const std::string	random_data[4] =
	{
		"ABCDefg",
		"hijKLMN",
		"1234569",
        "zyxwvut",
	};

	Data	*data = new Data();
	data->s1 = random_data[std::rand() % 4];
	data->n = std::rand();
	data->s2 = random_data[std::rand() % 4];

	return data;
}

Data		*deserialize( void * raw )
{
	return reinterpret_cast<Data*>(raw);
}

int			main( void )
{
	std::srand(std::time(nullptr));

	void	*foo = serialize();

	Data	*bar = deserialize(foo);

	std::cout << "data->s1: " << bar->s1 << std::endl;
	std::cout << "data->n: " << bar->n << std::endl;
	std::cout << "data->s2: " << bar->s2 << std::endl;
	return (0);
}