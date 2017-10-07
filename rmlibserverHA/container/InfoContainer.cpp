#include <cstring>
#include "InfoContainer.h"

InfoContainer::InfoContainer()
{
    _key;
    _value = nullptr;
    _size = 0;
}
InfoContainer::~InfoContainer(){
    free(_value);
}

void InfoContainer::operator delete(void * ptr)
{
    free(ptr);
}

bool InfoContainer::operator!=(InfoContainer container)
{
    if ((container.get_key() != _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool InfoContainer::operator==(std::string key)
{
    if ((key == _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}


bool InfoContainer::operator!=(std::string key)
{
    if ((key != _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool InfoContainer::operator==(InfoContainer container)
{
    if ((container.get_key() == _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}

InfoContainer& InfoContainer::operator=(InfoContainer container)
{
    _key = container.get_key();
    _value = container.get_value();
    _size = container.get_size();
}

std::string InfoContainer::get_key() {
    return _key;
}

void InfoContainer::set_key(std::string key) {
    _key = key;
}

int InfoContainer::get_size() const {
    return _size;
}

void InfoContainer::set_size(int _size) {
    InfoContainer::_size = _size;
}

void *InfoContainer::get_value() const {
    return _value;
}

void InfoContainer::set_value(void *value) {
    InfoContainer::_value = value;
    memcpy(_value, value, _size);
    //_value = malloc(_size);
    //memcpy(_value, value, _size);
}

std::string InfoContainer::to_string()
{
    return _key + "," + std::to_string(_size) + ",";
}