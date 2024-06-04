#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string baris;
    string namaFile;

    cout << "Masukan Nama File : ";
    cin >> namaFile;

    //membuka file dalam kode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open(namaFile + ".txt", ios::out);

    cout << ">= menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
while(true) {
    cout << "_ ";
    //mendapatkan setiap karakter dalam satu baris
    getline(cin, baris);
    // loop akan berhenti jika anda memasukan karakter q
    if (baris == "q") break;
    //menulis dan memasukan nilai dari ''baris ke dalam file
    outfile << baris << endl;
 }
 //selesai dalam menulis sekarang tutup file nya
 outfile.close();

 //membuka file dalam mode membaca
 ifstream infile;
 //menunjuk ke sebuah file
 infile.open("contohfile.txt");

 cout << endl << ">= Membuka dan membaca file " << endl;
 //jika file ada maka
 if (infile.is_open())
{
    //melakukan perulangan setiap baris
    while(getline(infile, baris))
    {
        //dan tampilkan di sini
        cout << baris << '\n';
    }
    //tutup file tersebut setelah selesai
    infile.close();
}
//jika tidak ditemukan file makanakan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}
