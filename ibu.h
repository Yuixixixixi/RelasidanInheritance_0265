#ifndef IBU_H
#define IBU_H

class ibu {
    public:
    string nama;
    vector<anak*> daftar anak;

    ibu{string pNama} : nama{pNama} {
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

