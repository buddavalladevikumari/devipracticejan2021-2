#include <stdio.h>
int main()
{
	struct student
	{
		char name[50];
		int id;
		float percentage;
	}s;
	printf("enter student id");
	scanf_s("%d",&s.id);
	printf("enter student percentage");
	scanf_s("%f",&s.percentage);
	printf("enter student name");
	for (int i = 0; i <= 50; i++)
	{
		scanf_s("%c", &s.name[i]);
	}
}