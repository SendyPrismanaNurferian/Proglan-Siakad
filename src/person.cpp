#include <iostream>
#include "include/person.hpp"

//ada penambahan jenis kelamin yang saya buat
person::person(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy)
		: id(id), nama(nama), jeniskelamin(jeniskelamin), dd(dd), mm(mm), yy(yy)
{
}
//Inisialisasi fungsi versi saya
void person::setId(std::string id)
{
	this->id = id;
}

std::string person::getId() 
{
	return this->id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return this->nama;
}

std::string person::getjeniskelamin()
{
	return this->jeniskelamin;
}

void person::setTglLahir(int dd, int mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

int person::getTglLahir()
{
	return this->dd;
}

int person::getBulanLahir()
{
	return this->mm;
}

int person::getTahunLahir()
{
	return this->yy;
}



