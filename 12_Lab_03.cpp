// Лабораторная работа №12(3), Вариант 3 (2 семестр).
//

#include <iostream>
#include "Vector.h"
//#include "Container.h"
#include "Time.h"


using namespace std;


void main()
{
	int n;
	cout << "Kolvo elementov: ";
	cin >> n;
	Vector <Time> v(n);		//создать контенер
	//Container <Time> v(n);
	v.Print();
	Time t = v.Srednee();//найти среднее арифметическое
	cout << "Srednee=" << t << endl;
	cout << "Add srednee" << endl;
	cout << "pos?";
	int pos;
	cin >> pos;
	v.Add(pos, t);
	v.Print();
	cout << "Delete max: " << endl;
	v.Del();
	v.Print();
	cout << "Delenie na min: " << endl;
	v.Delenie();
	v.Print();

}


