#pragma once
#include <iostream>

using namespace std;

struct complex_number {
	int x;
	int y;
};

int trans();

int sum(int a, int b);
int raz(int a, int b);
int proX(int a, int b, int c, int d);
int proY(int a, int b, int c, int d);
int delX(int a, int b, int c, int d);
int delY(int a, int b, int c, int d);