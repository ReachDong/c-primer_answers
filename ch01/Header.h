#pragma once
#include<iostream>
#include"Sales_item.h"

int p1_2() {
	// ·µ»Ø-1
	return -1;
}
void p1_8() {
	//std::cout <</*"**/"*/;
		std::cout <</* "*/" /* "/*" */;
	
}

void p1_11() {
	int low, high;
	std::cout<< "input two numbers: " << std::endl;
	std::cin >> low >> high;
	for (int i = low; i < high+1; i++)
		std::cout << i << std::endl;

}

void p1_12() {
	int sum=0;
	
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum<< std::endl;
}

void p1_16() {
	int num;
	int sum = 0;
	while (std::cin >> num) {
		sum += num;
		std::cout <<"sum is "<< sum;
	}
		
}

void p1_20() {
	Sales_item item1, item2;
	while (std::cin >> item1) {
		std::cout << item1 << std::endl;
	}
}

void p1_21() {
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	std::cout << (item1 + item2);
}

void p1_24() {
	Sales_item cur, val;
	int count=1;
	if (std::cin >> val) {
		while (std::cin >> cur) {
			if (cur.isbn() == val.isbn()) {
				count++;
				val += cur;
			}
			else {
				std::cout << val << std::endl;
				val = cur;
			}
		}
	}
}

