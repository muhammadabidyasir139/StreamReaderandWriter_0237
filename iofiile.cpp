#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string baris;

    //membuka file dalam kode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= menulis file, \'q\' untuk keluar" << endl;
}