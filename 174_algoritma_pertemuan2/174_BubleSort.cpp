#include <iostream>
using namespace std;

int a[20]; //deklarasi array a dengan ukuran 20 bertipe integer
int n; // deklarasi variabel n untuk menyimpan banyaknya elemen array

void input() { //prosedur / function untuk input
	
	while (true) //looping while
	{
		cout << "Masukkan panjang array : ";
		cin >> n;

		if (n <= 20) {
			break;
		}
		else {
			cout << "Error : Maksimal input array adalah 20\n";
		}
	}

	cout << endl; //output baris kosong
	cout << "=====================" << endl; //output ke layar
	cout << "Masukkan elemen Array" << endl; //output ke layar
	cout << "=====================" << endl; //output ke layar

	for (int i = 0; i < n; i++) //looping for dimulai dari index ke nol 
	{
		cout << "Masukkan Nilai ke - " << i+1 << " : "; //output ke layar
		cin >> a[i]; //hasil input dari pengguna
	}

}

int main()
{
	input();
}
