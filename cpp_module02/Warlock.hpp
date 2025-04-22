#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

class Warlock
{
	private:
		std::string name;
		std::string title;

		Warlock();
		Warlock(Warlock const &other);
		Warlock &operator=(Warlock const &other);

		SpellBook book;

	public:
		Warlock(std::string const &name, std::string const &title);
		virtual ~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &title);

		void introduce() const;

		void learnSpell(ASpell *spell_ptr);
		void forgetSpell(std::string const name);
		void launchSpell(std::string const name, ATarget const &target_ref);
};
