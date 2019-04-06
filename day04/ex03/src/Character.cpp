//
// Created by Artem DAYRABEKOV on 2019-04-06.
//

#include "../inc/Character.hpp"

Character::Character() : _name(0), _materias(nullptr), _amount(0){
    return ;
}

Character::Character(std::string name): _name(name), _materias(nullptr), _amount(0){
    return ;
}

Character::Character(Character const & other){
    *this = other;
    return ;
}

Character&  Character::operator=(Character const &other){
    t_materia *temp;

    while (_materias)
    {
        temp = _materias->next;
        delete _materias->m;
        delete _materias;
        _materias = temp;
    }

    for(int i = 0; i < other.getAmount(); i++)
        equip(other.getMateria(i)->clone());
    return *this;
}

Character::~Character(){
    t_materia *temp;

    while (_materias)
    {
        temp = _materias->next;
        delete _materias->m;
        delete _materias;
        _materias = temp;
    }
    return ;
}

std::string const & Character::getName() const{
    return _name;
}

int Character::getAmount()const{
    return _amount;
}

AMateria* Character::getMateria(int num) const{
    if (num >= _amount)
        return nullptr;
    t_materia *temp = _materias;
    for (int i = 0; i < num; i++)
        temp = temp->next;
    return temp->m;
}

void Character::equip(AMateria* m){
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

void Character::unequip(int idx){
    if (idx >= _amount)
        return ;

    t_materia *temp;
    if (idx == 0)
    {
        temp = _materias->next;
        delete _materias;
        _materias = temp;
        _amount--;
        return ;
    }
    temp = _materias;
    for (int i = 1; i < idx; i++)
        temp = temp->next;
    t_materia *temp2 = temp->next->next;
    delete(temp->next);
    temp->next = temp2;
    _amount--;
}

void Character::use(int idx, ICharacter& target){
    if (idx >= _amount)
        return ;
    t_materia *temp;
    temp = _materias;
    for (int i = 0; i < idx; i++)
        temp = temp->next;
    temp->m->use(target);
}