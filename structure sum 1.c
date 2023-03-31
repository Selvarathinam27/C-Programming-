#include<stdio.h>
struct student
{
	char name[50];
	int roll_no;
	int mark[4];
	float average;
}student1;
int main()
{
	struct student student1;
	printf("Enter student's name: ");
    scanf("%s", &student1.name);
	student1.roll_no="192211172";
	student1.mark[0]=50;
	student1.mark[1]=60;
	student1.mark[2]=70;
	student1.average=(float)(student1.mark[0]+student1.mark[1]+student1.mark[2] /3);
	
	printf("Roll No.: %d\n", student1.roll_no);
    printf("Name: %s\n", student1.name);
    printf("Marks for Test 1: %d\n", student1.mark[0]);
    printf("Marks for Test 2: %d\n", student1.mark[1]);
    printf("Marks for Test 3: %d\n", student1.mark[2]);
    printf("Marks for Test 4: %d\n", student1.mark[3]);
    printf("Average: %.2f\n", student1.average);
	
	return 0;	
}
