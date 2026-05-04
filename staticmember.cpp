#include <iostream>
using namespace std;

class Mahasiswa {
    public:
        static int nim;
        int id;
        string nama;

        void setID();
        void printAll();

        Mahasiswa(string pnama) :nama(pnama) {
            setID();
        }
};

int Mahasiswa::nim = 10;
