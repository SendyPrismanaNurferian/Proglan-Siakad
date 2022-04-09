#include <iostream>
#include <vector>
#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;
    int idMhs = 0;
    int idDosen = 0;
    int idTendik = 0;
    char Lanjutkan;

	while(1) {
		cout << "Selamat datang di Universitas Bahagia Selalu" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu Menu : ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:{
                idMhs++;
                string id, nama, nrp, departemen;
                int dd, mm, yy, tahunmasuk;
                id = "mhs" + to_string(idMhs);
                cout << "Masukkan Nama Mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NRP : ";
                cin >> nrp;
                cout << "Masukkan Departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Masukkan Tahun Masuk : ";
                cin >> tahunmasuk;
                mahasiswa inputMhs = mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk);
                recMhs.push_back(inputMhs);
            }   break;

			case 2:{
                idDosen++;
                string id, nama, npp, departemen, pendidikan;
                int dd, mm, yy;
                id = "dsn" + to_string(idDosen);
                cout << "Masukkan Nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NPP : ";
                cin >> npp;
                cout << "Masukkan Departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Masukkan Pendidikan : ";
                cin.ignore();
                getline(cin, pendidikan);
                dosen inputDosen = dosen(id, nama, dd, mm, yy, npp, departemen, pendidikan);
                recDosen.push_back(inputDosen);
            }   break;

			case 3:{
                idTendik++;
                string id, nama, npp, unit;
                int dd, mm, yy;
                id = "tdk" + to_string(idTendik);
                cout << "Masukkan Nama Tendik : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NPP : ";
                cin >> npp;
                cout << "Masukkan Unit : ";
                cin.ignore();
                getline(cin, unit);
                tendik inputTendik = tendik(id, nama, dd, mm, yy, npp, unit);
                recTendik.push_back(inputTendik);
            }   break;

			case 4:{
                for(int i = 0; i < idMhs; i++){
                    cout << i+1 << ". Data Mahasiswa dengan ID: " << recMhs[i].getId() << endl;
                    cout << "\tNama        : " << recMhs[i].getNama() << endl;
                    cout << "\tdd/mm/yy    : " << recMhs[i].getTglLahir() << "/" << recMhs[i].getBulanLahir() << "/" << recMhs[i].getTahunLahir() << endl;
                    cout << "\tNRP         : " << recMhs[i].getNRP() << endl;
                    cout << "\tDepartemen  : " << recMhs[i].getDepartemen() << endl;
                    cout << "\tTahun Masuk : " << recMhs[i].getTahunmasuk() << endl << endl;
                }
                cin.get();
                cin.get();
            }   break;

			case 5:{
                for(int i = 0; i < idDosen; i++){
                    cout << i+1 << ". Data Dosen dengan ID: " << recDosen[i].getId() << endl;
                    cout << "\tNama        : " << recDosen[i].getNama() << endl;
                    cout << "\tdd/mm/yy    : " << recDosen[i].getTglLahir() << "/" << recDosen[i].getBulanLahir() << "/" << recDosen[i].getTahunLahir() << endl;
                    cout << "\tNPP         : " << recDosen[i].getNPP() << endl;
                    cout << "\tDepartemen  : " << recDosen[i].getDepartemen() << endl;
                    cout << "\tPendidikan  : " << recDosen[i].getPendidikan() << endl << endl;
                }
                cin.get();
                cin.get();
            }   break;

			case 6:{
                for(int i = 0; i < idTendik; i++){
                    cout << i+1 << ". Data Tendik dengan ID: " << recTendik[i].getId() << endl;
                    cout << "\tNama        : " << recTendik[i].getNama() << endl;
                    cout << "\tdd/mm/yy    : " << recTendik[i].getTglLahir() << "/" << recTendik[i].getBulanLahir() << "/" << recTendik[i].getTahunLahir() << endl;
                    cout << "\tNPP         : " << recTendik[i].getNPP() << endl;
                    cout << "\tUnit        : " << recTendik[i].getUnit() << endl << endl;
                }
                cin.get();
                cin.get();
            }   break;
		}
        label:
        cout << "Apakah Anda Ingin Melanjutkan Program? Tekan y/Y untuk Iya dan n/N untuk tidak! (y/n) : ";
        cin >> Lanjutkan;
        if(Lanjutkan == 'n' || Lanjutkan == 'N'){
            cout << "Terima Kasih atas Kunjungan Anda di Siakad UBS " << endl;
            break;
        } else if(Lanjutkan == 'y' || Lanjutkan == 'Y'){
        } else{
            cout << "Input yang Anda Masukkan Salah" << endl;
            goto label;
        }
	}

	return 0;
}
