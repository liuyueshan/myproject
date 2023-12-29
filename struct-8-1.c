/*
 * struct-8-1.c
 *
 *  Created on: 2023年12月29日
 *      Author: liu_y
 */


#include <stdio.h>

int main(){

	struct person
	{
		char name[10];
		char sex;
		int age;
		float wage;

	};

	struct student
	{
		long number;
		char name[10];
		char sex;
		int age;
		float score[3];
	};

	return 0;
}
