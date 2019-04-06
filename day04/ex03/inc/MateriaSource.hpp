//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#define MAX_AMOUNT 4

class MateriaSource : public virtual IMateriaSource {
    typedef struct s_materia{
        AMateria *m;
        struct  s_materia *next;
    }t_materia;
private:
    int _amount;
    t_materia* _materias;
public:
    MateriaSource();
    MateriaSource(MateriaSource const &other);
    MateriaSource & operator=(MateriaSource const &other);
    ~MateriaSource();

    AMateria* getMateria(int num) const;
    int getAmount() const;
    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


#endif //EX03_MATERIASOURCE_HPP
