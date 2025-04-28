#include <iostream>
using namespace std;

class hewan {
    private:
    string jenisKelamin;
    public:
    string tipe;
    string umur;

    void inputData() {
        cout << "Masukkan jenis kelamin = " << endl;
        cin >> jenisKelamin;
        cout << "Masukkan tipe = " << endl;
        cin >> tipe;
        cout << "Masukkan umur = " << endl;
        cin >> umur;
    }
    void tampilHewan() {
        cout << "jenis kelaminnya adalah " << jenisKelamin << endl;

    }
};

int main() {
    hewan ambon;
    ambon.inputData();
    cout << "umurnya adalah " << ambon.umur << endl;
    cout << "tipenya adalah " << ambon.tipe << endl;
    ambon.tampilHewan();
}