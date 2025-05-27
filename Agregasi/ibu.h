#ifndef IBU_H
#define IBU_H
#include <vector>

class ibu {
    public:
    string nama;
    vector<anak*> daftar_anak;

    ibu{string pNama} :nama{pNama} {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
~ibu() {
    cout << "Ibu \"" << nama << "\" tiada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void ibu::tambahAnak(anak* pAnak) {
    daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak() {
    cout << "Daftar anak dari Ibu \"" << this->nama << "\":\n";
    // for (auto& anak : daftar_anak) {
    //     cout << anak->nama << "\n";
    // }
    for {int i = 0; i < daftar_anak.size(); i++) {
        cout << daftar_anak[i]->nama << endl;
    } 
    cout << endl;
}


#endif
