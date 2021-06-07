#include <stdio.h>


/*
	int f = 0, r = 0, inpf, inpr, s;
	int age[100][100] = { {0, } }, money[100][100] = { {0, } };

	printf("= 아파트 입주상태관리 프로그램 = \n");
	printf("현재 아파트 기초 정보를 입력합니다.\n");
	printf("현재 아파트 층 수를 입력하세요 - ");
	scanf("%d", &f);
	printf("층별 호실 수를 입력하세요 - ");
	scanf("%d", &r);
	printf("아파트는 총 %d 층이며 층별 %d 개 호실을 가지고 있습니다.\n", f, r);
	while (1)
	{
		printf("\n[ [ 현재 입주상태 ] ]\n");
		for (int a = f; a > 0; a--)
		{
			for (int p = 0; p < r; p++)
			{
				printf("-----------------------------");
			}
			printf("\n");
			for (int b = 0; b < r; b++)
			{
				printf("| [%d%02d호] 나이 : %d 자본 : %d |", a, b+1, age[a][b], money[a][b]);
			}
			printf("\n");
		}
		for (int p = 0; p < r; p++)
		{
			printf("----------------------------");
		}
		printf("\n아래 기능 중 선택하세요\n");
		printf("1. 입주 // 2. 이사 // 3. 종료\n");
		printf("선택 - ");
		scanf("%d", &s);
		// 입주선택
		if (s == 1)
		{
			printf("입주를 선택하였습니다.\n");
			printf("입주하려는 층 / 호 입력합니다.\n");
		층:
			printf("층 - ");
			scanf("%d", &inpf);
			// 층 입력값이 기준값 초과시
			if (inpf > f)
			{
				printf("아파트는 %d 층입니다. 확인 후 입력하여 주세요.(현재 입력 숫자 : %d )\n", f, inpf);
				goto 층;
			}
		호:
			printf("호 - ");
			scanf("%d", &inpr);
			// 호 입력값이 기준값 초과시
			if (inpr > r)
			{
				printf("아파트는 층별 %d 호까지 입니다. 확인 후 입력하여 주세요.(현재 입력 숫자 : %d )\n", r, inpr);
				goto 호;
			}
			// 층, 호 입력값이 범위이내(정상)
			printf("%d%02d호를 선택하셨습니다\n", inpf, inpr);
			// 기존 등록된 입주자 정보가 있을 경우
			if (age[inpf][inpr-1] > 0)
			{
				printf("해당 호는 등록된 입주자 정보가 있는데 계속합니까? (1.예 / 2.아니오) - ");
				scanf("%d", &s);
				if (s == 1)
				{
					printf("계속 진행합니다.\n");
					printf("입주자 정보를 입력합니다.\n");
					printf("1. 나이 - ");
					scanf("%d", &age[inpf][inpr-1]);
					printf("2. 자본 - ");
					scanf("%d", &money[inpf][inpr-1]);
				}
				if (s == 2)
				{
					printf("입주자 정보 입력을 취소합니다.\n");
				}
			}
			// 빈방에 대한 입주자 정보등록
			else
			{
				printf("입주자 정보를 입력합니다.\n");
				printf("1. 나이 - ");
				scanf("%d", &age[inpf][inpr-1]);
				printf("2. 자본 - ");
				scanf("%d", &money[inpf][inpr-1]);
			}
		}
		// 이사나갈때 - 이미 빈방을 선택했을때 별도 과정 필요
		if (s == 2)
		{
			printf("이사를 선택하였습니다.\n");
			printf("이사하려는 층 / 호수를 입력합니다.\n");
			printf("층 - ");
			scanf("%d", &inpf);
			printf("호 - ");
			scanf("%d", &inpr);
			printf("%d%02d호를 선택하셨습니다.\n", inpf, inpr);
			printf("확실합니까? (1. 예 // 2. 아니오) - ");
			scanf("%d", &s);
			switch (s)
			{
				case 1:
				{
					age[inpf][inpr-1] = 0;
					money[inpf][inpr-1] = 0;
					printf("%d%02d호는 이사 처리 되었습니다.\n", inpf, inpr);
					break;
				}
				case 2:
				{
					printf("이사 처리를 취소하였습니다.\n");
				}
			}
		}
		if (s == 3)
		{
			printf("관리 프로그램을 종료합니다.\n");
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

	printf("= 아파트 입주상태관리 프로그램 = \n");
	printf("현재 아파트 기초 정보를 입력합니다.\n");
	printf("현재 아파트 층 수를 입력하세요 - ");
	scanf("%d", &f);
	printf("층별 호실 수를 입력하세요 - ");
	scanf("%d", &r);
	printf("아파트는 총 %d 층이며 층별 %d 개 호실을 가지고 있습니다.\n", f, r);
	while (1)
	{
		printf("\n[ [ 현재 입주상태 ] ]\n");
		for (int a = f; a > 0; a--)
		{
			for (int p = 0; p < r; p++)
			{
				printf("-----------------------------");
			}
			printf("\n");
			for (int b = 0; b < r; b++)
			{
				printf("| [%d%02d호] 이름 : %s / 나이 : %d / 자본 : %d |", a, b + 1, name[a][b],age[a][b], money[a][b]);
			}
			printf("\n");
		}
		for (int p = 0; p < r; p++)
		{
			printf("----------------------------");
		}
		printf("\n아래 기능 중 선택하세요\n");
		printf("1. 입주 // 2. 이사 // 3. 종료\n");
		printf("선택 - ");
		scanf("%d", &s);
		// 입주선택
		if (s == 1)
		{
			printf("입주를 선택하였습니다.\n");
			printf("입주하려는 층 / 호 입력합니다.\n");
		층:
			printf("층 - ");
			scanf("%d", &inpf);
			// 층 입력값이 기준값 초과시
			if (inpf > f)
			{
				printf("아파트는 %d 층입니다. 확인 후 입력하여 주세요.(현재 입력 숫자 : %d )\n", f, inpf);
				goto 층;
			}
		호:
			printf("호 - ");
			scanf("%d", &inpr);
			// 호 입력값이 기준값 초과시
			if (inpr > r)
			{
				printf("아파트는 층별 %d 호까지 입니다. 확인 후 입력하여 주세요.(현재 입력 숫자 : %d )\n", r, inpr);
				goto 호;
			}
			// 층, 호 입력값이 범위이내(정상)
			printf("%d%02d호를 선택하셨습니다\n", inpf, inpr);
			// 기존 등록된 입주자 정보가 있을 경우
			if (age[inpf][inpr-1] > 0)
			{
				printf("해당 호는 등록된 입주자 정보가 있는데 계속합니까? (1.예 / 2.아니오) - ");
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
					printf("계속 진행합니다.\n");
					printf("입주자 정보를 입력합니다.\n");
					printf("1. 이름 - ");
					scanf("%s", &name[inpf][inpr-1]);
					printf("2. 나이 - ");
					scanf("%d", &age[inpf][inpr - 1]);
					printf("3. 자본 - ");
					scanf("%d", &money[inpf][inpr - 1]);
				}
				if (s == 2)
				{
					printf("입주자 정보 입력을 취소합니다.\n");
				}
			}
			// 빈방에 대한 입주자 정보등록
			else
			{
				printf("입주자 정보를 입력합니다.\n");
				printf("1. 이름 - ");
				scanf("%s", &name[inpf][inpr-1]);
				printf("2. 나이 - ");
				scanf("%d", &age[inpf][inpr - 1]);
				printf("3. 자본 - ");
				scanf("%d", &money[inpf][inpr - 1]);
			}
		}
		// 이사나갈때 - 이미 빈방을 선택했을때 별도 과정 필요
		if (s == 2)
		{
			printf("이사를 선택하였습니다.\n");
			printf("이사하려는 층 / 호수를 입력합니다.\n");
			printf("층 - ");
			scanf("%d", &inpf);
			printf("호 - ");
			scanf("%d", &inpr);
			printf("%d%02d호를 선택하셨습니다.\n", inpf, inpr);
			printf("확실합니까? (1. 예 // 2. 아니오) - ");
			scanf("%d", &s);
			switch (s)
			{
			case 1:
			{
				strcpy(name[inpf][inpr-1], noname);
				age[inpf][inpr - 1] = 0;
				money[inpf][inpr - 1] = 0;
				printf("%d%02d호는 이사 처리 되었습니다.\n", inpf, inpr);
				break;
			}
			case 2:
			{
				printf("이사 처리를 취소하였습니다.\n");
			}
			}
		}
		if (s == 3)
		{
			printf("관리 프로그램을 종료합니다.\n");
			return 0;
		}
	}
}
	

