/*
Nama        : Delanika Olympiani Trieswari Caesarini
NPM         : 140810180026
Kelas       : B
Deskripsi   :
Tanggal     : 13 Maret 2019
*/


#include <iostream>
#include <string.h>

using namespace std;

struct r_mhs{
    char npm[14];
    char nama[40];
    float ipk;
};

typedef r_mhs larikMhs[30];

void banyakData(int& n);
void inputMhs (larikMhs& mhs, int n);
void cetakMhs (larikMhs mhs, int n);
void sortNama (larikMhs& mhs, int n);

int main()
{
    larikMhs mhs;
    int n;

    banyakData(n);
    inputMhs(mhs, n);
    sortNama(mhs, n);
    cetakMhs(mhs, n);

    return 0;
}

void banyakData(int& n){
    cout<<"Input banyak mahasiswa : "<<endl;

}
void inputMhs (larikMhs& mhs, int n){
    cout<<"Input Data Mahasiswa"<<endl;
    for(int i=0; i<=n; i++){
        cout<<"NPM   : "; cin>>mhs[i].npm;
        cout<<"Nama  : "; cin>>mhs[i].nama;
        cout<<"Float : "; cin>>mhs[i].ipk;
    }
}
void cetakMhs (larikMhs mhs, int n){
    cout<<"Data Mahasiswa"<<endl;
    for(int i=0; i<=n; i++){
        cout<<"NPM  : "<<mhs[i].npm<<endl;
        cout<<"Nama : "<<mhs[i].nama<<endl;
        cout<<"IPK  : "<<mhs[i].ipk<<endl;
    }
}

void sortNama (larikMhs& mhs, int n){
    for(int i=0; i<=n; i++){
        gets(mhs[i].nama)
    }
    stricmp()
}
