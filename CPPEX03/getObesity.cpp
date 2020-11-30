int getObesity(double bmi) {
	int num;

	if (bmi < 18.5) num = -1;
	else if (bmi < 25) num = 0;
	else if (bmi < 30) num = 1;
	else if (bmi < 35) num = 2;
	else if (bmi < 40) num = 3;
	else num = 4;
	return num;
}
