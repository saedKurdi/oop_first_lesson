#include<iostream>
using namespace std;
#include<Windows.h>





//
//Counter c(0, 100);//min,max,currentData
//c.increment();
//cout << getCurrent();//1
//c.increment();
//cout << getCurrent();//2
//2.Rəqəmsal sayğac məhdud diapazonlu dəyişəndir.Onun tam qiyməti təyin edilmiş maksimum qiymət həddinə
//(məsələn, k 0 - 100 diapazonunda qiymət alır) çatdığı zaman sıfırlanır.
//Bu cür sayğacın parametri kimi rəqəmsal saatı, kilometrölçən sayğacı nümunə göstərmək olar.
//Bu cür sayğac üçün sinfi təyin edin.Maksimal və minimal qiymətlərin verilməsini,
//sayğacın qiymətinin 1 vahid artırılmasını, cari qiymətin qaytarılmasını təmin edin.



class Counter {
private:
	int minimum = 0;
	int maximum = 100;
public:
	// def ctor
	Counter()
	{
		cout << "<-- Defeault constructor -->" << endl;
		minimum = 0;
		maximum = 100;
	}
	// set
	void SetMinMax(int min , int max){
		cout << "<-- This is setters for max and min -->" << endl;
		SetMin(min);
		SetMax(max);
	}
	// increment
	void Increment() {
			minimum++;
	}

	void ShowMinMax() {
		if (minimum == maximum) {
			minimum = 0;
		}
		cout << '(' << minimum << ',' << maximum << ')' <<  endl;
	}
	//setters 
	void SetMin(int min) {
		if (min < 0) {
			cout << "Minimum can not be litte than zero ! " << endl;
		}
		else {
			minimum = min;
		}
	}
	void SetMax(int max) {
		if (max < 0) {
			cout << "Max can not be little than zero ! " << endl;
		}
		else {
			maximum = max;
		}
	}
	//getters
	int getMax() {
		return maximum;
	}
	int getMin() {
		return minimum;
	}

};







void main() {
	Counter c;
	c.SetMinMax(0, 100);
	c.ShowMinMax();
	for (size_t i = 0; i < 150; i++)
	{
		system("cls");
		Sleep(100);
		c.Increment();
		c.ShowMinMax(); cout << endl << endl << endl;
		Sleep(100);
	}

}