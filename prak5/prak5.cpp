#include <iostream>
using namespace std;

int main()
{
    int tanggal[12] = {3, 8, 15, 6, 27, 19, 13, 20, 31, 22, 4, 10};
    cout << "tanggal " << tanggal[9];
    
    string hari[7] = {"senin", "selasa", "rabu", "kamis", "jumat", "sabtu", "minggu"};
    cout << "hari" << hari[4] << endl;
    
    char namaP[] = {'K', 'a', 'i'};
    cout << "nama panggilan (char) : " << namaP << endl;
    
    string namaL[] = {"Kai penakluk dunia"};
    cout << "nama lengkap (string) : " << namaL << endl << endl;
    
    int i = 0;
    while ( i < 7)
    {
        cout << "hari ke-" << (i + 1) << " : " << hari[i] << endl;
        i++;
    }
    cout << endl;
    
    int panjang = sizeof(hari) / sizeof(hari[0]);
    cout << "panjang array hari adalah : " << panjang << endl;
    cout << "kai menaklukan dunia dalam " << panjang << " hari." << endl << endl;
    
    int jumlahHari = 7;
    int penjualan[jumlahHari];
    int totalPenjualan = 0;
    float rataRata;
    
    cout << "masukkan penjualan berapa porsi chicken katsu selama " << jumlahHari << " hari:" << endl;
    for (int j = 0; j < jumlahHari; j++)
    {
        cout << "penjualan hari adalah : " << hari[j] << " : ";
        cin >> penjualan[j];
        totalPenjualan += penjualan[j];
    }
    
    rataRata = (float)totalPenjualan / jumlahHari;
    cout << "total porsi chicken yang telah terjual : " << totalPenjualan << " porsi." << endl;
    cout << "rata-rata penjualan chicken katsu selama " << jumlahHari << " hari adalah:" << rataRata << " porsi." << endl << endl;
    
    int matriks [100][100];
    int jumlahBaris, jumlahKolom;
    
    cout << "masukkan jumlah bulan dan tanggal buka kedai chicken katsu : " << endl;
    cout << "input jumlah bulan (baris matriks) : ";
    cin >> jumlahBaris;
    cout << "input jumlah tanggal (kolom matriks) : ";
    cin >> jumlahKolom;
    
    for (int x = 0; x < jumlahBaris; x++)
    {
        for (int y = 0; y < jumlahKolom; y++)
        {
        cout << "baris " << i + 1 << ", kolom" << y + 1 << " = ";
        cin >> matriks[x][y];
        }
    }
    
    cout << "kedai chicken katsu buka selama : " << jumlahBaris << " bulan di tanggal tertentu." << endl;
    
    for (int x = 0; x < jumlahBaris; x++)
    {
        for (int y = 0; y < jumlahKolom; y++)
        {
            cout << matriks[x][y] << " ";
        }
        cout << endl;
    }
    
    return 0;
}