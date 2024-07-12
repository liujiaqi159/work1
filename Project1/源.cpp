
#include"StudentManagerSystem.h"



int main()
{
	while (true)
	{
		Welcome();

		char  ch = _getch();
		switch (ch)
		{
		case '1':
			InputStudent();
			break;
		case '2':
			PrintStudent();
			break;
		case  '3':
			break;
		case '4':
			break;
		case '5':
			break;
		case '6':
			break;
		case '7':
			break;
		case '8':
			break;
		case '0':
			break;




		}





	}









	return 0;

}


void Welcome()
{
	printf("*******************************\n");
	printf("* \t欢迎使用高校学生管理系统\t*\n");
	printf("*******************************\n");
	printf("**\t   请选择功能列表     \t**\n");
	printf("******************************\n");
	printf("****\t1.录入学生信息\******t*\n");
	printf("****\t2.打印学生信息\t  *******\n");
	printf("****\t3.保存学生信息\t  ******\n");
	printf("*****\t4.读取学生信息\t ******\n");
	printf("*****\t5.统计所有学生人数\t***\n");
	printf("*****\t6.查找学生信息\t*******\n");
	printf("*****\t7.修改学生信息\t*******\n");
	printf("*****\t8.删除学生信息\t*******\n");
	printf("*****\t0.退出系统\************\n");



}




void InputStudent()

{

	Node* pNewNode = (Node*)malloc(sizeof(Node));
	pNewNode->pNext = NULL;


	if (g_pHead == NULL)
	{
		g_pHead = pNewNode;
	}
	else
	{
		pNewNode->pNext = g_pHead;
		g_pHead = pNewNode;
	}




	printf("请输入学生姓名：  \n");
	scanf(" % s", &pNewNode->stu.name);

	printf("学生信息录入成功.\n");
	//system("pause");


	printf("请输入学生的年龄:  \n");
	scanf("%d", &pNewNode->stu.age);

	printf("学生信息录入成功.\n");
	system("pause");


	printf(" 请输入学生的学号:  \n");
	scanf("%d", &pNewNode->stu.stuNum);


	printf("学生信息录入成功.\n");
	system("pause");

	printf("请输入学生的成绩:   \n");
	scanf("%d", &pNewNode->stu.score);




	printf("学生信息录入成功.\n");
	system("pause");


}

void PrintfStudent()
{
	printf("*******************************\n");
	printf("* \t欢迎使用高校学生管理系统\t*\n");
	printf("*******************************\n");
	printf("*\t学号\t*\t姓名\t*\t年龄\t*\t成绩*\n");
	printf("*******************************\n");

	Node* p = g_pHead;
	while (p != NULL)
	{

		printf("*\t%d\t*\t%s\t*\t%d\t*\t%d\n",
			p->stu.stuNum,
			p->stu.name,
			p->stu.age,
			p->stu.score
		);


		p = p->pNext;
	}
}