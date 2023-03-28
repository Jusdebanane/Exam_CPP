#include "Lieux.h"
#include <string>

Lieux::Lieux(std::string name, int diff, std::string desc)
{
	nom = name;
	difficulté = diff;
	description = desc;
}

std::string Lieux::get_name()
{
	return nom;
};

int Lieux::get_diff()
{
	return difficulté;
};

std::string Lieux::get_desc()
{
	return description;
};
