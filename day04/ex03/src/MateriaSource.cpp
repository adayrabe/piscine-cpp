//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource():  _amount(0), _materias(nullptr){
    return ;
}

MateriaSource::MateriaSource(MateriaSource const &other){
    *this = other;
    return ;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &other){
    t_materia *temp;
    while (_materias)
    {
        temp = _materias->next;
        delete _materias->m;
        delete _materias;
        _materias = temp;
    }

    for(int i = 0; i < other.getAmount(); i++)
        learnMateria(other.getMateria(i)->clone());
    return *this;
}

MateriaSource::~MateriaSource(){

}

AMateria* MateriaSource::getMateria(int num) const{
    if (num >= _amount)
        return nullptr;
    t_materia *temp = _materias;
    for (int i = 0; i < num; i++)
        temp = temp->next;
    return temp->m;
}

int MateriaSource::getAmount() const{
    return _amount;
}

void MateriaSource::learnMateria(AMateria* m){
    if (_amount == MAX_AMOUNT)
        return ;
    if (_amount == 0) {
        _materias = new t_materia();
        _materias->next = nullptr;
        _materias->m = m;
    }
    else{
        t_materia *temp = _materias;
        while (temp->next)
            temp = temp->next;
        temp->next = new t_materia();
        temp->next->m = m;
        temp->next->next = nullptr;
    }
    _amount++;
}

AMateria* MateriaSource::createMateria(std::string const & type){
    t_materia *temp;

    temp = _materias;
    while (temp)
    {
        if (temp->m->getType() == type)
            return temp->m->clone();
        temp = temp->next;
    }
    return nullptr;
}