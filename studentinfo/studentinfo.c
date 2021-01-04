#include <stdio.h>
int main()
{
	//Understand this structure declaration
	//1.Why are you declaring the structure with local scope?
	//2.Understand structure padding & avoid structure padding?
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
