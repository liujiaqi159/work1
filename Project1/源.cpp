
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
	printf("* \t��ӭʹ�ø�Уѧ������ϵͳ\t*\n");
	printf("*******************************\n");
	printf("**\t   ��ѡ�����б�     \t**\n");
	printf("******************************\n");
	printf("****\t1.¼��ѧ����Ϣ\******t*\n");
	printf("****\t2.��ӡѧ����Ϣ\t  *******\n");
	printf("****\t3.����ѧ����Ϣ\t  ******\n");
	printf("*****\t4.��ȡѧ����Ϣ\t ******\n");
	printf("*****\t5.ͳ������ѧ������\t***\n");
	printf("*****\t6.����ѧ����Ϣ\t*******\n");
	printf("*****\t7.�޸�ѧ����Ϣ\t*******\n");
	printf("*****\t8.ɾ��ѧ����Ϣ\t*******\n");
	printf("*****\t0.�˳�ϵͳ\************\n");



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




	printf("������ѧ��������  \n");
	scanf(" % s", &pNewNode->stu.name);

	printf("ѧ����Ϣ¼��ɹ�.\n");
	//system("pause");


	printf("������ѧ��������:  \n");
	scanf("%d", &pNewNode->stu.age);

	printf("ѧ����Ϣ¼��ɹ�.\n");
	system("pause");


	printf(" ������ѧ����ѧ��:  \n");
	scanf("%d", &pNewNode->stu.stuNum);


	printf("ѧ����Ϣ¼��ɹ�.\n");
	system("pause");

	printf("������ѧ���ĳɼ�:   \n");
	scanf("%d", &pNewNode->stu.score);




	printf("ѧ����Ϣ¼��ɹ�.\n");
	system("pause");


}

void PrintfStudent()
{
	printf("*******************************\n");
	printf("* \t��ӭʹ�ø�Уѧ������ϵͳ\t*\n");
	printf("*******************************\n");
	printf("*\tѧ��\t*\t����\t*\t����\t*\t�ɼ�*\n");
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