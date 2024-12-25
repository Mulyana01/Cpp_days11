
/*3. Struktur dan Array
Soal:
Buatlah program untuk mengelola data mahasiswa menggunakan struct. Setiap mahasiswa memiliki:

Nama.
NIM.
IPK.*/

#include <iostream>
#include <string>

using namespace std;
struct dataMahasiswa
{
    string nama;
    string NIM;
    int IPK;
};

int main()
{
    dataMahasiswa mhs[3];

    // Input data untuk 3 mahasiswa
    cout << " Masukkan data 3 Mahasiswa :\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nMahasiswa " << i + 1 << ":\n ";
        cout << " Nama : ";
        getline(cin, mhs[i].nama);
        cout << " NIM : ";
        getline(cin, mhs[i].NIM);
        cout << " IPK : ";
        cin >> mhs[i].IPK;
        cin.ignore(); // Membersihkan buffer setelah input
    }
    // Mencari mahasiswa dengan IPK tertinggi
    int indeksTertinggi = 0;
    for (int i = 1; i < 3; i++)
    {
        if (mhs[i].IPK > mhs[indeksTertinggi].IPK)
        {
            indeksTertinggi = 1;
        }
    }

    // OUTPut mahasiswa dengan IPK Tertinggi
    cout << "\nMahasiswa dengan IPK tertinggi : \n ";
    cout << " Nama : " << mhs[indeksTertinggi].nama << endl;
    cout << " NIM : " << mhs[indeksTertinggi].NIM << endl;
    cout << " IPK : " << mhs[indeksTertinggi].IPK << endl;
    return 0;
}
