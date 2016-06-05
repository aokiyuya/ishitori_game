#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int main(void){
	unsigned int userNum, stone = 20;
	int tmp;
	bool gameFlag = 1;
	printf("石取りゲームです。\n一度に三個まで石をとれます。\n残りの石の数は20です\n最後に石をとった人が勝ちです\n数字を入力してEnter:");
	while(gameFlag){
		tmp = scanf("%d", &userNum);
		if(!tmp){
			// scanf のバッファをクリアさせて無限ループを防ぐ
			printf("数値を入力してください:");
			while(getchar() != '\n');
			continue;
		}
		if(!(userNum < 4 && userNum > 0)){
			printf("3以下の自然数を入力してください:");
			continue;
		}
		stone = stone - userNum;
		if(stone <= 0){
			gameFlag = 0;
			printf("you win\n");
			break;
		}else{
			printf("残りの石は%dです\n", stone);
		}
		printf("CPUの番です\n");
		printf("%d個とることにしました\n",stone%4);
		stone = stone - stone%4;
		if(stone <= 0){
			gameFlag = 0;
			printf("you lose\n");
		}else{
			printf("残りの石は%dです:", stone);
		}
	}
	return 0;
}
