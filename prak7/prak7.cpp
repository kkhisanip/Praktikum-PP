#include <iostream>
using namespace std;

void tampilNilai (string nama, double tugas, double uts, double uas) {
	cout << "Nama mahasiswa : " << nama << endl;
	cout << "Nilai tugas    : " << tugas << endl;
	cout << "Nilai UTS      : " << uts << endl;
	cout << "Nilai UAS      : " << uas << endl;
	cout << "Nilai akhir    : " << (tugas + uts + uas) / 3 << endl;
}

int main() {
	string nama;
	double tugas, uts, uas;
	
	cout << "Masukkan nama : ";
	getline (cin, nama);
	cout << "Masukkan nilai tugas : ";
	cin >> tugas;
	cout << "Masukkan nilai UTS : ";
	cin >> uts;
	cout << "Masukkan nilai UAS : ";
	cin >> uas; 
	
	tampilNilai (nama, tugas, uts, uas);
	
	return 0;
}
