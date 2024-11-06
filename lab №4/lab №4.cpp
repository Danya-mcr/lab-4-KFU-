#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // задание 1
	int nums[10];
	short cnt = 0;
	float sr_znach = 0;
	int nums2[10] = { -2, 4, 3, -7, 0, 12, 9, -2, 4, 2 };
	while (cnt < sizeof(nums) / sizeof(nums[0])) {
		cout << "Введите число: ";
		cin >> nums[cnt];
		cnt++;
	}
	cout << "Второй элемент массива: " << nums[1] << endl;
	cout << "Девятый элемент массива: " << nums[8] << endl;
	for (int i = 1; i < 9; i += 2) {
		cout << nums[i] << endl;
	}
	cnt = 0;
	while (cnt < 10) {
		sr_znach += nums[cnt];
		cnt++;
	}
	cout << "Среднее арифметичсекое: " << sr_znach / 10 << endl;
	cout << "Суммы элементов двух массивов: " << endl;
	for (int k = 0; k < cnt; k++) {
		cout << nums[k] << " + " << nums2[k] << " = " << nums[k] + nums2[k] << endl;
	}
	// задание 2
	int nums[8], nmb = 0, cnt = 0;
	nums[0] = 0; nums[1] = 1;
	for (int k = 2; k < sizeof(nums) / sizeof(nums)[0]; k++) {
		nums[k] = nums[k - 2] + nums[k - 1];
	}
	while (cnt < 8) {
		cout << nums[cnt] << endl;
		cnt++;
	
	// задание 3
		int x[7], y[7];
		short cnt = 7, cnt2 = 0, cnt3 = 1, rnd1 = 0, rnd2 = 0;
		int nums1[21], nums2[14];
		for (int k = 0; k < cnt; k++) { // создаёт 2 массива с рандомными числами
			rnd1 = 0 + rand() % 20;
			rnd2 = 0 + rand() % 20;
			x[k] = rnd1; y[k] = rnd2;
		}
		for (int i = 0; i < cnt; i++) { // выводит первый массив
			cout << x[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < cnt; i++) { // выводит второй массив
			cout << y[i] << " ";
		}
		cout << endl << endl;
		cnt = 21;// cnt2 - номер x и y в массиве с начала 
		for (int j = 0; j < cnt; j += 3) { // выполянет условие А
			nums1[j] = x[cnt2]; nums1[j + 1] = y[cnt2];
			nums1[j + 2] = x[cnt2] + y[cnt2];
			cnt2++;
		}
		for (int i = 0; i < cnt; i++) { // выводит массив с условием А
			cout << nums1[i] << " ";
		}
		cout << endl << endl;
		//cnt - номер x в массиве с конца || cnt2 - номер y в массиве с начала || cnt3 - номер x с начала
		cnt = 6; cnt2 = 0; cnt3 = 1;
		for (int k = 0; k < 12; k += 2) { // выполяет условие Б
			nums2[k] = x[cnt]; nums2[k + 1] = y[cnt2] + x[cnt3];
			cnt--; cnt2++; cnt3++;
		}
		nums2[12] = x[0]; nums2[13] = y[6] + x[0];
		for (int i = 0; i < 14; i++) { // выводит массив с условием Б
			cout << nums2[i] << " ";
		}
	
	// задание 4
	int nums[10], w;
	for (int k = 0; k < 10; k++) {
		cout << "Введите " << k + 1 << " элемент массива";
		cin >> nums[k];
	}
	cout << "Введите число 'w'"; cin >> w;
	for (int i = 0; i < 10; i++) {
		for (int ii = 1; ii < 10; ii++) {
			if (nums[i] + nums[ii] == w) {
				cout << nums[i] << "[" << i << "]  " << nums[ii] << "[" << ii << "]" << endl;
			}
		}
	}

}


