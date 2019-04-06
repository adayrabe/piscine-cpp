//
// Created by Dayrabekov Artem on 2019-04-05.
//

#include "Squad.hpp"

Squad::Squad() : _count(0), _armyHead(nullptr){

}

Squad::Squad (Squad const &other) : _count(0), _armyHead(nullptr){

    *this = other;
//    _armyHead = nullptr;
//    for(int i = 0; i < other.getCount(); i++)
//        push(other.getUnit(i));

}

Squad & Squad::operator=(Squad const & other){
    t_unit *temp;
    while (_armyHead)
    {
        temp = _armyHead->next;
        delete _armyHead;
        delete _armyHead->unit;
        _armyHead = nullptr;
        _armyHead = temp;
    }
    for(int i = 0; i < other.getCount(); i++)
        push(other.getUnit(i)->clone());
    return *this;
}

Squad::~Squad(){
    t_unit *temp;
    while (_armyHead)
    {
        temp = _armyHead->next;
        delete _armyHead->unit;
        delete _armyHead;
        _armyHead = temp;
    }
}

int Squad::getCount() const{
    return _count;
}

ISpaceMarine* Squad::getUnit(int num) const{
    if (num >= _count)
        return nullptr;
    t_unit *temp = _armyHead;
    for (int i = 0; i < num; i++)
        temp = temp->next;
    return temp->unit;
}

int Squad::push(ISpaceMarine* unit){
    if (!unit)
        return _count;
    if (!_armyHead){
        _armyHead = new t_unit();
        _armyHead->unit = unit;
        _armyHead->next = nullptr;
        _count++;
        return _count;
    }

    t_unit *temp = _armyHead;
    while (temp->next){
       if (temp->unit == unit)
           return _count;
        temp = temp->next;
    }
    temp->next = new t_unit();
    temp->next->unit = unit;
    temp->next->next = nullptr;
    _count++;
    return _count;

}
