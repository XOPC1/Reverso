//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

int fact(int n) {
	if (n <= 1)
		return 1;
	return fact(n - 1) * n;
}

int Fibo(int fn) {
	if (fn == 0)
		return 0;
	if (fn == 1)
		return 1;
	return Fibo(fn - 1) + Fibo(fn - 2);
}

template<typename T>void bubblesort(T array[], int l, bool type = false) {
	if (!type){
		for (int i = l - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] > array[j + 1])
					swap(array[j], array[j + 1]);
	}
	else
		for (int i = l - 1; i > 0; i--)
			for (int j = 0; j < i; j++)
				if (array[j] < array[j + 1])
					swap(array[j], array[j + 1]);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;
	/*cin >> n;
	cout << fact(n) << endl;*/

	//Задача 1
	/*cout << "Первые 13 чисел Фибоначчи:\n";
	for (int i = 0; i < 13; i++)
		cout << i + 1 << ". " << Fibo(i) << endl;
	cout << endl;*/

	//Задача 2
	cout << "Изначальный массив:\n";
	double a[5] = { 3,-4,0,6.12,-0.1 };
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";
	cout << "\nОтсортированный массив:\n";
	bubblesort(a, 5,1);
	for (int i = 0; i < 5; i++)
		cout << a[i] << " ";

	return 0;
}