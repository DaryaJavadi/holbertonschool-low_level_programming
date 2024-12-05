#include <stdio.h>

struct Student {
	char name[50];
	int age;
	float marks[5];
};

float calculateAverageMarks(struct Student s)
{
	float sum = 0;
	for (int i = 0; i < 5; i++)
	{
	sum += s.marks[i];
	}
	return (sum / 5);
}

int main()
{
	struct Student students[3] = {
	{"Tehran Abilova", 20, {85.5, 90.0, 88.5, 92.0, 87.0}},
	{"Irada Nuraliyeva", 21, {78.0, 85.5, 91.0, 80.5, 84.0}},
	{"Darya Javadiasl", 22, {92.0, 93.5, 88.0, 85.0, 91.5}}
	};

	for (int i = 0; i < 3; i++)
	{
	float avg = calculateAverageMarks(students[i]);

	printf("Name: %s, Average Marks: %.2f\n", students[i].name, avg);
	}
	return (0);
}
