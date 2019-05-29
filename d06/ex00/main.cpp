#include <iostream>

int         main(int ac, char **av)
{
    double              d;

    if (ac < 2)
    {
        std::cout << "need argument" << std::endl;
        return 0;
    }

    for(int i = 1; i < ac; i++)
    {
        std::string     str(av[i]);

		if (str.length() == 1 && !isdigit(str[0]))
			d = str[0];
		else
		{
			try
			{
				d = std::stod(av[i]);
			}
			catch (std::exception & e)
			{
				std::cerr << "Invalid Input: " << e.what() << std::endl;
				return (-1);
			}
		}

		if (av[i][1] && !isdigit(av[i][1]))
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			if (isprint(static_cast<int>(d)))
				std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
			std::cout << "int: " << static_cast<int>(d) << std::endl;
		}

		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
    }

    return 0;
}