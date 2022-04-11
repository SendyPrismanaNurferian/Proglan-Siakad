#include <iostream>
#include <vector>
//include*****.hpp merupakan header file code yang sudah dibuat dan bisa digunakan kembali
#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main(){
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

    //Menu untuk pilihan user awal
	int menu_terpilih;
    //Menu untuk pilihan user akhir
    char EndNext;
    //Pemberi ID pada tiap person di ID Mahasiswa, Dosen, Tendik
    int IDMhsw = 0;
    int IDDsn = 0;
    int IDTndk = 0;

	while(1){
		cout << "Selamat datang di Universitas Kembang Lambe Tunas Bangsa" << endl << endl;
		cout << "Data Statistik:" << endl;
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

		switch(menu_terpilih){
			case 1:{
                IDMhsw++;
                string id, nama, jeniskelamin, nrp, departemen;
                int dd, mm, yy, tahunmasuk, semesterke, skslulus;
                // Program mengambil input
                id = "mhsw" + to_string(IDMhsw);
                cout << "Masukkan Nama Mahasiswa : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Jenis Kelamin (Pria/Wanita) : ";
                cin >> jeniskelamin;
                cout << "Masukkan Tanggal Lahir : ";
                cin >> dd;
                cout << "Masukkan Bulan Lahir : ";
                cin >> mm;
                cout << "Masukkan Tahun Lahir : ";
                cin >> yy;
                cout << "Masukkan NRP/NIM : ";
                cin >> nrp;
                cout << "Masukkan Departemen : ";
                cin.ignore();
                getline(cin, departemen);
                cout << "Masukkan Tahun Masuk : ";
                cin >> tahunmasuk;
                cout << "Masukkan Semester saat ini : ";
                cin >> semesterke;
                cout << "Masukkan Jumlah SKS Lulus Semester Lalu (mohon diisi apa adanya) :";
                cin >> skslulus;
                //Menetapkan inputan yang di masukkan ke object penyimpan yaitu inputMhs
                mahasiswa inputMhs = mahasiswa(id, nama, jeniskelamin, dd, mm, yy, nrp, departemen, tahunmasuk);
                inputMhs.setSemester(semesterke);
                inputMhs.setSKSLulus(skslulus);
                //Data di push_back dari inputMhs ke vector recMhs dijadikan sebagai database
                recMhs.push_back(inputMhs);
            } break;

			case 2:{
                IDDsn++;
                string id, nama,jeniskelamin, npp, departemen, pendidikan;
                int dd, mm, yy;
                //Program mengambil input
                id = "dsn" + to_string(IDDsn);
                cout << "Masukkan Nama Dosen : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Jenis Kelamin (Pria/Wanita) : ";
                cin >> jeniskelamin;
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
                getline(cin, pendidikan);
                //Menetapkan inputan yang di masukkan ke object penyimpan yaitu inputDosen
                dosen inputDosen = dosen(id, nama, jeniskelamin, dd, mm, yy, npp, departemen, pendidikan);
                //Data di push_back dari inputDosen ke vector recDosen dijadikan sebagai database
                recDosen.push_back(inputDosen);
            } break;

			case 3:{
                IDTndk++;
                string id, nama, jeniskelamin, npp, unit;
                int dd, mm, yy;
                //Program mengambil input
                id = "tndk" + to_string(IDTndk);
                cout << "Masukkan Nama Tendik : ";
                cin.ignore();
                getline(cin, nama);
                cout << "Masukkan Jenis Kelamin (Pria/Wanita) : ";
                cin >> jeniskelamin;
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
                //Menetapkan inputan yang di masukkan ke object penyimpan yaitu inputDosen
                tendik inputTendik = tendik(id, nama, jeniskelamin, dd, mm, yy, npp, unit);
                //Data di push_back dari inputTendik ke vector recDosen dijadikan sebagai database
                recTendik.push_back(inputTendik);
            } break;

			case 4:{
                // Menampilkan data dari Mahasiswa
                for(int i = 0; i < IDMhsw; i++){
                    cout << i+1 << ". Data Mahasiswa ber-ID: " << recMhs[i].getId() << endl;
                    cout << "Nama            : " << recMhs[i].getNama() << endl;
                    cout << "Jenis Kelamin   : " << recMhs[i].getjeniskelamin() << endl;
                    cout << "dd/mm/yy        : " << recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-" << recMhs[i].getTahunLahir() << endl;
                    cout << "NRP             : " << recMhs[i].getNRP() << endl;
                    cout << "Departemen      : " << recMhs[i].getDepartemen() << endl;
                    cout << "Tahun Masuk     : " << recMhs[i].getTahunmasuk() << endl;
                    cout << "Semester ke     : " << recMhs[i].getSemester() << endl;
                    cout << "SKS lulus       : " << recMhs[i].getSKSLulus() << endl;
                }
            } break;


			case 5:{
                // Menampilkan data dari Dosen
                for(int i = 0; i < IDDsn; i++){
                    cout << i+1 << ". Data Dosen ber-ID: " << recDosen[i].getId() << endl;
                    cout << "Nama            : " << recDosen[i].getNama() << endl;
                    cout << "Jenis Kelamin   : " << recDosen[i].getjeniskelamin() << endl;
                    cout << "dd/mm/yy        : " << recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-" << recDosen[i].getTahunLahir() << endl;
                    cout << "NPP             : " << recDosen[i].getNPP() << endl;
                    cout << "Departemen      : " << recDosen[i].getDepartemen() << endl;
                    cout << "Pendidikan      : " << recDosen[i].getPendidikan() << endl << endl;
                }
            } break;

			case 6:{
                // Menampilkan data dari Tendik
                for(int i = 0; i < IDTndk; i++){
                    cout << i+1 << ". Data Tendik ber-ID: " << recTendik[i].getId() << endl;
                    cout << "Nama            : " << recTendik[i].getNama() << endl;
                    cout << "Jenis Kelamin   : " << recTendik[i].getjeniskelamin() << endl;
                    cout << "dd/mm/yy        : " << recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-" << recTendik[i].getTahunLahir() << endl;
                    cout << "NPP             : " << recTendik[i].getNPP() << endl;
                    cout << "Unit            : " << recTendik[i].getUnit() << endl << endl;
                }
            } break;
		}
        //Choose menu untuk menjalankan/melanjutkan program lagi atau tidak
        labels:
        cout << "Apakah Anda akan menjalankan atau melanjutkan program? Tekan y/Y untuk Ya dan n/N untuk Tidak (y/n) : ";
        cin >> EndNext;
        if(EndNext == 'n' || EndNext == 'N'){
            cout << "Terimakasih telah mengunjungi Siakad Universitas Kembang Lambe Tunas Bangsa" << endl;
            break;
        } else if(EndNext == 'y' || EndNext == 'Y'){
        } else{
            cout << "Input yang Anda masukkan salah!!!" << endl;
            goto labels;
        }
	}
	return 0;
}