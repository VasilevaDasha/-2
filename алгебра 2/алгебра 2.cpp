// алгебра 2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

/*
#include <iostream>
#include <ctime>
using namespace std;
int i, N;
//линейный поиск
int LineSearch(int A[], int key){
	for (i=0; i<N; i++)
		if (A[i]==key) 
			return i;
	return -1;
}

int main(){
	setlocale(LC_ALL,"Rus");
	int key, A[1000];
	srand(time(NULL));
	cout<<"Размер массива > "; cin>>N;
	cout<<"Исходный массив: ";
	for (i=0; i<N; i++){
		A[i]=rand()%10;
		cout << A[i] << " ";
	}

	cout<<"Искомый элемент > "; cin>>key;

	if (LineSearch(A, key)==-1) 
		cout<<"\nЭлемент не найден";
	else 
		cout<<"\nНомер элемента: "<<LineSearch(A, key)+1;
	system("pause");
	return 0;
}
*/


/*
#include <iostream>
using namespace std;
const int N = 10;
//бинарный поиск
int BinarySearch(int A[], int key)
{
	int left = -1, right = N, mid;
	while (left <= right)
	{
		mid = (left + right ) / 2;
		if (key < A[mid])
			right = mid - 1;
		else if (key > A[mid])
			left = mid + 1;
		else 
			return mid;
	}
	return -1;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, key;
	int A[N];
	cout << "Исходный массив: ";
	for (i = 0; i < N; i++) 
	{
		A[i] = N * i; 
		cout << A[i] << " ";
	}
	cout << "Искомый элемент > "; cin >> key; 
	if (BinarySearch(A, key) == -1) 
		cout << "\nЭлемент не найден";
	else 
		cout << "\nНомер элемента: " << BinarySearch(A, key) + 1;
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
#include <ctime>
using namespace std;
int i, N;
//линейный поиск с барьером
int BarierSearch(int A[], int key) {
	A[N] = key; int i = 0;
		while (A[i] != key)
		i++;
		if (A[i] == key)
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int key, A[1000];
	srand(time(NULL));
	cout << "Размер массива > "; cin >> N;
	cout << "Исходный массив: "; 
	for (i = 0; i < N; i++) {
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	cout << "Искомый элемент > "; cin >> key;
	if (i != N)
		cout << "\nЭлемент не найден";
	else
		cout << "\nНомер элемента: " << BarierSearch(A, key) + 1;
		
	system("pause");
	return 0;
}
*/

/*
#include <iostream>
using namespace std;
const int N = 17;
//интерполяционный поиск
int InterSearch(int A[], int key)
{
	int mid, left = 0, right = N - 1;
	while (A[left] <= key && A[right] >= key){
		mid = left + ((key - A[left]) * (right - left)) / (A[right] - A[left]);
		if (A[mid] < key) 
			left = mid + 1;
		else if (A[mid] > key) 
			right = mid - 1;
		else 
			return mid;
	}
	if (A[left] == key) 
		return left;
	else 
		return -1;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int i, key;
	int A[N] = { 2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59 };
	
	cout << "Исходный массив: ";
	for (i = 0; i < N; i++) cout << A[i] << " ";
	cout << "Искомый элемент > "; cin >> key; 
	if (InterSearch(A, key) == -1)
		cout << "\nЭлемент не найден";
	else 
		cout << "\nНомер элемента: " << InterSearch(A, key) + 1;
	system("pause");
	return 0;
}
*/

#include <iostream>
#include <ctime>
using namespace std;
int i, N;

int LineSearch(int A[], int key) {
	for (i = 1; i < N+1; i++)
		if (A[i]-1!=A[i-1])
			return i;
	return -1;
}

int main() {
	setlocale(LC_ALL, "Rus");
	int key, A[1000];
	srand(time(NULL));
	cout << "Размер массива > "; cin >> N;
	cout << "Искомый элемент > "; cin >> key;
	cout << "Исходный массив: ";
	for (i = 0; i < N; i++) {
		A[i] = rand() % 10;
		cout << A[i] << " ";
	}
	
	if (LineSearch(A, key) == -1)
		cout << "\nНе хватает элемента " << A[i] - 1 << "под индексом" << i;
	system("pause");
	return 0;
}
