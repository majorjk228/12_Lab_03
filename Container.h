#pragma once
#include <iostream>
#include <map> //�������
using namespace std;
//������������������� �����
template<class T>
class Container
{
	map<int, T> v; //��������� �������
	int len; //����� �������
public:
	Container(void); //����������� ��� ����������
	Container(int n); //����������� � �����������
	void Print(); //������
	void Add(int n, T el);
	T Srednee();
	~Container(void); //����������
};
//���������� �������
//����������� ��� ����������
template <class T>
Container<T>::Container()
{
	len = 0;
}
//����������
template <class T>
Container<T>::~Container(void)
{
}
//����������� c �����������
template <class T>
Container<T>::Container(int n)
{
	T a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		v[i] = a;//�������� � � �������
	}
	len = v.size();
}

//����� ����������
template <class T>
void Container<T>::Print()
{
	for (int i = 0; i < v.size(); i++)
		cout << i << " - " << v[i] << " " << endl;
	cout << endl;
}
//���������� �������� ���������������
template<class T>
T Container<T>::Srednee()
{
	//Time s = v[0]; //��������� �������� ����� � ������ ������� �������
	T s = v[0]; //��������� �������� ����� � ������ ������� �������
	//������� �������
	for (int i = 1; i < v.size(); i++)
	{
		s = s + v[i];
	}
	int n = v.size();//���������� ��������� � �������
	return s / n;
}
//����������
template<class T>
void Container<T>::Add(int n, T el)
{
	v.insert(make_pair(n, el));//��������� ���� � ��������� �� � �������
}