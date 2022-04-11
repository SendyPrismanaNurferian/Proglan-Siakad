#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include "include/person.hpp"

class dosen : public person {
private:
	std::string npp;
	std::string departemen;
	std::string pendidikan;

public:
	dosen(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy, 
				std::string npp, std::string departemen, std::string pendidikan); //ada penambahan jenis kelamin yang saya buat
//untuk bisa mengakses NPP
    void setNPP(std::string npp);
    std::string getNPP();
//untuk bisa mengakses Departemen
    void setDepartemen(std::string departemen);
    std::string getDepartemen();
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void setPendidikan(std::string pendidikan);
	std::string getPendidikan();
};

#endif