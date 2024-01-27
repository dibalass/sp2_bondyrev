// sp2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Math.h>
using namespace std;

void zad1() {
	srand(time(0));
	const int Lenght = 10;
	int mas[Lenght];
	cout << "Массив: ";
	int average = 0;
	for (int i = 0; i < Lenght; i++)
	{
		mas[i] = rand() % 100;
		average += mas[i];
		cout << mas[i] << " ";
	}
	average = average / Lenght;
	cout << "\nСреднее арифметическое = " << average;
}
void zad2() {
	srand(time(0));
	const int row = 5;
	const int col = 3;
	int mas[row][col];
	cout << "Массив: "<<endl;
	for (int i = 0; i < row; i++) {
		for (int j = 0; j <col; j++) {

			mas[i][j] = rand() % 100;
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}
	int sum_col = 0;
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			sum_col += mas[j][i];
		}
		cout<<"Сумма "<<i+1<<" столбца = " << sum_col << endl;
		sum_col = 0;
	}
}
void zad3() {
	struct Point {
		float x;
		float y;
	};

	Point point1;
	cout << "Введи х1"<<endl;
	cin>>point1.x;
	cout << "Введи y1" << endl;
	cin >> point1.y;

	Point point2;
	cout << "Введи х2" << endl;
	cin >> point2.x;
	cout << "Введи y2" << endl;
	cin >> point2.y;

	float distance = sqrt(pow(point2.x-point1.x, 2) + pow(point2.y-point1.y, 2));
	cout << "Расстояние между точками ";
	printf("%.2f",distance);

}
void zad4() {
	const int N = 10;
	class Student {
	private:
		char name[50];
		float grades[N];
	public:
		void AverageRating() {
			srand(time(0));
			float average = 0;
			cout << "Оценки:\n";
			for (int i = 0; i < N; i++)
			{
				grades[i] = 2 + rand() % 4;
				average += grades[i];
				cout << grades[i] <<" ";
			}
			average = average / N;
			cout << "\nСредняя оценка " << average;
		}
	};

	Student student;
	student.AverageRating();
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Введи номер задания от 1 до 4" << endl;
	int zad = 0;
	bool x = true;
	cin >> zad;
	switch (zad)
	{
	case 1: zad1();
		x = false;
		break;
	case 2: zad2();
		x = false;
		break;
	case 3: zad3();
		x = false;
		break;
	case 4: zad4();
		x = false;
		break;
	default:
		cout << "Ошибка. Введи число от 1 до 4" << endl;
		break;
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
