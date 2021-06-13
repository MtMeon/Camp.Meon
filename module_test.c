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
	int p1n, p2n, p1m, p2m, p1b, p2b, p1d[10][2], p2d[10][2], p1r[10] = { 0, }, p2r[10] = { 0, }, p1c[10] = { 0, }, p2c[10] = { 0, }, score[10][2] = { {0,} }, n[10];
	int s, b, t, br = 0, bs = 0, cn=0;
	int dice;
	srand((unsigned)time(NULL));
	char inputd[7], d[12][7] = { "1","2","3","4","5","6","7","8","9","0","굴려","굴린다" }, win[10][2][3];

	// 제목
	printf("== 주사위 게임로 숫자 맞추기 == \n");
	// 최초 소지금 입력
	printf("플레이어1의 현재 소지금을 입력하세요 -");
	scanf("%d", &p1m);
	printf("플레이어2의 현재 소지금을 입력하세요 -");
	scanf("%d", &p2m);
	printf("플레이어1의 소지금 - %d 원\n", p1m);
	printf("플레이어2의 소지금 - %d 원\n", p2m);
	// 게임 시작
	for (int t = 10; t > 0;)
	{
		//숫자 결정
		if (t != 10)
		{
			printf("이전 턴에서 승패가 결정났기 때문에 맞출 숫자를 재지정합니다.\n");
		}
		printf("각 플레이어는 1 ~ 12 까지의 숫자 중에서 하나를 입력합니다.\n");
		// 숫자입력 - 플레이어1
		do
		{
			printf("\n< < 숫자입력 '플레이어1' 순서 > >\n");
			printf("플레이어1 숫자 입력 - ");
			scanf("%d", &p1n);
			if (p1n > 12)
			{
				printf("현재 입력된 숫자는 %d 입니다. 범위내 숫자로 다시 입력합니다.\n", p1n);
			}
		} while (p1n > 12);
		// 숫자입력 - 플레이어2
		do
		{
			printf("\n< < 숫자입력 '플레이어2' 순서 > >\n");
			printf("플레이어2 숫자 선택 - ");
			scanf("%d", &p2n);
			if (p2n > 12)
			{
				printf("현재 입력된 숫자는 %d 입니다. 범위내 숫자로 다시 입력합니다.\n", p2n);
			}
		} while (p2n > 12);
		printf("\n플레이어1 숫자 입력 결과 - %d\n", p1n);
		printf("플레이어2 숫자 입력 결과 - %d\n\n", p2n);
		// 맞춰야 할 숫자 결정
		n[10-t] = (p1n + p2n) / 2;
		printf("플레이어간 숫자를 통해 결정된 숫자는 %d 입니다.\n", n[10-t]);
		// 현재 턴 알림
		printf("현재 %d턴 을 진행하겠습니다. 잔여 턴은 %d 턴 입니다.", 11 - t, t);
		// 배팅금액 설정
		printf("이번 턴에 대한 배팅금을 정하겠습니다.\n");
		// 배팅 - 플레이어1
		printf("\n< < 배팅금 입력 '플레이어1' 순서 > >\n");
		printf("플레이어1의 현재 소지금 - %d\n",p1m);
		printf("플레이어1의 배팅금액을 입력하세요 - ");
		scanf("%d", &p1b);
		// 배팅 - 플레이어2
		printf("\n< < 배팅금 입력 '플레이어2' 순서 > >\n");
		printf("플레이어2의 현재 소지금 - %d\n",p2m);
		printf("플레이어2의 배팅금액을 입력하세요 - ");
		scanf("%d", &p2b);
		// 배팅금 결정
		printf("\n< < 배팅금 결정 순서 > >\n");
		do
		{
			if (bs == 1)
			{
				printf("배팅금에 모든 플레이어가 동의하지 않아 재지정합니다.");
			}
			printf("플레이어1이 입력한 배팅금 - %d 원\n", p1b);
			printf("플레이어2가 입력한 배팅금 - %d 원\n", p2b);
			printf("\n배팅 금액은 각 플레이어의 배팅금액의 중간값으로 지정됩니다.\n");
			printf("설정된 배팅금은 %d 원 입니다.\n", (p1b + p2b) / 2);
			printf("\n< < 승패결정 후 예상 결과 > >\n");
			printf("(플레이어1 승리시)\n");
			printf("플레이어1 소지금 - %d 원 // 플레이어2 소지금 - %d 원\n", (p1b + p2b) / 2 + p1m, -(p1b + p2b) / 2 + p2m);
			printf("(플레이어2 승리시)\n");
			printf("플레이어1 소지금 - %d 원 // 플레이어2 소지금 - %d 원\n", -(p1b + p2b) / 2 + p1m, (p1b + p2b) / 2 + p2m);
			printf("\n플레이어1 계속 진행하겠습니까? (1.계속 진행 // 2.배팅금 재지정) - ");
			scanf("%d", &s);
			if (s == 1)
			{
				printf("플레이어1 - 계속 진행을 선택하였습니다.\n");
				bs = bs + 1;
			}
			if (s == 2)
			{
				printf("플레이어1 - 배팅금 재지정을 선택하였습니다.\n");
				bs = 1;
			}
			printf("플레이어2 계속 진행하겠습니까? (1.계속 진행 // 2.배팅금 재지정) - ");
			scanf("%d", &s);
			if (s == 1)
			{
				printf("플레이어2 - 계속 진행을 선택하였습니다.\n");
				bs = bs + 1;
			}
			if (s == 2)
			{
				printf("플레이어2 - 배팅금 재지정을 선택하였습니다.\n");
				bs = 1;
			}
		} while (bs < 2);
		br = (p1b + p2b) / 2 + br;
		printf("모든 플레이어가 배팅금에 동의하였습니다. 현재 배팅금액은 %d 원 입니다.\n", br);
		// 주사위 굴리기
		do
		{
			// 주사위 굴리기 안내
			printf("주사위를 굴립니다. 1회씩 번갈아가며 굴리며 각자 총 2회를 굴리면 턴이 넘어갑니다.\n");
			printf("주사위를 굴리는 방법은 입력창에 0 ~ 9까지 숫자 / 굴린다 / 굴려 셋 중 하나만 입력하면 됩니다.\n");
			printf("(참고. 여기서 입력되는 숫자는 주사위값에 영향을 주지 않습니다.)\n");
			// 플레이어별 주사위 굴리기
			for (int c = 0; c < 2;)
			{
				for (int p = 0; p < 2;)
				{
					printf("플레이어%d 주사위 굴리기(%d 턴 %d차) - ", p + 1, 11 - t, c + 1);
					scanf("%s", &inputd);
					if (strcmp(d, inputd) == 0)
					{
						printf("\n...주사위가 굴러갑니다...\n");
						printf("\n...주사위가 멈췄습니다...\n");
						printf("주사위에서 보이는 숫자 - ");
						for (int i = 0; i < 1; i++)
						{
							dice = rand() % 5 + 1;
							printf("%d\n", dice);
						}
						if (p == 0)
						{
							p1d[10 - t][c] = dice;
							printf("플레이어%d 주사위 %d 턴 %d차 결과 - %d\n", p + 1, 11 - t, c + 1, dice);
						}
						if (p == 1)
						{
							p2d[10 - t][c] = dice;
							printf("플레이어%d 주사위 %d 턴 %d차 결과 - %d\n", p + 1, 11 - t, c + 1, dice);
						}
						p = p + 1;
					}
					else
					{
						printf("주사위 굴리는 명령을 다시 확인하고 재입력하세요.\n");
					}
				}
				c = c + 1;
			}
			// 주사위 확인
			for (int i = 0; i < 2; i++)
			{
				p1r[10 - t] = p1r[10 - t] + p1d[10 - t][i];
				p2r[10 - t] = p2r[10 - t] + p2d[10 - t][i];
			}
			// 결과확인
			printf("\n< < 결 과 확 인 > >\n");
			printf("플레이어1의 %d 턴 주사위 합 - %d\n", 11 - t, p1r[10 - t]);
			printf("플레이어2의 %d 턴 주사위 합 - %d\n", 11 - t, p2r[10 - t]);
			printf("맞춰야하는 숫자 %d\n", n);
			p1c[10 - t] = n[10 - t] - p1r[10 - t];
			p2c[10 - t] = n[10 - t] - p2r[10 - t];
			// 결과 범위 간소화를 위한 음수 조정
			if (p1c[10 - t] < 0)
			{
				p1c[10 - t] = p1c[10 - t] * -1;
			}
			if (p2c[10 - t] < 0)
			{
				p2c[10 - t] = p2c[10 - t] * -1;
			}
			printf("플레이어1의 최종결과 - ");
			printf("맞춰야 할 숫자와의 차이 %d\n", p1c[10 - t]);
			printf("플레이어2의 최종결과 - ");
			printf("맞춰야 할 숫자와의 차이 %d\n", p2c[10 - t]);
			printf("승패결과 - ");
			// 둘다 오차범위이내, 숫자 바꿔야함
			if (p1c[10 - t] < 2 && p2c[10 - t] < 2)
			{
				printf("모든 플레이어가 오차범위(+/- 2)이내 입니다.\n");
				printf("따라서 보다 차이가 적은 플레이어가 승리하는 것으로 합니다.\n");
				//플레이어1 승리
				if (p1c[10 - t] < p2c[10 - t])
				{
					printf("이번 %d 턴은 플레이어1 승리\n", 11 - t);
					score[10 - t][0] = 1;
					strcpy(win[10 - t][0], "승");
				}
				//플레이어2 승리
				else if (p2c[10 - t] < p1c[10 - t])
				{
					printf("이번 %d 턴은 플레이어2 승리\n", 11 - t);
					score[10 - t][1] = 1;
					strcpy(win[10 - t][1], "승");
				}
				// 무승부
				else
				{
					if (p1c[10 - t] == 0 && p2c[10 - t] == 0)
					{
						printf("모든 플레이어가 맞춰야 할 숫자가 일치하므로 무승부입니다.\n");
					}
					printf("모든 플레이어의 차이가 동일하여 무승부입니다.\n");
					printf("숫자는 맞췄으므로 숫자 설정부터 다시 시작합니다.\n");
				}
				cn = 1;
			}
			// 둘 중 하나만 오차범위 이상, 숫자 바꿔야함
			else if (p1c[10 - t] < 2 || p2c[10 - t] < 2)
			{
				if (p1c[10 - t] < p2c[10 - t])
				{
					printf("이번 %d 턴은 플레이어1 승리\n", 11 - t);
					score[10 - t][0] = 1;
					strcpy(win[10 - t][0], "승");
				}
				//플레이어2 승리
				else if (p2c[10 - t] < p1c[10 - t])
				{
					printf("이번 %d 턴은 플레이어2 승리\n", 11 - t);
					score[10 - t][1] = 1;
					strcpy(win[10 - t][1], "승");
				}
				// 무승부
				else
				{
					printf("모든 플레이어의 차이가 동일하여 무승부입니다.\n");
					printf("숫자는 맞췄으므로 숫자 설정부터 다시 시작합니다.\n");
				}
				cn = 1;
			}
			// 둘 다 오차범위 밖, 숫자 변경 필요없음
			else
			{
				if (p1c[10 - t] < p2c[10 - t])
				{
					printf("이번 %d 턴은 플레이어1 승리\n", 11 - t);
					score[10 - t][0] = 1;
					strcpy(win[10 - t][0], "승");
				}
				//플레이어2 승리
				else if (p2c[10 - t] < p1c[10 - t])
				{
					printf("이번 %d 턴은 플레이어2 승리\n", 11 - t);
					score[10 - t][1] = 1;
					strcpy(win[10 - t][1], "승");
				}
				// 무승부
				else
				{
					printf("모든 플레이어의 차이가 동일하여 무승부입니다.\n");
				}
			}
			// 승패결과에 따른 정산
			printf("\n< < 배팅금 정산 > >\n");
			printf("이제 승패결과에 따라 배팅금을 정산하겠습니다.\n");
			printf("결정된 배팅금 %d 원 입니다.\n", br);
			printf("이번 %d 턴의 승리자는 ", 11 - t);
			if (score[10-t][0] > 0)
			{
				printf("플레이어1 승리입니다.\n");
				printf("[[정 산 예 정]]\n");
				printf("플레이어1 정산 후 - %d 원\n", p1m + br);
				printf("플레이어2 정산 후 - %d 원\n", p2m - br);
			}
			else if (score[10 - t][1] > 0)
			{
				printf("플레이어2 승리입니다.\n");
				printf("[[정 산 예 정]]\n");
				printf("플레이어1 정산 후 - %d 원", p1m + br);
				printf("플레이어2 정산 후 - %d 원", p2m - br);
			}
			else
			{
				printf("무승부가 되어 정산 내역이 없습니다.\n");
			}
			// 이후 진행 여부 확인
			printf("계속 진행하겠습니까? (1.예 // 2. 결과표 확인 및 종료) - ");
			scanf("%d", &s);
			if (s == 1)
			{
				printf("정산 확정 후 계속 진행합니다.\n");
				// 정산, 돈 부족시 빌리기, 정산 완료 후 턴 증가, 10턴 정산 후 동점시 연장전 진행여부, 턴별 배팅금
			}
			if (s == 2)
			{
				printf("지금까지의 결과표를 확인합니다.\n");
				cn = 1;
			}
		}while (cn == 0);
		//결과표
	}
}
	

