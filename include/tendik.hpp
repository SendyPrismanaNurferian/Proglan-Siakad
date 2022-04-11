#ifndef __TENDIK_HPP__
#define __TENDIK_HPP__

#include <iostream>
#include "include/person.hpp"


class tendik : public person {
private:
	std::string npp;
	std::string unit;

public:
	tendik(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy, 
				std::string npp, std::string unit); //ada penambahan jenis kelamin yang saya buat
//Fungsi untuk akses Unit
	void setUnit(std::string unit);
	std::string getUnit();	
	std::string getNPP();	
};

#endif
