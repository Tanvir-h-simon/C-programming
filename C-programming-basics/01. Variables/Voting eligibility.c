#include <stdio.h>
int main()
{
    int Tanvir_age = 23;
    int Israt_age = 21;
    int Mariyam_age = 2;
    int Someone_age = 18;
    int Voting_age = 18;

    printf("Tanvir is eligible for voting: %d\n", Tanvir_age>=Voting_age);
    printf("Israt is eligible for voting: %d\n", Israt_age>=Voting_age);
    printf("Mariyam is eligible for voting: %d\n", Mariyam_age>=Voting_age);
    printf("Someone is eligible for voting: %d", Someone_age>=Voting_age);

    return 0;
}