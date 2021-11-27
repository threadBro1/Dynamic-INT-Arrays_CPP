#pragma once
using namespace std;
#include <iostream>
#include <Windows.h>

class dynamic_INT_array{
public:
	void FillArray(int* const arr, const int SIZE) { //Передаем массив,с константным указателем
		for (int i = 0; i < SIZE; ++i) {
			arr[i] = rand() % 50;
		}
	}

	void ShowArray(const int* const arr, const int SIZE) { //Констаный массив
		for (int i = 0; i < SIZE; ++i) {
			cout << "Arr " << i << ": \t" << arr[i] << "\t" << arr + i << endl;
		}
	}

	void push_back(int*& arr, int& SIZE, const int value) { //Передаем указатель на ссылку,чтобы можно было изменить
		int* newArray = new int[SIZE + 1];// Создаем новый массив,с размером на 1 больше

		for (int i = 0; i < SIZE; ++i) {
			newArray[i] = arr[i]; // Заполняем его,данными прежнего массива
		}

		newArray[SIZE] = value; //К последнему элементу,добавляем вэлью
		++SIZE; //Увеличиваем размер

		delete[] arr; //Очищаем старый массив

		arr = newArray; //Передаем ссылку в наш массив,для последующей работы

	}

	void pop_back(int*& arr, int& SIZE) {
		SIZE -= 1;
		int* newArray = new int[SIZE];

		for (int i = 0; i < SIZE; ++i) {
			newArray[i] = arr[i];
		}

		delete[] arr;

		arr = newArray;

	}

	int size(const int* const arr, const int SIZE) {
		return sizeof(arr);
	}

	void push_start(int*& arr, int& SIZE, const int value) {
		int* newArray = new int[SIZE + 1];

		++SIZE;

		newArray[0] = value; //Set value in start
		for (int i = 1; i < SIZE; ++i) {
			newArray[i] = arr[i - 1]; //Fill elements
		}

		newArray[SIZE] = arr[SIZE - 1]; //Fill last element


		delete[] arr;

		arr = newArray;
	}

	void pop_start(int*& arr, int& SIZE) {
		--SIZE;
		int* newArray = new int[SIZE];

		for (int i = 1; i < SIZE; ++i) {
			newArray[i - 1] = arr[i];
		}

		newArray[SIZE - 1] = arr[SIZE];

		delete[] arr;

		arr = newArray;
	}

	void exchange(int*& arr, int& SIZE, const int value, const int num) {
		if (num >= SIZE) {
			cout << "[DA_ERROR]You num,bigger SIZE" << endl;
			exit(-1);
		}
		else {
			int* newArray = new int[SIZE];

			for (int i = 0; i < SIZE; ++i) {
				if (i == num) {
					newArray[i] = value;
				}
				else {
					newArray[i] = arr[i];
				}
			}

			delete[] arr;

			arr = newArray;
		}
	}

	void sort(int* const arr, int SIZE){
		int temp;
		for (int i = 1; i < SIZE; ++i) {//Check element
			for (int j = 0; j < SIZE; ++j) {
				if (arr[j] > arr[i]) {
					temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
};

