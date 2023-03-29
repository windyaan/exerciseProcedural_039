#include <iostream>
using namespace std;

int arr[20];
char k;

double rerata(double a, double b) {
    return (a + b) / 2;
}

string status(double r, double n) {
    if (r > 70 || n >= 80) {
        return "diterima";
    }
    else {
        return "tidak diterima";
    }
}

void status() {
    double nilaiMath, nilaiBing;


    cout << "Masukkan nilai matematika : ";
    cin >> nilaiMath;
    cout << "Masukkan nilai bahasa inggris : ";
    cin >> nilaiBing; 

    cout << "Nilai rata-rata nya : " << rerata(nilaiMath, nilaiBing);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiBing), nilaiMath);
}

void nama() {											//Procedure Display
    cout << endl;											//Output baris kosong
    cout << "=================================" << endl;	//Output ke layar
    cout << "Nama                       Status" << endl;	//Output ke layar
    cout << "=================================" << endl;	//Output ke layar
    
    for char k;
        cout << arr[j] << endl;								//Output ke layar
    }
    cout << endl;
}

void totalkandidat() {
    cout << "\nTotal Kandidat yang diterima " << status diterima << " :"
    cout << "\nTotal Kandidat yang tidak diterima " << status tidak diterima << " :"

int main() {
	status();				//memanggil status 
    nama();				    //Memanggil nama
    totalkandidat();
}