//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

#define MAX_AMOUNT 4

class Character : public virtual ICharacter{

    typedef struct s_materia{
        AMateria *m;
        struct  s_materia *next;
    }t_materia;

private:
    std::string _name;
    t_materia *_materias;
    int _amount;
public:
    Character();
    Character(std::string name);
    Character(Character const & other);
    Character&operator=(Character const &other);
    ~Character();

    std::string const & getName() const;
    AMateria* getMateria(int) const;
    int getAmount()const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_HPP
