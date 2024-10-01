#include <stdio.h> //Input Output Streams
#include <string.h>//Access to strings
#include <stdlib.h>//QSort function

struct playerCharacter {
    char nameVar[50];
    char classVar[50];
    int levelVar;
    int currentXP;
    int currentGold;
    int strengthVar;
    int dexterityVar;
    int constitutionVar;
    int wisdomVar;
    int intelligenceVar;
    int charismaVar;
};

int compareByLevel(const void* a, const void* b)
{
    return ((struct playerCharacter*)a)->levelVar
        - ((struct playerCharacter*)b)->levelVar;
}

int main()
{
    struct playerCharacter charactersStruct[] = { 
         //Name   Class    LVL XP      Gold Str Dex Con Wis Int Cha
        { "Adam", "Druid", 20, 100000, 10, 10, 10, 10, 10, 10, 10 },
        { "David", "Wizard", 15, 200000, 10, 10, 10, 10, 10, 10, 10 },
        { "Sam", "Sorcerer", 19, 111000, 10, 10, 10, 10, 10, 10, 10 },
        { "George", "Rogue", 14, 600000, 10, 10, 10, 10, 10, 10, 10 },
        { "Michael", "Fighter", 10, 500000, 10, 10, 10, 10, 10, 10, 10 },
        { "Seth", "Barbarian", 11, 900000, 10, 10, 10, 10, 10, 10, 10 },
        { "Daniel", "Paladin", 17, 110000, 10, 10, 10, 10, 10, 10, 10 },
        { "Justin", "Bard", 12, 400000, 10, 10, 10, 10, 10, 10, 10 },
        { "Roger", "Monk", 16, 800000, 10, 10, 10, 10, 10, 10, 10 },
        { "Leaf", "Druid", 13, 700000, 10, 10, 10, 10, 10, 10, 10 },
        { "Dude", "Wizard", 18, 300000, 10, 10, 10, 10, 10, 10, 10 } };

    int n = sizeof(charactersStruct) / sizeof(charactersStruct[0]);

    qsort(charactersStruct, n, sizeof(struct playerCharacter), compareByLevel);

    printf("Sorted array based on level:\n");
    for (int i = 0; i < n; i++) {
        printf("%-10s , %-10s, %-3d, %-10d, %-3d, %-3d, %-3d, %-3d, %-3d, %-3d, %-3d\n", 
            charactersStruct[i].nameVar,
            charactersStruct[i].classVar, charactersStruct[i].levelVar, 
            charactersStruct[i].currentXP, charactersStruct[i].currentGold,
            charactersStruct[i].strengthVar, charactersStruct[i].dexterityVar,
            charactersStruct[i].constitutionVar, charactersStruct[i].wisdomVar,
            charactersStruct[i].intelligenceVar, charactersStruct[i].charismaVar);
    }
    return 0;
}