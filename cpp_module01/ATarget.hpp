#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

class ASpell;

class ATarget
{
	private:
		std::string type;

	public:
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &other);
		virtual ~ATarget();

		ATarget &operator=(ATarget const &other);
		std::string const &getType() const;

		void getHitBySpell(ASpell const &spell) const;

		virtual ATarget *clone() const = 0;
};

#include "ASpell.hpp"

#endif
