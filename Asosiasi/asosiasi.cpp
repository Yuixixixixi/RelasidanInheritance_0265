#include <iostream>
#include <vector>
using namespace std;

class dokter:

class pasien {  //asosiasi
    public:
    string nama;
    vector<dokter*> daftar_dokter;
    pasien(string pNama): nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    }
    ~pasien() {
        cout << "Pasien \"" <<  nama
        << "\" tidak ada\n"; 
    }

    void tambahDokter(dokter*);
    void cetakDokter();
};

class dokter {
    public:
    string nama;
    vector<pasien*> daftar_pasien;
    dokter(string pNama): nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }
    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahPasien(pasien*);
    void cetakPasien();
}

void dokter::cetakPasien() {
    cout<< "Daftar pasien dari Dokter \"" <<this->nama << "\":\n"
    for (auto& a : daftar_pasien) {
        cout << a->nama << "\n";
    }
    cout << endl;
}