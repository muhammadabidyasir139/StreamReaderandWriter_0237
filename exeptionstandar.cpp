#include<iostream>
#include<exception>
// untuk objek exception yang akan digunakan
#include<array>
//untuk object array yang akan kita gunakan
using namespace std;
int main() {
    cout << "Awal Program" << endl; //penanda 1
    try {
        array<int, 3> data = {3, 5, 7};
        //pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan objek exception
        cout << e.what() << endl;
        /*akan di eksekusi karena array data hanya memiliki 3 elemen*/
    }
    cout << "baris program yang terakhir" << endl;
    /*penenda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/
    return 0;
}
