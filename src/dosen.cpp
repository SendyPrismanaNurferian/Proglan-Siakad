#include <iostream>
#include "include/dosen.hpp"

//ada penambahan jenis kelamin yang saya buat
dosen::dosen(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy, std::string npp, std::string departemen, std::string pendidikan)
		: person(id, nama, jeniskelamin, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}
// Inisialisasi fungsi versi saya
void dosen::setNPP(std::string npp)
{
    this->npp = npp;
}

std::string dosen::getNPP()
{
    return this->npp;
}

void dosen::setDepartemen(std::string departemen)
{
    this->departemen = departemen;
}

std::string dosen::getDepartemen()
{
    return this->departemen;
}
////////////////////////////////////////////////////////////////////////////
void dosen::setPendidikan(std::string pendidikan)
{
	this->pendidikan = pendidikan;
}

std::string dosen::getPendidikan()
{
	return this->pendidikan;
}