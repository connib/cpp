#include <iostream>
#include <string>

#include "teenager.h"

teenager::teenager(std::string who, int years) : name(who), age(years) { }

bool teenager::in_secondary_school() { return (age >= 12 && age <= 16); }
bool teenager::can_drive() { return (age >= 17); }
