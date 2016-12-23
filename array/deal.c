// Name: deal.c
// deals a random deck of cards

// 程序负责发一副标准纸牌
// 每张标准纸牌都有一个花色
//（梅花♣️ clubs、方块♦️ diamonds、红心♥️ hearts 或黑桃♠️ spades）

// 为了避免两次都拿到同一张牌，需要记录已经选择过的牌
// 用 in_hand 的二维数组，4 row - 13 column 
// 数组中每个元素对应着 52 张纸牌中的一张。

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
	bool in_hand[NUM_SUITS][NUM_RANKS] = {{false}};
	int num_cards, rank, suit;
	const char rank_code[] = {'3', '4', '5',
		'6', '7', '8', '9', 't', 'j', 'q', 'k', 'a', '2'};
	const char suit_code[] = {'c', 'd', 'h', 's'};
	
	srand((unsigned) time(NULL));
	
	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);
	
	printf("Your hand:");
	while (num_cards > 0)
	{
		// picks a random suit
		suit = rand() % NUM_SUITS;
		// picks a random rank
		rank = rand() % NUM_RANKS;
		if (!in_hand[suit][rank])
		{
			in_hand[suit][rank] = true;
			num_cards--;
			printf(" %c%c", rank_code[rank], suit_code[suit]);
		}
	}
	printf("\n");
	
	return 0;
}
