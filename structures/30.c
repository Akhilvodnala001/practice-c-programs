#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum Suit
{
  HEARTS,
  DIAMONDS,
  CLUBS,
  SPADES
};
struct card
{
  enum Suit suit;
  int rank;
};
struct card getRandomcard()
{
  struct card c;
  c.suit = rand() % 4;
  c.rank = (rand() % 13) + 1;
  return c;
}
void printrandomcard(struct card c)
{
  char *suits[] = {"HEARTS","DIAMONDS","CLUBS","SPADES"};
  char *rank[] = {"Ace","2","3","4","5","6","7","8","Jack","Queen","King"};
  printf("Card: %s of %s\n",rank[c.rank-1],suits[c.suit]);
}
int main()
{
  srand(time(0));
  struct card getrandomcard = getRandomcard();
  printrandomcard(getrandomcard);
}
