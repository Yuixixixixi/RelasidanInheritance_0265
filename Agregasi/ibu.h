#ifndef IBU_H
#define IBU_H
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class anak; // Forward declaration

class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

    ibu(string pNama) : nama(pNama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tiada\n";
    }
    void tambahAnak(anak* pAnak) {
        daftar_anak.push_back(pAnak);
    }
    void cetakAnak() {
        cout << "Daftar anak dari Ibu \"" << this->nama << "\":\n";
        for (int i = 0; i < daftar_anak.size(); i++) {
            cout << daftar_anak[i]->nama << endl;
        }
        cout << endl;
    }
};


#endif
