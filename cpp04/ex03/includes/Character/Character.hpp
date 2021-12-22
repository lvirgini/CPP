#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define MAX_MATERIA 4

class	Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[MAX_MATERIA];

	public:

	/* constructor */
		Character(std::string name);
		Character(Character const & copy);

	/* destructor */
		virtual ~Character(void);

	/* operator */
		Character &		operator=(Character const & copy);

	/* get */
		virtual std::string const & getName() const;
	
	/* functions */
		virtual void	equip(AMateria *m);
		virtual void	unequip(int idx);
		virtual void	use(int idx, ICharacter& target);
};

#endif
