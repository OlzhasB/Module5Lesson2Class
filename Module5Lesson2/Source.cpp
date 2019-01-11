#include<stdio.h>
#include<locale.h>
#include<iostream>



void task1()
{

	int i, A[20] = { 0 }, j;


	for (i = 0; i < 20; i++)
	{
		A[i] = 15 + rand() % 30;
		for (j = 0; j < i; j++)
		{
			if (A[i] == A[j])
			{
				do
				{
					A[i] = 15 + rand() % 30;
					j = -1;
				} while (A[i] == A[j]);
			}

		}
	}

	for (i = 0; i < 20; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}

void task2()
{
	/*2. Определить:
	a. сумму всех элементов массива;
	b. произведение всех элементов массива;
	c. сумму квадратов всех элементов массива;
	d. сумму шести первых элементов массива;
	e. сумму элементов массива с k1-го по k2-й (значения k1 и k2 вводятся с клавиатуры; k2 > k1);
	f. среднее арифметическое всех элементов массива;
	g. среднее арифметическое элементов массива с s1-го по s2-й (значения s1 и s2 вводятся с клавиатуры; s2 > s1).
	*/

	int i, A[10] = { 0 }, sum = 0, prod = 1, ssqr = 0, sqr;
	float av;


	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 10;
		sum += A[i];

		prod *= A[i];

		sqr = A[i] * A[i];
		ssqr += sqr;



		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("The sum of all elements is: %d\n", sum);
	printf("The production of all elements is: %d\n", prod);
	printf("The sum of the squares: %d\n", ssqr);

	av = float(sum) / float(i);
	printf("The average is %.2f\n", av);

	sum = 0;
	for (i = 0; i < 6; i++)
	{
		sum += A[i];
	}

	printf("\nThe sum of 6 elements is: %d\n", sum);

	int k1, k2;

	printf("Write k1: ");
	scanf_s("%d", &k1);

	printf("Write k2: ");
	scanf_s("%d", &k2);

	if (k1 < 0 || k1 > k2 || k2 > 9)
	{
		printf("One of the numbers is invalid\n");
	}

	else
	{
		sum = 0;
		printf("\nFrom k1 to k2:\n");
		for (i = k1 - 1; i < k2; i++)
		{
			printf("A[%d] = %d\n", i, A[i]);
			sum += A[i];

		}
		printf("The sum of elements from k1 to k2 is: %d\n", sum);

		av = float(sum) / float(k2 - k1 + 1);
		printf("The avrage is %.2f\n", av);
	}

	system("pause");
}




void task3()
{/*3. 3. Дан массив. Найти:
a. сумму элементов массива, значение которых не превышает 20;
b. сумму элементов массива, больших числа a.
*/


	int i, A[15] = { 0 }, sum = 0, a;

	for (i = 0; i < 15; i++)
	{
		A[i] = 1 + rand() % 30;
		printf("A[%d] = %d\n", i, A[i]);

		if (A[i] <= 20)
		{
			sum += A[i];
		}
	}

	printf("The sum of numbers less than 20 is %d\n", sum);

	printf("Write a: ");
	scanf_s("%d", &a);
	sum = 0;

	printf("Numbers more than %d are: \n", a);
	for (i = 0; i < 15; i++)
	{
		if (A[i] > a)
		{
			sum += A[i];
			printf("A[%d] - %d\n", i, A[i]);
		}
	}

	printf("The sum of numbers more than a is %d\n", sum);
	system("pause");
}



void task4()
{
	
	int A[9] = { 0 }, i, a;
	int min = 50, max = 0, maxIndex, minIndex;
	
	for (i = 1; i < 9; i++)
		{
		A[i] = 1 + rand() % 20;

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}
		
		printf("A[%d] = %d\n", i, A[i]);

		}
	
	printf("\n\nMax number is A[%d] = %d\n", maxIndex, max);
	printf("Min number is A[%d] = %d\n", minIndex, min);

	a = A[maxIndex];
	A[maxIndex] = A[minIndex];
	A[minIndex] = a;
	

	printf("\nChanged array: \n");
	for (i = 0; i < 9; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}
	

	system("pause");
}


void task5()
{

	int A[10] = { 0 }, odd = 0, even = 0, i;


	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 25;


		if (A[i] % 2 != 0)
		{
			odd++;
		}

		if (A[i] % 2 == 0)
		{
			even++;
		}

		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nThe amount of odd numbers is %d\n", odd);
	printf("The amount of even numbers is %d\n\n", even);

	if (odd < even)
		printf("The amount of even numbers is more than odd\n");

	else if (even == odd)
		printf("The amount of even numbers is equal to odd\n");

	else
		printf("The amount of even numbers is less than odd\n");


	system("pause");
}

void task6()
{
	int A[16] = { 0 };
	int i, a;
	int min = 50, max = 0;
	int maxIndex, minIndex;

	for (i = 1; i < 16; i++)
	{
		A[i] = 1 + rand() % 20;

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}

		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\n\nMax number is A[%d] = %d\n", maxIndex, max);
	printf("Min number is A[%d] = %d\n", minIndex, min);


	system("pause");
}

void task7()
{
	int A[14] = { 0 }, even = 0, i;


	for (i = 0; i < 14; i++)
	{
		A[i] = -10 + rand() % 25;


		if ((A[i] % 2 == 0) && (A[i] > 0))
		{
			even++;
		}

		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("\nThe amount of positive even numbers is %d\n\n", even);

	
	system("pause");
}


void task8()
{
	int A[12] = { 0 }, max = 0, min = 40, i, j, c, sum;
	const int SIZE = 12;

	printf("Given array: \n");
	for (size_t i = 0; i < SIZE; i++)
	{
		A[i] = 1 + rand() & 30;

		if (A[i] < min)
		{
			min = A[i];
		}

		if (A[i] > max)
		{
			max = A[i];
		}

		printf("A[%d] = %d\n", i, A[i]);
	}
	printf("\nThe min number is %d\n", min);
	printf("The max number is %d\n", max);
	sum = min + max;
	printf("\nTheir sum is %d", sum);

	for (i = 0; i < SIZE - 1; i++)
	{
		for (j = SIZE - 2; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}

		}
	}

	printf("\n\nSorted array:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}

void task9()
{
	int A[14] = { 0 }, i, j;
	const int SIZE = 14;

	printf("Given array: \n");
	for (size_t i = 0; i < SIZE; i++)
	{
		A[i] = 1 + rand() & 30;

		

		printf("A[%d] = %d\n", i, A[i]);
	}

	int c;
	for (i = 0; i < 6; i++)
	{
		for (j = 5; j >= i; j--)
		{
			if (A[j] > A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}

		}
	}

	printf("\n\nSorted array from 1 to 7 index:\n");

	for (i = 0; i < 7; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	for (i = 7; i < 13; i++)
	{
		for (j = 12; j >= i; j--)
		{
			if (A[j] < A[j + 1])
			{
				c = A[j];
				A[j] = A[j + 1];
				A[j + 1] = c;
			}

		}
	}

	printf("\n\nSorted array from 8 to 14 index:\n");

	for (i = 7; i < 14; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}

	system("pause");
}

void task10()
{
	int A[12] = { 0 }, i;
	int min = 50, max = 0, a;
	int maxIndex, minIndex;

	for (i = 1; i < 16; i++)
	{
		A[i] = 1 + rand() % 20;

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}

		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\n\nMax number is A[%d] = %d\n", maxIndex, max);
	printf("Min number is A[%d] = %d\n", minIndex, min);

	a = abs(maxIndex - minIndex - 1);
	printf("There are %d numbers between max and min number\n", a);

	system("pause");	

}


void task11()
{
	int A[12] = { 0 }, i;
	int min = 50, max = 0, a;
	int maxIndex, minIndex;

	for (i = 1; i < 16; i++)
	{
		A[i] = 1 + rand() % 20;

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		if (A[i] < min)
		{
			min = A[i];
			minIndex = i;
		}

		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\n\nThe left limit is %d\n", min);
	printf("The right limit is %d\n", max);

	system("pause");
}


void task12()
{
	int A[16] = { 0 }, i, c = 0;

	printf("Given array: \n");
	for (i = 0; i < 16; i++)
	{
		A[i] = 1 + rand() % 20;
		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\nChanged array: \n");
	for (i = 0; i < 16; i++)
	{
		if (A[i] % 3 == 0)
		{
			A[i] = 0;
			c++;
		}
		
		printf("A[%d] = %d\n", i, A[i]);
	}

	printf("The amount of changed numbers - %d\n", c);
	system("pause");
}


void task13()
{

	int A[10] = { 0 }, odd = 1, even = 0, i;


	for (i = 0; i < 10; i++)
	{
		A[i] = 1 + rand() % 25;


		if (A[i] % 2 != 0)
		{
			odd *= A[i];
		}

		if ((i + 1) % 2 == 0)
		{
			even += A[i];
		}

		printf("A[%d] = %d\n", i + 1, A[i]);

	}

	printf("\nThe production of odd numbers is %d\n", odd);
	printf("The sum of numbers with even indexes is %d\n\n", even);

	
	system("pause");
}


void task14()
{
	int A[12] = { 0 }, i, sum = 0, a = 0, b;

	for (i = 1; i < 12; i++)
	{
		A[i] = 1 + rand() % 20;

		printf("A[%d] = %d\n", i, A[i]);

	}

	b = A[i - 1];
	printf("\nThe last number is A[%d] = %d\n", i - 1, b);
	printf("\nNumbers less than %d:\n", b);

	for (i = 1; i < 12; i++)
	{
		if (A[i] < b)
		{
			a++;
			sum += A[i];
			printf("A[%d] = %d\n", i, A[i]);
		}
	}

	printf("\nThe amount of these numbers is %d\nSum of these numbers is %d\n", a, sum);

	system("pause");
}

void task15()
{

	int A[19] = { 0 }, i, a;
	int max = 0, maxIndex;

	for (i = 0; i < 19; i++)
	{
		A[i] = 1 + rand() % 20;

		if (A[i] > max)
		{
			max = A[i];
			maxIndex = i;
		}

		printf("A[%d] = %d\n", i, A[i]);

	}

	printf("\n\nMax number is A[%d] = %d\n", maxIndex, max);

	for (size_t i = 0; i < 19; i++)
	{
		if (A[i] % 2 == 0)
		{
			A[i] = max;
		}
	}

	printf("\nChanged array: \n");
	for (i = 0; i < 19; i++)
	{
		printf("A[%d] = %d\n", i, A[i]);
	}


	system("pause");
}


int main()

{
	setlocale(LC_ALL, "");

	int task, flag;

start:

	printf("Введите номер задания: ");
	scanf_s("%d", &task);

	switch (task)
	{
	case 1:
	{
		task1();

		break;
	}
	case 2:
	{
		task2();

		break;
	}
	case 3:
	{
		task3();

		break;
	}
	case 4:
	{
		task4();
	}
	case 5:
	{
		task5();

		break;
	}
	case 6:
	{
		task6();

		break;
	}
	case 7:
	{
		task7();

		break;
	}
	case 8:
	{
		task8();

		break;
	}
	case 9:
	{
		task9();

		break;
	}
	case 10:
	{
		task10();

		break;
	}
	case 11:
	{
		task11();

		break;
	}
	case 12:
	{
		task12();

		break;
	}
	case 13:
	{
		task13();

		break;
	}
	case 14:
	{
		task14();

		break;
	}
	case 15:
	{
		task15();

		break;
	}
	}


	printf("Хотите продолжить 1 или 0?\n");
	scanf_s("%d", &flag);
	if (flag == 1)
	{
		goto start;
	}
	system("pause");
}