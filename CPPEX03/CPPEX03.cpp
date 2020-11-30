#include <iostream>
using namespace std;
#include "getObesity.h"

int main() {
	double height;
	double weight;
	double bmi;
	int num;

	cout << "身長（cm）を入力してください：";
	cin >> height;

	cout << "体重（kg）を入力してください：";
	cin >> weight;

	bmi = getBmi(height, weight);
	cout << "あなたのBMIは、" << bmi << "です。" << endl;

	num = getObesity(bmi);
	switch (num) {
	case -1:
		cout << "低体重です。";
		break;
	case 0:
		cout << "普通体重です。";
		break;
	case 1:
		cout << "肥満(1度)です。";
		break;
	case 2:
		cout << "肥満(2度)です。";
		break;
	case 3:
		cout << "肥満(3度)です。";
		break;
	case 4:
		cout << "肥満(4度)です。";
		break;
	}
	int e;
	cin >> e;
	return 0;
}