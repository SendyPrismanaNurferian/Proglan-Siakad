#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk); //ada penambahan jenis kelamin yang saya buat
//Fungsi untuk akses NPP
    void setNRP(std::string nrp);
    std::string getNRP();
//Fungsi untuk akses Departemen
    void setDepartemen(std::string departemen);
    std::string getDepartemen();
//Fungsi untuk akses Tahunmasuk
    void setTahunmasuk(int tahunmasuk);
    int getTahunmasuk();
//Fungsi untuk akses Semester
	void setSemester(int semesterke);
	int getSemester();
//Fungsi untuk akses SKS
	void setSKSLulus(int skslulus);
	int getSKSLulus();
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// BELUM 
	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif