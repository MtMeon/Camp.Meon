#include <stdio.h>


/*
	int f = 0, r = 0, inpf, inpr, s;
	int age[100][100] = { {0, } }, money[100][100] = { {0, } };

	printf("= ����Ʈ ���ֻ��°��� ���α׷� = \n");
	printf("���� ����Ʈ ���� ������ �Է��մϴ�.\n");
	printf("���� ����Ʈ �� ���� �Է��ϼ��� - ");
	scanf("%d", &f);
	printf("���� ȣ�� ���� �Է��ϼ��� - ");
	scanf("%d", &r);
	printf("����Ʈ�� �� %d ���̸� ���� %d �� ȣ���� ������ �ֽ��ϴ�.\n", f, r);
	while (1)
	{
		printf("\n[ [ ���� ���ֻ��� ] ]\n");
		for (int a = f; a > 0; a--)
		{
			for (int p = 0; p < r; p++)
			{
				printf("-----------------------------");
			}
			printf("\n");
			for (int b = 0; b < r; b++)
			{
				printf("| [%d%02dȣ] ���� : %d �ں� : %d |", a, b+1, age[a][b], money[a][b]);
			}
			printf("\n");
		}
		for (int p = 0; p < r; p++)
		{
			printf("----------------------------");
		}
		printf("\n�Ʒ� ��� �� �����ϼ���\n");
		printf("1. ���� // 2. �̻� // 3. ����\n");
		printf("���� - ");
		scanf("%d", &s);
		// ���ּ���
		if (s == 1)
		{
			printf("���ָ� �����Ͽ����ϴ�.\n");
			printf("�����Ϸ��� �� / ȣ �Է��մϴ�.\n");
		��:
			printf("�� - ");
			scanf("%d", &inpf);
			// �� �Է°��� ���ذ� �ʰ���
			if (inpf > f)
			{
				printf("����Ʈ�� %d ���Դϴ�. Ȯ�� �� �Է��Ͽ� �ּ���.(���� �Է� ���� : %d )\n", f, inpf);
				goto ��;
			}
		ȣ:
			printf("ȣ - ");
			scanf("%d", &inpr);
			// ȣ �Է°��� ���ذ� �ʰ���
			if (inpr > r)
			{
				printf("����Ʈ�� ���� %d ȣ���� �Դϴ�. Ȯ�� �� �Է��Ͽ� �ּ���.(���� �Է� ���� : %d )\n", r, inpr);
				goto ȣ;
			}
			// ��, ȣ �Է°��� �����̳�(����)
			printf("%d%02dȣ�� �����ϼ̽��ϴ�\n", inpf, inpr);
			// ���� ��ϵ� ������ ������ ���� ���
			if (age[inpf][inpr-1] > 0)
			{
				printf("�ش� ȣ�� ��ϵ� ������ ������ �ִµ� ����մϱ�? (1.�� / 2.�ƴϿ�) - ");
				scanf("%d", &s);
				if (s == 1)
				{
					printf("��� �����մϴ�.\n");
					printf("������ ������ �Է��մϴ�.\n");
					printf("1. ���� - ");
					scanf("%d", &age[inpf][inpr-1]);
					printf("2. �ں� - ");
					scanf("%d", &money[inpf][inpr-1]);
				}
				if (s == 2)
				{
					printf("������ ���� �Է��� ����մϴ�.\n");
				}
			}
			// ��濡 ���� ������ �������
			else
			{
				printf("������ ������ �Է��մϴ�.\n");
				printf("1. ���� - ");
				scanf("%d", &age[inpf][inpr-1]);
				printf("2. �ں� - ");
				scanf("%d", &money[inpf][inpr-1]);
			}
		}
		// �̻糪���� - �̹� ����� ���������� ���� ���� �ʿ�
		if (s == 2)
		{
			printf("�̻縦 �����Ͽ����ϴ�.\n");
			printf("�̻��Ϸ��� �� / ȣ���� �Է��մϴ�.\n");
			printf("�� - ");
			scanf("%d", &inpf);
			printf("ȣ - ");
			scanf("%d", &inpr);
			printf("%d%02dȣ�� �����ϼ̽��ϴ�.\n", inpf, inpr);
			printf("Ȯ���մϱ�? (1. �� // 2. �ƴϿ�) - ");
			scanf("%d", &s);
			switch (s)
			{
				case 1:
				{
					age[inpf][inpr-1] = 0;
					money[inpf][inpr-1] = 0;
					printf("%d%02dȣ�� �̻� ó�� �Ǿ����ϴ�.\n", inpf, inpr);
					break;
				}
				case 2:
				{
					printf("�̻� ó���� ����Ͽ����ϴ�.\n");
				}
			}
		}
		if (s == 3)
		{
			printf("���� ���α׷��� �����մϴ�.\n");
			return 0;
		}
	}
*/ 
// 
int main()
{
	int f = 0, r = 0, inpf=0, inpr=0, s;
	int age[100][100] = { {0, } }, money[100][100] = { {0, } };
	char name[100][100][13] = { "" }, noname[2] = { "" };

	printf("= ����Ʈ ���ֻ��°��� ���α׷� = \n");
	printf("���� ����Ʈ ���� ������ �Է��մϴ�.\n");
	printf("���� ����Ʈ �� ���� �Է��ϼ��� - ");
	scanf("%d", &f);
	printf("���� ȣ�� ���� �Է��ϼ��� - ");
	scanf("%d", &r);
	printf("����Ʈ�� �� %d ���̸� ���� %d �� ȣ���� ������ �ֽ��ϴ�.\n", f, r);
	while (1)
	{
		printf("\n[ [ ���� ���ֻ��� ] ]\n");
		for (int a = f; a > 0; a--)
		{
			for (int p = 0; p < r; p++)
			{
				printf("-----------------------------");
			}
			printf("\n");
			for (int b = 0; b < r; b++)
			{
				printf("| [%d%02dȣ] �̸� : %s / ���� : %d / �ں� : %d |", a, b + 1, name[a][b],age[a][b], money[a][b]);
			}
			printf("\n");
		}
		for (int p = 0; p < r; p++)
		{
			printf("----------------------------");
		}
		printf("\n�Ʒ� ��� �� �����ϼ���\n");
		printf("1. ���� // 2. �̻� // 3. ����\n");
		printf("���� - ");
		scanf("%d", &s);
		// ���ּ���
		if (s == 1)
		{
			printf("���ָ� �����Ͽ����ϴ�.\n");
			printf("�����Ϸ��� �� / ȣ �Է��մϴ�.\n");
		��:
			printf("�� - ");
			scanf("%d", &inpf);
			// �� �Է°��� ���ذ� �ʰ���
			if (inpf > f)
			{
				printf("����Ʈ�� %d ���Դϴ�. Ȯ�� �� �Է��Ͽ� �ּ���.(���� �Է� ���� : %d )\n", f, inpf);
				goto ��;
			}
		ȣ:
			printf("ȣ - ");
			scanf("%d", &inpr);
			// ȣ �Է°��� ���ذ� �ʰ���
			if (inpr > r)
			{
				printf("����Ʈ�� ���� %d ȣ���� �Դϴ�. Ȯ�� �� �Է��Ͽ� �ּ���.(���� �Է� ���� : %d )\n", r, inpr);
				goto ȣ;
			}
			// ��, ȣ �Է°��� �����̳�(����)
			printf("%d%02dȣ�� �����ϼ̽��ϴ�\n", inpf, inpr);
			// ���� ��ϵ� ������ ������ ���� ���
			if (age[inpf][inpr-1] > 0)
			{
				printf("�ش� ȣ�� ��ϵ� ������ ������ �ִµ� ����մϱ�? (1.�� / 2.�ƴϿ�) - ");
				scanf("%d", &s);
				if (s == 1)
				{
					for (int a = f; a >= inpf; a--)
					{
						for (int b = r; b >= inpr-1; b--)
						{
							if (age[a][b] > 0)
							{
								strcpy(name[a][b+1], name[a][b]);
								age[a][b+1] = age[a][b];
								money[a][b+1] = money[a][b];
								if (age[a][r] > 0)
								{
									strcpy(name[a + 1][0], name[a][b]);
									age[a + 1][0] = age[a][b];
									money[a + 1][0] = money[a][b];
								}
							}
						}
					}
					printf("��� �����մϴ�.\n");
					printf("������ ������ �Է��մϴ�.\n");
					printf("1. �̸� - ");
					scanf("%s", &name[inpf][inpr-1]);
					printf("2. ���� - ");
					scanf("%d", &age[inpf][inpr - 1]);
					printf("3. �ں� - ");
					scanf("%d", &money[inpf][inpr - 1]);
				}
				if (s == 2)
				{
					printf("������ ���� �Է��� ����մϴ�.\n");
				}
			}
			// ��濡 ���� ������ �������
			else
			{
				printf("������ ������ �Է��մϴ�.\n");
				printf("1. �̸� - ");
				scanf("%s", &name[inpf][inpr-1]);
				printf("2. ���� - ");
				scanf("%d", &age[inpf][inpr - 1]);
				printf("3. �ں� - ");
				scanf("%d", &money[inpf][inpr - 1]);
			}
		}
		// �̻糪���� - �̹� ����� ���������� ���� ���� �ʿ�
		if (s == 2)
		{
			printf("�̻縦 �����Ͽ����ϴ�.\n");
			printf("�̻��Ϸ��� �� / ȣ���� �Է��մϴ�.\n");
			printf("�� - ");
			scanf("%d", &inpf);
			printf("ȣ - ");
			scanf("%d", &inpr);
			printf("%d%02dȣ�� �����ϼ̽��ϴ�.\n", inpf, inpr);
			printf("Ȯ���մϱ�? (1. �� // 2. �ƴϿ�) - ");
			scanf("%d", &s);
			switch (s)
			{
			case 1:
			{
				strcpy(name[inpf][inpr-1], noname);
				age[inpf][inpr - 1] = 0;
				money[inpf][inpr - 1] = 0;
				printf("%d%02dȣ�� �̻� ó�� �Ǿ����ϴ�.\n", inpf, inpr);
				break;
			}
			case 2:
			{
				printf("�̻� ó���� ����Ͽ����ϴ�.\n");
			}
			}
		}
		if (s == 3)
		{
			printf("���� ���α׷��� �����մϴ�.\n");
			return 0;
		}
	}
}
	

