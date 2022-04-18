#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
//#include <stdbool.h>

int functionAddEasy(char * yourName)
{
    int answer , trial , numberA , numberB; char * Input = malloc(3);
    char repeat = 'y'; unsigned int Score = 0;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        numberA = 64 * (rand() / (RAND_MAX + 2.1));
        numberB = 32 * (rand() / (RAND_MAX + 2.4));

        printf("%d + %d = ",numberA,numberB);
        scanf("%s",Input); answer = atoi(Input);

        if (answer == numberA + numberB)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName); Score = Score + 4;
        }
        else
        {
            while (numberA + numberB != answer && trial > 0)
            {

                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d + %d = ",numberA,numberB);
                scanf("%s",Input); answer = atoi(Input);
                trial = trial - 1;
            }
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberA + numberB);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionAddHard(char * yourName)
{
    float answer , numberC , numberD; char * Input = malloc(8);
    char repeat = 'y'; unsigned int Score = 0; int trial;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberC = (rand() / (RAND_MAX + 2.0)) * 4098;
        numberD = (rand() / (RAND_MAX + 2.0)) * 4098;

        while (numberC == numberD || numberC == 0 || numberD == 0)
        {
            numberC = (rand() / (RAND_MAX + 8.0)) * 4098;
            numberD = (rand() / (RAND_MAX + 8.0)) * 4098;
        }

        printf("%f + %f = ",numberC,numberD);
        scanf("%s",Input); answer = (float)(atof(Input));

        if (answer == numberD + numberC)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName); Score = Score + 20;
        }
        else
        {
            while (numberC + numberD != answer && trial > 0)
            {
            printf("You Are Wrong %s! 💩 \n", yourName);
            printf("Try Again, You Have %d Tries Left \n", trial);
            printf("%f + %f = ",numberC,numberD);
            scanf("%s",Input); answer = (float)(atof(Input));
            trial = trial - 1;
            //exit(1);
            }
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName); Score++;
                printf("The Answer Is %f \n", numberC + numberD);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 5;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionsubtractEasy(char * yourName)
{
    int answer , trial , numberE , numberF; char * Input = malloc(3);
    char repeat = 'y'; unsigned int Score = 0;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        numberE = (rand() / (RAND_MAX + 1.0)) * 27;
        numberF = (rand() / (RAND_MAX + 1.0)) * 19;

        printf("%d - %d = ", numberE , numberF);
        scanf("%s", Input); answer = atoi(Input);

        if (answer == numberE - numberF)
        {
            printf("🎊 You Are Right %s! 🎊 \n", yourName); Score = Score + 4;
        }
        else
        {
            while (numberE - numberF != answer && trial > 0)
            {
                printf("You Are Wrong %s! 😶 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d - %d = ", numberE , numberF);
                scanf("%s", Input); answer = atoi(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberE - numberF);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;

}

int functionsubtractHard(char * yourName)
{
    float answer , numberG , numberH; char * Input = malloc(8);
    char repeat = 'y'; unsigned int Score = 0; int trial;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberG = (rand() / (RAND_MAX + 2.0)) * 4098;
        numberH = (rand() / (RAND_MAX + 2.0)) * 4098;

        while (numberG == numberH || numberG == 0 || numberH == 0)
        {
            numberG = (rand() / (RAND_MAX + 4.0)) * 4098;
            numberH = (rand() / (RAND_MAX + 4.0)) * 4098;
        }

        printf("%f - %f = ", numberH ,numberG);
        scanf("%s", Input); answer = (float)(atof(Input));

        if (answer == numberH - numberG)
        {
            printf("🎊 You Are Right %s! 🎊 \n", yourName); Score = Score + 20;
        }
        else
        {
            while (numberH - numberG != answer && trial > 0)
            {
                printf("You Are Wrong %s! 😑 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f - %f = ", numberH , numberG);
                scanf("%s", Input); answer = (float)(atof(Input));
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName); Score++;
                printf("The Answer Is %f \n", numberH - numberG);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 5;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;

}

int functionMultplyEasy(char * yourName)
{
    int answer , trial , numberI , numberJ; char * Input = malloc(3);

    char repeat = 'y'; unsigned int Score = 0;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        numberI = (rand() / (RAND_MAX + 1.0)) * 21;
        numberJ = (rand() / (RAND_MAX + 1.0)) * 12;

        printf("%d * %d = ", numberI , numberJ);
        scanf("%s", Input); answer = atoi(Input);

        if (answer == numberJ * numberI)
        {
            printf("🎊 You Are Right %s! 🎉 \n", yourName); Score = Score + 4;
        }
            else
        {
            while (numberJ * numberI == answer || trial > 0)
            {
                printf("You Are Wrong %s! 😂 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d * %d = ", numberI , numberJ);
                scanf("%s", Input); answer = atoi(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberJ * numberI);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionMultplyHard(char * yourName)
{
    float answer , numberK , numberL; char * Input = malloc(8); int trial;

    char repeat = 'y'; unsigned int Score = 0;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberK = (rand() / (RAND_MAX + 1.0)) * 512;
        numberL = (rand() / (RAND_MAX + 1.0)) * 512;

        while (numberK == 1 || numberL == 1 || numberK == 2 || numberL == 2 || numberK * numberL < 131.072)
        {
            numberK = (rand() / (RAND_MAX + 1.26)) * 512;
            numberL = (rand() / (RAND_MAX + 1.28)) * 512;
        }

        printf("%f * %f = ", numberK , numberL);
        scanf("%s", Input); answer = (float)atof(Input);

        if (answer == numberK * numberL)
        {
            printf("🎉 You Are Right %s! 🎊 \n", yourName); Score = Score + 20;
        }
            else
        {
            while (numberK * numberL != answer && trial > 0)
            {
                printf("You Are Wrong %s! 🤪 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f * %f = ", numberK , numberL);
                scanf("%s", Input); answer = (float)atof(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName); Score++;
                printf("The Answer Is %f \n", numberL * numberK);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 5;
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionDivisionEasy(char * yourName)
{
    float answer , numberM , numberN; char * Input = malloc(8); int trial , AnumberM , AnumberN;
    char repeat = 'y'; unsigned int Score = 0;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        AnumberM = (rand() / (RAND_MAX + 1.0)) * 36;
        AnumberN = (rand() / (RAND_MAX + 1.0)) * 24;

        numberM = (float)AnumberM;
        numberN = (float)AnumberN;

        printf("%d / %d = ", (int) numberM, (int) numberN);
        scanf("%s", Input); answer = (float)atof(Input);

        if (answer == numberM / numberN)
        {
            printf("🎊 You Are Right %s! 🎉 \n", yourName); Score = Score + 4;
        }
            else
        {
            while (numberM / numberN != answer && trial > 0)
            {
                printf("You Are Wrong %s! 😞 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d / %d = ", (int) numberM, (int) numberN);
                scanf("%s", Input); answer = (float)atof(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", numberM / numberN);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;

}

int functionDivisionHard(char * yourName)
{
    float answer , numberO , numberP; char * Input = malloc(8);

    char repeat = 'y'; unsigned int Score = 0; int trial;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberO = (rand() / (RAND_MAX + 3.6)) * 128;
        numberP = (rand() / (RAND_MAX + 3.6)) * 128;

        while (numberO == numberP || numberO == 1 || numberP == 1 || numberO == 0 || numberP == 0)
        {
            numberO = (rand() / (RAND_MAX + 3.6)) * 128;
            numberP = (rand() / (RAND_MAX + 3.6)) * 128;
        }

        printf("%f / %f = ", numberO, numberP);
        scanf("%s", Input); answer = (float)atof(Input);

        if (answer == numberO / numberP)
        {
            printf("🎉 You Are Right %s! 🎊 \n", yourName); Score = Score + 20;
        }
        else
        {
            while (numberO / numberP != answer && trial > 0)
            {
                printf("You Are Wrong %s! 🤯 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f / %f = ", numberO, numberP);
                scanf("%s", Input); answer = (float)atof(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName); Score++;
                printf("The Answer Is %f \n",numberO / numberP);
                break;

            default:
                printf("You Passed %s! \n", yourName); Score = Score + 6;
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;

}

int functionPowerEasy(char * yourName)
{
    int answer , trial , numberQ , numberR;
    char repeat = 'y'; unsigned int Score = 0; char * Input = malloc(8);

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        numberQ = 8 * (rand() / (RAND_MAX + 1.0));
        numberR = 8 * (rand() / (RAND_MAX + 1.0));

        while (numberR == 0 || numberQ == 0)
        {
            numberQ = 8 * (rand() / (RAND_MAX + 1.0));
            numberR = 8 * (rand() / (RAND_MAX + 1.0));
        }

        printf("%d ^ %d = " , numberQ , numberR);
        scanf("%s",Input); answer = atoi(Input);

        if (answer == pow( numberQ , numberR ))
        {
            printf("🤓 You Are Right %s! 🤓 \n", yourName); Score = Score + 4;
        }

        else
        {
            while (answer != pow( numberQ , numberR ) && trial > 0)
            {
                printf("You Are Wrong %s! 🧐 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d ^ %d = ", numberQ, numberR);
                scanf("%s",Input); answer = atoi(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", pow( numberQ , numberR ));
                break;
            default:
                printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionPowerHard(char * yourName)
{
    float answer , numberS , numberT; char * Input = malloc(32);
    char repeat = 'y'; unsigned int Score = 0; int trial;

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberS = 32 * (rand() / (RAND_MAX + 3.2));
        numberT = 32 * (rand() / (RAND_MAX + 3.2));

        while (pow(numberS , numberT) < 59.049)
        {
            numberS = 32 * (rand() / (RAND_MAX + 4.6));
            numberT = 32 * (rand() / (RAND_MAX + 4.6));
        }

        printf("%f ^ %f = " , numberS , numberT);
        scanf("%s", Input); answer = (float)atof(Input);

        if (pow(numberS , numberT) == answer)
        {
            printf("🤨 You Are Right %s! 🤔 \n", yourName); Score = Score + 20;
        }
        else
        {
            while (answer != pow(numberS,numberT) && trial > 0)
            {
                printf("You Are Wrong %s! 🤮 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f ^ %f = ", numberS, numberT);
                scanf("%s", Input); answer = (float)atof(Input);
                trial = trial - 1;
            }
            switch (trial)
            {
            case 0:
                printf("You Failed! \n"); Score++;
                printf("The Answer is %f \n",pow(numberS,numberT));
                break;

            default:
                printf("You Passed! \n"); Score = Score + 5;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionPercentageEasy(char * yourName)
{
    float answer , numberU , numberV , answerNumUOfNumV; int AnumberU , AnumberV , trial;
    char repeat = 'y'; unsigned int Score = 0; char * Input = malloc(16);

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 6;

        AnumberU = 64 * (rand() / (RAND_MAX + 8.4)); numberU = (float)AnumberU;
        AnumberV = 86 * (rand() / (RAND_MAX + 5.6)); numberV = (float)AnumberV;
        
        answerNumUOfNumV = (numberU / 100) * numberV;

        printf("%f%% of %f = ",numberV,numberU);
        scanf("%s",Input); answer = (float)atof(Input);

        if (answer == answerNumUOfNumV)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName); Score = Score + 4;
        }
        else
        {
            while (answer != answerNumUOfNumV && trial > 0)
            {
                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f%% of %f = ",numberV,numberU);
                scanf("%s",Input); answer = (float)atof(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
                case 0:
                    printf("You Failed %s! \n", yourName);
                    printf("The Answer Is %f \n", answerNumUOfNumV);
                break;

                default:
                    printf("You Passed %s! \n", yourName); Score = Score + 2;
                break;
            }
        }
        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}

int functionPercentageHard(char * yourName)
{
    float answer , numberW , numberX , answerNumWOfNumX; int trial;
    char repeat = 'y'; unsigned int Score = 0; char * Input = malloc(16);

    while (repeat == 'y' || repeat == 'Y')
    {
        trial = 3;

        numberW = 4098 * (rand() / (RAND_MAX + 8.4));
        numberX = 128 * (rand() / (RAND_MAX + 5.6));

        printf("%f%% of %f = ",numberW,numberX);
        scanf("%s",Input); answer = (float)atof(Input);

        answerNumWOfNumX = (numberW / 100) * numberX;

        if (answer == answerNumWOfNumX)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName); Score = Score + 20;
        }
        else
        {
            while (answer != answerNumWOfNumX && trial > 0)
            {
                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f%% of %f = ",numberW,numberX);
                scanf("%s",Input); answer = (float)atof(Input);
                trial = trial - 1;
            }

            switch (trial)
            {
                case 0:
                    printf("You Failed %s! \n", yourName); Score++;
                    printf("The Answer Is %f \n", answerNumWOfNumX);
                break;

                default:
                    printf("You Passed %s! \n", yourName); Score = Score + 5;
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("'Y' or 'y' for Yes & anything else for No ");
        scanf(" %c", &repeat);
        

    }
    free(Input);
    printf("Okay, You have Scored %d Points In This Math. \n",Score); return Score;
}
int main()
{
    unsigned long long TotalScore = 0;
    unsigned long long EachScore[] = { 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 , 0 };
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);
    srand(time(NULL));
    //int CheckAccrossYourName;
    char * yourName = malloc(65536);
    int Types_Of_Maths_Problem;
    int dificultyLevel;
    int currentDay = aTime->tm_mday;
    int currentMonth = aTime->tm_mon + 1;
    int currentYear = aTime->tm_year + 1900;
    char again = 121;
    char * MyFirstName;
    char * MySecondName;
    int MemoryLocationAccrossMyName;
    int MemoryLocationAccrossYourName = 0;
    int FindMatchAccorssMyNames = 0;
    
    int FoundMatchingName;
    //char * YourFirstName;
    //char * YourLastName;
    
    char SeeYourNameInMemory;
    char * myNames[] = {"Kenway", "Austen", "Kate", "Alex", "Lucy", "Nicky", "Micky", "Edward", "Biden", "Snowden", "Josif", "Linda", "Marry", "Elezabet", "Redington", "John", "Creg", "Conner", "Abraham", "Antony", "Loyyd" , "Tom"};
    int RandomeNumberOne = 21 * (rand() / (RAND_MAX + 2.0));
    int RandomeNumberTwo = 21 * (rand() / (RAND_MAX + 2.0));

    while (RandomeNumberOne == RandomeNumberTwo)
    {
        RandomeNumberOne = 21 * (rand() / (RAND_MAX + 8.9));
        RandomeNumberTwo = 21 * (rand() / (RAND_MAX + 2.5));
    }

    MyFirstName = myNames[RandomeNumberOne];
    MySecondName = myNames[RandomeNumberTwo];

    printf("It's day %d of the Month. Stored in Memory Location %p \n", currentDay, &currentDay);
    printf("It's Month %d of the Year. Stored in Memory Location %p \n", currentMonth, &currentMonth);
    printf("It's Year %d. Stored in Memory Location %p \n", currentYear, &currentYear);
    printf("\n");
    printf("So In MM/DD/YYYY format, The Date The Is %d/%d/%d \n",currentMonth,currentDay,currentYear);
    printf("\n");

    printf("Hello There! My Name Is %s %s, Tell me Your Name " , MyFirstName , MySecondName);
    fgets(yourName, 65536, stdin); yourName[strlen(yourName)-1] = '\0';

    while (strncmp(yourName , "Nigga" , strlen(yourName)) == 0 || strncmp(yourName , "nigga" , strlen(yourName)) == 0)
    {
        printf("That is OFFENSIVE!!! Re-Type You Name ");
        fgets(yourName , 65536 , stdin); yourName[strlen(yourName) - 1] = '\0'; //CheckAccrossYourName = strlen( yourName );
    }
/*
    while ( yourName[CheckAccrossYourName] != 32 || CheckAccrossYourName < 0)
    {
        if ()
        {

        }
    }
*/
    while (FindMatchAccorssMyNames < 20 && FoundMatchingName != 0)
    {
        FoundMatchingName = strncmp(myNames[FindMatchAccorssMyNames] , yourName , strlen(yourName));
        FindMatchAccorssMyNames++;
    }

    if (strncmp(yourName , MyFirstName , strlen(yourName) ) == 0)
    {
        printf("Your Name & My First Name Are The Same. Anyways. \n");
    }
    else if (strncmp(yourName , MySecondName , strlen(yourName) ) == 0)
    {
        printf("Your Name & My Last Name Are The Same. Anyways. \n");
    }
    else if (FoundMatchingName == 0)
    {
        printf("I think I Know! Moving on... \n");
    }
    else
    {
        printf("\n");
    }

    printf("Okay %s, This Is A Math Game. I will Give You an Equation & you will solve it! \n", yourName);
    printf("\nFor Each Type Of Math there will be easy and hard difficulty. \nYou Will Win if you get the answer right the first time. You will pass if you get the answer right after you get it wrong. You will loss if you run out of tries. \n\nEasy will earn you 4 points if you win, 2 points if you pass and 0 points if you loss. \nHard will earn you 20 if you win, 5 points if you pass and 1 if you loss \n");
    printf("Press Enter To Continue"); getchar(); 
    printf("What Kind Of Math Do You Want To Play? Just Type The Number Beside That Represents The Math Game. During Which You Can Type 0 To Exit \n");

    printf("\n");

        while (again == 'y' || again == 'Y')

        {

            printf(" 1 Addition  2 Subtraction  3 Multiplication  4 Division  5 Power  6 Percantage ");
            scanf("%d", &Types_Of_Maths_Problem);

            switch (Types_Of_Maths_Problem)
            {

            case 0:

                printf("It's Okay, You can Come Back Anytime & Run This Program :) \n");
                break;

            case 1:

                printf("Addition it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d", &dificultyLevel);

                switch (dificultyLevel)
                {
                case 1:

                    EachScore[0] = functionAddEasy( yourName );

                    break;

                case 2:

                    EachScore[1] = functionAddHard( yourName );

                    break;

                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);

                    break;
                }
                break;

            case 2:

                printf("Subtraction it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d", &dificultyLevel);
                switch (dificultyLevel)
                {
                case 1:

                    EachScore[2] = functionsubtractEasy( yourName );

                    break;

                case 2:

                    EachScore[3] = functionsubtractHard( yourName );

                    break;

                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);

                    break;
                }
                break;

            case 3:
                printf("Multiplication it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d", &dificultyLevel);
                switch (dificultyLevel)
                {
                case 1:

                    EachScore[4] = functionMultplyEasy( yourName );

                    break;

                case 2:

                    EachScore[5] = functionMultplyHard( yourName );

                    break;

                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);

                    break;
                }

                break;

            case 4:
                printf("Division it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d", &dificultyLevel);
                switch (dificultyLevel)
                {
                case 1:

                    EachScore[6] = functionDivisionEasy( yourName );

                    break;

                case 2:

                    EachScore[7] = functionDivisionHard( yourName );

                    break;

                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);

                    break;
                }

                break;

            case 5:
                printf("Power it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d", &dificultyLevel);
                switch (dificultyLevel)
                {
                case 1:

                    EachScore[8] = functionPowerEasy( yourName );

                    break;
                case 2:

                    EachScore[9] = functionPowerHard( yourName );

                    break;
                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);

                    break;
                }

                break;

            case 6:
                printf("Percantage it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");

                scanf("%d",&dificultyLevel);
                switch (dificultyLevel)
                {
                case 1:

                    EachScore[10] = functionPercentageEasy( yourName );

                    break;

                case 2:

                    EachScore[11] = functionPercentageHard( yourName );

                    break;

                default:

                    printf("Error, Invalid Input!!! ");
                    exit(1);
                    break;
                }

                break;

            default:
                printf("Invalid Input. "); exit(1);
                break;
            }

            printf("Do You Want To Try Again? 'y' or 'Y' for Yes and Anything else for No ");
            scanf(" %c",&again);
        }

    TotalScore = EachScore[0] + EachScore[1] + EachScore[2] + EachScore[3] + EachScore[4] + EachScore[5] + EachScore[6] + EachScore[7] + EachScore[8] + EachScore[9] + EachScore[10] + EachScore[11];

    printf("---------------------------\n");
    printf("| You Have Scored %lld in Add Easy , %lld in Add Hard , %lld in Subtrct Easy , %lld in Subtract Hard \n", EachScore[0] , EachScore[1] , EachScore[2] , EachScore[3]);
    printf("| You Have Scored %lld in Multply Easy , %lld in Multply Hard , %lld in Divide Easy , %lld in Divide Hard \n", EachScore[4] , EachScore[5] , EachScore[6] , EachScore[7]);
    printf("| You Have Scored %lld in Power Easy , %lld in Power Hard , %lld in Percentage Easy , %lld in Percentage Hard \n", EachScore[8] , EachScore[9] , EachScore[10] , EachScore[11]);
    printf("| You Have Scored %lld points in total. \n", TotalScore );
    printf("Do you wany to see how your name looks accross the Memory & how It Is Stored? 'y' or 'Y' for Yes & anything for No ");
    scanf(" %c",&SeeYourNameInMemory);

    switch (SeeYourNameInMemory)
    {
    case 'y':
    printf("This Is How Your Name Looks Accorss Memory. \n");
    printf("\n");

    while (MemoryLocationAccrossYourName != (int)strlen(yourName) )
    {
        if (yourName[MemoryLocationAccrossYourName] == ' ')
        {
            MemoryLocationAccrossYourName++; printf("\n");
        }
        else
        {
            printf("Letter %c for your name %s is stored in Memory Loaction %p \n",yourName[MemoryLocationAccrossYourName],yourName,&yourName[MemoryLocationAccrossYourName]);
            MemoryLocationAccrossYourName++;
        }
    }

    printf("\n");
    break;

    case 'Y':
    printf("This Is How Your Name Looks Accorss Memory. \n");
    printf("\n");

    while (MemoryLocationAccrossYourName != (int)strlen(yourName) )
    {
        if (yourName[MemoryLocationAccrossYourName] == ' ')
        {
            MemoryLocationAccrossYourName++; printf("\n");
        }
        else
        {
            printf("Letter %c for your name %s is stored in Memory Loaction %p \n",yourName[MemoryLocationAccrossYourName],yourName,&yourName[MemoryLocationAccrossYourName]);
            MemoryLocationAccrossYourName++;
        }
    }

    printf("\n");
    break;

    default:
    printf("Okay, ");
    break;
    }

    printf("My Name %s & %s is stored accross Multiple Memory Loaction. \n", MyFirstName , MySecondName);

    printf("\n");
    printf("My Name %s is Stored Accross The Following Memory Loaction \n",MyFirstName);
    MemoryLocationAccrossMyName = 0;
    while (MemoryLocationAccrossMyName != (int)strlen(MyFirstName))
    {
        printf("%c is Stored in Memory Location %p \n" , MyFirstName[MemoryLocationAccrossMyName] , &MyFirstName[MemoryLocationAccrossMyName]);
        MemoryLocationAccrossMyName++;
    }
    printf("\n");
    printf("My Name %s is Stored Accross The Following Memory Loaction \n",MySecondName);
    MemoryLocationAccrossMyName = 0;
    while (MemoryLocationAccrossMyName != (int)strlen(MySecondName))
    {
        printf("%c is Stored in Memory Location %p \n" , MySecondName[MemoryLocationAccrossMyName] , &MySecondName[MemoryLocationAccrossMyName]);
        MemoryLocationAccrossMyName++;
    }
    printf("You Have Rached The End %s! You Can Run This Program Again If You Want! \n" , yourName); free(yourName);
    
    return 0;
}