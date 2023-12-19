#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	type = "Dog";
}

Dog::Dog( const Dog & src )
{
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/
std::string	Dog::getType() const
{
	return (this->type);
}

Dog &				Dog::operator=( Dog const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Wof wof 🐶" << std::endl;
}
/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
