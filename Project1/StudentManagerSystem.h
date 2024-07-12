
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include <malloc.h>
using namespace std;


typedef  struct _Student
{

	char name[20];
	int age;
	int stuNum;
	int score;

} Student;


typedef struct _Node
{
	Student stu;

	struct _Node* pNext;

}Node;



Node* g_pHead = NULL;


void Welcome();

void InputStudent();

void PrintStudent();
