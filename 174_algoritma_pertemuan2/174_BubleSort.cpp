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

void display() { //prosedur/function untuk output
	cout << endl; //baris kosong
	cout << "==========================" << endl; //output ke layar
	cout << "Elemen Array telah terurut" << endl; //output ke layar
	cout << "==========================" << endl; //output ke layar

	for (int i = 0; i < n; i++) //looping dimulai dari nol hingga n-1
	{
		cout << "Data ke - " << i << " : " << a[i] << endl; //output data array ke layar
	}
}

void BubbleSort() { //prosedur/function untuk mengurutkan array dengan metode bublesort

	for (int pass = 1; pass < n; pass++) //looping dengan variabel pass dimualai dari 1 hingga n - 1
	{
		for (int j = 0; j < n - pass; j++) { //looping dengan j dimulai dari nol hingga n - 1 - pass
			if (a[j] > a[j + 1]) { //jika nilai array index ke j lebih besar dari array index ke j+1
				int temp = a[j]; //simpan nilai index ke j di variabel sementara bernama temp
				a[j] = a[j + 1]; //assign nilai array index ke j+1 ke array index j
				a[j + 1] = temp; //assign variabel yang berisi array index ke j ke array index j+1
			}
		}
	}
}

int main()
{
	input(); //memanggil input()
	BubbleSort(); //memanggil BubbleSort()
	display(); //memanggil display()
	return 0;
}
