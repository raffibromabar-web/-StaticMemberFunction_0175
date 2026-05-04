#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
    private:
        static int nim;
    public:
        int id;
        string nama;

        void setID();
        void printAll();

        static void setNim(int pnim){
            nim = pnim;
        };

        static int getnim(){
            return nim;
        }

        Mahasiswa(string pnama) :nama(pnama){
            setID();
        };
};

int Mahasiswa::nim = 0;

void Mahasiswa::setID(){
    id = ++nim;
}

void Mahasiswa::printAll(){
    cout << "ID = " << id << endl;
    cout << "Nama = " << nama << endl;
    cout << endl;
}

int main(){
    Mahasiswa mhs1("Walek Sri");
    Mahasiswa mhs2("Budi ko");
    Mahasiswa::setNim(9);
    Mahasiswa mhs3("Andi J");
    Mahasiswa mhs4("Joko Kendil");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "Akses dari luar objek = " << Mahasiswa::getnim() << endl;
    system("pause");
    return 0;
}