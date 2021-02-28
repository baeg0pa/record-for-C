/*
 * 액면가를 계산하는 프로그램.
 * 이 코드는 베가스 공개 라이센스를 적용하여 공개합니다.
 * (c)2014 대학 블랙잭 팀.
 */
 
 #include <stdio.h>
 #include <stdlib.h>

 
 int main()
 {
 	char card_name[3];
 	int count = 0;
 	while(card_name[0] != 'X') {
	 	puts("카드 이름을 입력하세요: ");
	 	scanf("%2s", card_name);
	 	int val = 0;
	 	
	 	switch(card_name[0]) {
	 	case 'X':
	 		continue;
	 	case 'K':
	 	case 'Q':
	 	case 'J':
	 		val = 10;
	 		break;
	 	case 'A':
	 		val = 11;
	 		break;
	 	default:
	 		val = atoi(card_name);
	 		if (val<1 || val >11) {
				puts("ERROR");
	 			continue;
	 		}
	 	}
	 	
	 	if (val >= 3 && val <=6)
 			count++;
 		else if (val == 10)
 			count--;
 		printf("현재 카운트: %d\n", count);
	
	}
 	
 	return 0;
 }
