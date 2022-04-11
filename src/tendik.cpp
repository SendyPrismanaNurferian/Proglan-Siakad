#include <iostream>
#include "include/tendik.hpp"

//ada penambahan jenis kelamin yang saya buat
tendik::tendik(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy, std::string npp, std::string unit)
		: person(id, nama, jeniskelamin, dd, mm, yy), npp(npp), unit(unit)
{
}
//Inisialisasi fungsi versi saya
void tendik::setUnit(std::string unit)
{
	this->unit = unit;
}

std::string tendik::getUnit()
{
	return this->unit;
}


std::string tendik::getNPP()
{
	return this->npp;
}
