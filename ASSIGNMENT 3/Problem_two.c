#include<stdio.h>
#include<string.h>
struct Player
{
    int ball_scores[12] ;
    char player_name[50] ;
    int total_score ;
} ;
int validate_score(int *score)
{
    if((*score)>=0 && (*score)<=6)
    {
        return (*score) ;
    }
    else
    {
        printf("INVALID INPUT, SCORE DISREGARDED!\n") ;
        return 0 ;
    }
}
void play_game(struct Player *player)
{
    player->total_score = 0 ;
    for(int i=0 ; i<12 ; i++)
    {
        printf("ENTER THE SCORE OF %d BALL:",i+1) ;
        scanf("%d",&player->ball_scores[i]) ;
        player->total_score += validate_score(&player->ball_scores[i]) ;
    }
}
void find_winner(struct Player *player1 , struct Player *player2)
{
    if(player1->total_score>player2->total_score)
    {
        printf("PLAYER 1 IS THE WINNER\n") ;
    }
    else if(player2->total_score>player1->total_score)
    {
        printf("PLAYER 2 IS THE WINNER\n") ;
    }
    else
    {
        printf("IT'S A DRAW!\n") ;
    }
}
void display_match_score_board(struct Player *player1 , struct Player *player2)
{
    float average_score = 0 ;
    int i ;
    for(i=0 ; i<12 ; i++)
    {
        printf("FIRST PERSON %d BALL SCORE IS:%d\n",i+1,player1->ball_scores[i]) ;
    }
    average_score = (float)player1->total_score/12 ;
    printf("FIRST PERSON TOTAL SCORE IS:%d\n",player1->total_score) ;
    printf("FIRST PERSON AVEARGE SCORE IS:%.2f\n",average_score) ;
    average_score = 0 ;
    for(i=0 ; i<12 ; i++)
    {
        printf("SECOND PERSON %d BALL SCORE IS:%d\n",i+1,player2->ball_scores[i]) ;
    }
    average_score = (float)player2->total_score/12 ;
    printf("SECOND PERSON TOTAL SCORE IS:%d\n",player2->total_score) ;
    printf("SECOND PERSON AVEARGE SCORE IS:%.2f\n",average_score) ;
}
int main()
{
    struct Player player1 , player2 ;
    printf("ENTER THE NAME OF FIRST PLAYER:") ;
    fgets(player1.player_name,50,stdin) ;
    player1.player_name[strcspn(player1.player_name,"\n")] = '\0' ;
    printf("ENTER THE NAME OF SECOND PLAYER:") ;
    fgets(player2.player_name,50,stdin) ;
    player2.player_name[strcspn(player2.player_name,"\n")] = '\0' ;
    printf("ENTER THE SCORE'S FOR FIRST PLAYER:\n") ;
    play_game(&player1) ;
    printf("ENTER THE SCORE'S FOR SECOND PLAYER:\n") ;
    play_game(&player2) ;
    display_match_score_board(&player1,&player2) ;
    find_winner(&player1,&player2) ;
    return 0 ;
}