#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>

class person {
private:
	std::string id;
	std::string nama;
	std::string jeniskelamin; //data tambahan yang saya buat 
	int dd, mm, yy;

public:
	person(std::string id, std::string nama, std::string jeniskelamin, int dd, int mm, int yy); //ada penambahan jenis kelamin yang saya buat
// Fungsi untuk akses ID
	void setId(std::string id);
	std::string getId();
//Fungsi untuk akses nama
	void setNama(std::string nama);
	std::string getNama();
//Fungsi untuk akses jenis kelamin
	void setJenisKelamin(std::string jeniskelamin);
	std::string getjeniskelamin();

	void setTglLahir(int dd, int mm, int yy);
	int getTglLahir();
	int getBulanLahir();
	int getTahunLahir();	
};


#endif
