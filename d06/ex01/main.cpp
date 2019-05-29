#include <iostream>

struct Data
{
	std::string		s1;
	int 			n;
	std::string		s2;
};

void		*serialize( void )
{
	static const std::string	random_data[10] =
	{
		"ABCDefg",
		"hijKLMN",
		"1234569",
        "zyxwvut",
	};

	Data	*data = new Data();
	data->s1 = random_data[std::rand() % 10];
	data->n = std::rand();
	data->s2 = random_data[std::rand() % 10];

	return data;
}

Data		*deserialize( void * raw )
{
	return reinterpret_cast<Data*>(raw);
}

int			main( void )
{
	std::srand(std::time(nullptr));

	void	*tutu = serialize();

	Data	*tata = deserialize(tutu);

	std::cout << "data->s1: " << tata->s1 << std::endl;
	std::cout << "data->n: " << tata->n << std::endl;
	std::cout << "data->s2: " << tata->s2 << std::endl;
	return (0);
}