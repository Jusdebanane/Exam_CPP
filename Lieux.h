#pragma once
#include <string>

class Lieux {
private:
	std::string nom;
	int difficulté;
	std::string description;
public:
	Lieux(std::string name, int diff,std::string desc);
	std::string get_name();
	int get_diff();
	std::string get_desc();
	int camps = 0;
};
