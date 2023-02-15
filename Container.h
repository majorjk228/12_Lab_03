#pragma once
#include <iostream>
#include <map> //словарь
using namespace std;
//параметризированный класс
template<class T>
class Container
{
	map<int, T> v; //контейнер словарь
	int len; //длина словаря
public:
	Container(void); //конструктор без параметров
	Container(int n); //конструктор с параметрами
	void Print(); //печать
	void Add(int n, T el);
	T Srednee();
	~Container(void); //деструктор
};
//реализация методов
//конструктор без параметров
template <class T>
Container<T>::Container()
{
	len = 0;
}
//деструктор
template <class T>
Container<T>::~Container(void)
{
}
//конструктор c параметрами
template <class T>
Container<T>::Container(int n)
{
	T a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v[i] = a;//записать а в словарь
	}
	len = v.size();
}

//вывод контейнера
template <class T>
void Container<T>::Print()
{
	for (int i = 0; i < v.size(); i++)
		cout << i << " - " << v[i] << " " << endl;
	cout << endl;
}
//вычисление среднего арифметического
template<class T>
T Container<T>::Srednee()
{
	//Time s = v[0]; //начальное значение суммы – первый элемент словаря
	T s = v[0]; //начальное значение суммы – первый элемент словаря
	//перебор словаря
	for (int i = 1; i < v.size(); i++)
	{
		s = s + v[i];
	}
	int n = v.size();//количество элементов в словаре
	return s / n;
}
//добавление
template<class T>
void Container<T>::Add(int n, T el)
{
	v.insert(make_pair(n, el));//формируем пару и добавляем ее в словарь
}