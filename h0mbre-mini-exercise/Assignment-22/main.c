# include <stdio.h>

struct stats {
    int games;
    int points;
} stat_player[];

int main(){
    struct stats *player_stats;

    for (int i = 0; i < 5; i++)
    {
        player_stats = &stat_player[i];
        printf("Enter Player %i's point total: ",i+1);
        scanf("%i",&player_stats->points);
        printf("Enter Player %i's game total: ",i+1);
        scanf("%i",&player_stats->games);
    }

    for (int i = 0; i < 5; i++)
    {
        player_stats = &stat_player[i];
        float average = (float) player_stats->points / player_stats->games;
        printf("Player %i's scoring average was %.2f ppg.\n", i+1, average);
    }
    return 0;
}