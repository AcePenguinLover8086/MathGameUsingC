#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>

void functionAddEasy(char * yourName)
{
    int answerTwo;
    int repeat = 1;
    
    while (repeat == 1)
    {
        int trial = 6;
        
        int numberA = 64 * (rand() / (RAND_MAX + 2.1));
        int numberB = 32 * (rand() / (RAND_MAX + 2.4));

        printf("%d + %d = ",numberA,numberB);
        scanf("%d",&answerTwo);
        
        if (answerTwo == numberA + numberB)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName);
            //
        }
        else
        {
            while (numberA + numberB != answerTwo && trial > 0)
            {
            
                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d + %d = ",numberA,numberB);
                scanf("%d",&answerTwo);
                trial = trial - 1;
            //exit(1);

            }
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberA + numberB);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }
        }
        
        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;
        
    }
    printf("Okay \n");
}

void functionAddHard(char * yourName)
{
    float answerThree;
    int repeat = 1;

    while (repeat == 1)
    {
        int trial = 6;

        float numberC = (rand() / (RAND_MAX + 2.0)) * 4098;
        float numberD = (rand() / (RAND_MAX + 2.0)) * 4098;
        //int numberCAndNumberD = numberC + numberD;
        
        while (numberC == numberD || numberC == 0 || numberD == 0)
        {

        float numberC = (rand() / (RAND_MAX + 8.0)) * 4098;
        float numberD = (rand() / (RAND_MAX + 8.0)) * 4098;
            
        }
        
        printf("%f + %f = ",numberC,numberD);
        scanf("%f",&answerThree);

        if (answerThree == numberD + numberC)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName);
            //
        }
        else
        {
            while (numberC + numberD != answerThree && trial > 0)
            {
            printf("You Are Wrong %s! 💩 \n", yourName);
            printf("Try Again, You Have %d Tries Left \n", trial);
            printf("%f + %f = ",numberC,numberD);
            scanf("%f",&answerThree);
            trial = trial - 1;
            //exit(1);
            }
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", numberC + numberD);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }
        }
        
        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;
        
    }
    printf("Okay \n");    
}

void functionSubstractEasy(char * yourName)
{
    int answerFive;
    int repeat = 1;
    
    while (repeat == 1)
    {       
        int trial = 6;
        
        int numberE = (rand() / (RAND_MAX + 1.0)) * 27;
        int numberF = (rand() / (RAND_MAX + 1.0)) * 19;

        printf("%d - %d = ", numberE , numberF);
        scanf("%d", &answerFive);

        if (answerFive == numberE - numberF)
        {
            printf("🎊 You Are Right %s! 🎊 \n", yourName);
            //        
        }
        else
        {
            while (numberE - numberF != answerFive && trial > 0)
            {
            printf("You Are Wrong %s! 😶 \n", yourName);
            printf("Try Again, You Have %d Tries Left \n", trial);
            printf("%d - %d = ", numberE , numberF);
            scanf("%d", &answerFive);
            //exit(1);
            trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberE - numberF);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }
            
        }   

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }
    printf("Okay \n");    

}

void functionSubstractHard(char * yourName)
{
    float answerSix;
    int repeat = 1;

    while (repeat == 1)
    {
        int trial = 6;
        
        float numberG = (rand() / (RAND_MAX + 2.0)) * 4098;
        float numberH = (rand() / (RAND_MAX + 2.0)) * 4098;

        while (numberG == numberH || numberG == 0 || numberH == 0)
        {

        float numberG = (rand() / (RAND_MAX + 4.0)) * 4098;
        float numberH = (rand() / (RAND_MAX + 4.0)) * 4098;
            
        }
        
        printf("%f - %f = ", numberH ,numberG);
        scanf("%f", &answerSix);

        if (answerSix == numberH - numberG)
        {
            printf("🎊 You Are Right %s! 🎊 \n", yourName);
            //                
        }
            else
            {
            while (numberH - numberG != answerSix && trial > 0)
            {
                printf("You Are Wrong %s! 😑 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f - %f = ", numberH , numberG);
                scanf("%f", &answerSix);
                trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", numberH - numberG);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }
        
            //exit(1);
        }
        
        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }

    printf("Okay \n");    

}

void functionMultplyEasy(char * yourName)
{
    int answerEight;

    int repeat = 1;

    while (repeat == 1)
    {
    
        int trial = 6;

        int numberI = (rand() / (RAND_MAX + 1.0)) * 21;
        int numberJ = (rand() / (RAND_MAX + 1.0)) * 12;
        
        printf("%d * %d = ", numberI , numberJ);
        scanf("%d", &answerEight);

        if (answerEight == numberJ * numberI)
        {
            printf("🎊 You Are Right %s! 🎉 \n", yourName);
            //              
        }
            else
        {
            while (numberJ * numberI == answerEight || trial > 0)
            {
                printf("You Are Wrong %s! 😂 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d * %d = ", numberI , numberJ);
                scanf("%d", &answerEight);
                trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %d \n", numberJ * numberI);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }
            
            //exit(1);
        }
        
        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;
    
    }
    printf("Okay \n");    
}

void functionMultplyHard(char * yourName)
{
    float answerNine;

    int repeat = 1;

    while (repeat == 1)
    {
        
        int trial = 6;

        float numberK = (rand() / (RAND_MAX + 1.0)) * 512;
        float numberL = (rand() / (RAND_MAX + 1.0)) * 512;
        
        printf("%f * %f = ", numberK , numberL);
        scanf("%f", &answerNine);

        while (numberK == 1 || numberL == 1 || numberK == 2 || numberL == 2 || numberK * numberL < 25)
        {

            int numberK = (rand() / (RAND_MAX + 1.0)) * 512;
            int numberL = (rand() / (RAND_MAX + 1.0)) * 512;

        }
        

        if (answerNine == numberK * numberL)
        {
            printf("🎉 You Are Right %s! 🎊 \n", yourName);
            //                
        }
            else
        {
            while (numberK * numberL != answerNine && trial > 0)
            {
                printf("You Are Wrong %s! 🤪 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f * %f = ", numberK , numberL);
                scanf("%f", &answerNine);
                trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", numberL * numberK);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }

    printf("Okay \n");    

}

void functionDivisionEasy(char * yourName)
{
    float answerTen;

    int repeat = 1;

    while (repeat == 1)
    {
        
        int trial = 6;

        int AnumberM = (rand() / (RAND_MAX + 1.0)) * 36;
        int AnumberN = (rand() / (RAND_MAX + 1.0)) * 24;

        float numberM = (float)AnumberM;
        float numberN = (float)AnumberN;

        printf("%f / %f = ", numberM, numberN);
        scanf("%f", &answerTen);

        if (answerTen == numberM / numberN)
        {
            printf("🎊 You Are Right %s! 🎉 \n", yourName);
        }
            else
        {
            while (numberM / numberN != answerTen && trial > 0)
            {
                printf("You Are Wrong %s! 😞 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f / %f = ", numberM, numberN);
                scanf("%f", &answerTen);
                trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", numberM / numberN);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }

        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }

    printf("Okay \n");    

}

void functionDivisionHard(char * yourName)
{
    float answerEleven;

    int repeat = 1;

    while (repeat == 1)
    {

        int trial = 6;

        float numberO = (rand() / (RAND_MAX + 3.6)) * 128;
        float numberP = (rand() / (RAND_MAX + 3.6)) * 128;

        printf("%f / %f = ", numberO, numberP);
        scanf("%f", &answerEleven);

        while (numberO == numberP || numberO == 1 || numberP == 1)
        {

            float numberO = (rand() / (RAND_MAX + 3.6)) * 128;
            float numberP = (rand() / (RAND_MAX + 3.6)) * 128;

        }
        

        if (answerEleven == numberO / numberP)
        {
            printf("🎉 You Are Right %s! 🎊 \n", yourName);
        }
            else
        {
            while (numberO / numberP != answerEleven && trial > 0)
            {
                printf("You Are Wrong %s! 🤯 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f / %f = ", numberO, numberP);
                scanf("%f", &answerEleven);
                trial = trial - 1;
            }
            
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n",numberO / numberP);
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }        
            
        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }

    printf("Okay \n");    

}

void functionPowerEasy(char * yourName)
{
    int answerTwelve;

    int repeat = 1;

    while (repeat == 1)
    {
        int trial = 6;

        int numberQ = 8 * (rand() / (RAND_MAX + 1.0));
        int numberR = 8 * (rand() / (RAND_MAX + 1.0));

        while (numberR == 0 || numberQ == 0)
        {
            int numberQ = 8 * (rand() / (RAND_MAX + 1.0));
            int numberR = 8 * (rand() / (RAND_MAX + 1.0));
        }
        
        printf("%d ^ %d = " , numberQ , numberR);
        scanf("%d" , &answerTwelve);

        if (answerTwelve == pow( numberQ , numberR ))
        {
            printf("🤓 You Are Right %s! 🤓 \n", yourName);
        }
        
        else
        {
            while (answerTwelve != pow( numberQ , numberR ) && trial > 0)
            {
                printf("You Are Wrong %s! 🧐 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%d ^ %d = ", numberQ, numberR);
                scanf("%d", &answerTwelve);
                trial = trial - 1;
            }
        
            switch (trial)
            {
            case 0:
                printf("You Failed %s! \n", yourName);
                printf("The Answer Is %f \n", pow( numberQ , numberR ));
                break;
            
            default:
                printf("You Passed %s! \n", yourName);
                break;
            }            
        
        }
        
        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }
    
    printf("Okay \n");    

}

void functionPowerHard(char * yourName)
{
    float answerFifteen;

    int repeat = 1;
    
    while (repeat == 1)
    {
        int trial = 6;

        float numberS = 32 * (rand() / (RAND_MAX + 3.2));
        float numberT = 32 * (rand() / (RAND_MAX + 3.2));

        while (pow(numberS , numberT) < 50)
        {
            float numberS = 32 * (rand() / (RAND_MAX + 4.6));
            float numberT = 32 * (rand() / (RAND_MAX + 4.6));
        }
        
        printf("%f ^ %f = " , numberS , numberT);
        scanf("%f", &answerFifteen);

        if (pow(numberS , numberT) == answerFifteen)
        {
            printf("🤨 You Are Right %s! 🤔 \n", yourName);
        }
        else
        {
            while (answerFifteen != pow(numberS,numberT) && trial > 0)
            {
                printf("You Are Wrong %s! 🤮 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f ^ %f = ", numberS, numberT);
                scanf("%f", &answerFifteen);
                trial = trial - 1;
            }
            switch (trial)
            {
            case 0:
                printf("You Failed! \n");
                printf("The Answer is %f \n",pow(numberS,numberT));
                break;
            
            default:
                printf("You Passed! \n");
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }

    printf("Okay \n");    

}

void functionPercentageEasy(char * yourName)
{
    float answerSixteen;
    
    int repeat = 1;

    while (repeat == 1)
    {
        int trial = 6;

        int AnumberU = 64 * (rand() / (RAND_MAX + 8.4));
        int AnumberV = 98 * (rand() / (RAND_MAX + 5.6));

        float numberU = (float)AnumberU;
        float numberV = (float)AnumberV;

        printf("%f%% of %f = ",numberV,numberU);
        scanf("%f",&answerSixteen);
        
        float answerNumUOfNumV = (numberU / 100) * numberV;

        if (answerSixteen == answerNumUOfNumV)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName);
        }
        else
        {
            while (answerSixteen != answerNumUOfNumV && trial > 0)
            {
                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f%% of %f = ",numberV,numberU);
                scanf("%f",&answerSixteen);
                trial = trial - 1;
            }
            
            switch (trial)
            {
                case 0: 
                    printf("You Failed %s! \n", yourName); 
                    printf("The Answer Is %f \n", answerNumUOfNumV); 
                break;

                default: 
                    printf("You Passed %s! \n", yourName); 
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }
    printf("Okay \n");
}

void functionPercentageHard(char * yourName)
{
    float answerSeventeen;
    
    int repeat = 1;

    while (repeat == 1)
    {
        int trial = 6;

        float numberW = 4098 * (rand() / (RAND_MAX + 8.4));
        float numberX = 128 * (rand() / (RAND_MAX + 5.6));

        printf("%f%% of %f = ",numberW,numberX);
        scanf("%f",&answerSeventeen);
        
        float answerNumWOfNumX = (numberW / 100) * numberX;

        if (answerSeventeen == answerNumWOfNumX)
        {
            printf("🎉 You Are Right %s! 🎉 \n", yourName);
        }
        else
        {
            while (answerSeventeen != answerNumWOfNumX && trial > 0)
            {
                printf("You Are Wrong %s! 😟 \n", yourName);
                printf("Try Again, You Have %d Tries Left \n", trial);
                printf("%f%% of %f = ",numberW,numberX);
                scanf("%f",&answerSeventeen);
                trial = trial - 1;
            }
            
            switch (trial)
            {
                case 0: 
                    printf("You Failed %s! \n", yourName); 
                    printf("The Answer Is %f \n", answerNumWOfNumX); 
                break;

                default: 
                    printf("You Passed %s! \n", yourName); 
                break;
            }
        }

        printf("Want To Try Again? \n");
        printf("1 for Yes & anything for No ");
        scanf("%d", &repeat);
        repeat;

    }
    printf("Okay \n");
}

int main()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);    
    srand(time(NULL));
    int checkAccrossMyNames = 0;
    int FoundMatch = -64 ;
    int answerEightteen;
    int answerFourteen;
    int answerSeven;
    char yourName[256];
    int answerOne;
    int dificultyLevel;
    int answerFour;
    int answerThirteen;
    int tries = 5;
    int currentDay = aTime->tm_mday;
    int currentMonth = aTime->tm_mon + 1;
    int currentYear = aTime->tm_year + 1900;
    int again = 512;
    int GenerateMyName;

    char * MyNameGenerated = malloc(5);
    GenerateMyName = GenerateMyName = 65 + ((rand() / (RAND_MAX + 3.6)) * 25);
    MyNameGenerated[0] = GenerateMyName;
    GenerateMyName = GenerateMyName = 98 + ((rand() / (RAND_MAX + 3.6)) * 25);
    MyNameGenerated[1] = GenerateMyName;
    GenerateMyName = GenerateMyName = 98 + ((rand() / (RAND_MAX + 3.6)) * 25);
    MyNameGenerated[2] = GenerateMyName;
    GenerateMyName = GenerateMyName = 98 + ((rand() / (RAND_MAX + 3.6)) * 25);
    MyNameGenerated[3] = GenerateMyName;
    GenerateMyName = GenerateMyName = 98 + ((rand() / (RAND_MAX + 3.6)) * 25);
    MyNameGenerated[4] = '\0';

    char * myNames[] = {"Kenway", "Austen", "Kate", "Alex", "Lucy", "Nicky", "Micky", "Edward", "Biden", "Snowden", "Josif", "Linda", "Marry", "Elezabet", "Redington", "John", "Creg", "Conner", "Abraham", "Antony", "Loyyd", MyNameGenerated};
    int randNum = 21 * (rand() / (RAND_MAX + 1.9));

    printf("It's day %d of the Month. Stored in Memory Location %p \n", currentDay, &currentDay);
    printf("It's Month %d of the Year. Stored in Memory Location %p \n", currentMonth, &currentMonth);
    printf("It's Year %d. Stored in Memory Location %p \n", currentYear, &currentYear);
    printf("\n");
    printf("So In MM/DD/YYYY format, The Date The Is %d/%d/%d \n",currentMonth,currentDay,currentYear);
    printf("\n");

    printf("Hello There! My Name Is %s, Tell me Your Name ", myNames[randNum]);
    fgets(yourName, 256, stdin);
    yourName[strlen(yourName)-1] = '\0';

    while (checkAccrossMyNames < 22 && FoundMatch != 0)
    {
        FoundMatch = strncmp(myNames[checkAccrossMyNames],yourName,strlen(yourName));
        checkAccrossMyNames++;
    }
    
    if (strncmp(myNames[randNum],yourName,strlen(yourName)) == 0)
    {
        printf("You and I Have The same name! \n");
        printf("Okay Me, This Is A Math Game. I will Give You an Equation & you will solve it! \n");
    }
    else if (FoundMatch == 0)
    {
        printf("I think I Know You!!! \n");
        printf("Okay %s, This Is A Math Game. I will Give You an Equation & you will solve it! \n", yourName);
    }
    else
    {
        printf("Okay %s, This Is A Math Game. I will Give You an Equation & you will solve it! \n", yourName);
    }

    printf("\n");
    printf("\n");

    printf("What Kind Of Math Do You Want To Play? Just Type The Number Beside That Represents The Math Game. During Which You Can Type 0 To Exit \n");

    printf("\n");

        while (again != 0)
        
        {

            printf(" 1 Addition  2 Subtraction  3 Multiplication  4 Division  5 Power  6 Percantage ");
            scanf("%d", &answerOne);

            switch (answerOne)
            {

            case 0:

                printf("It's Okay, You can Come Back Anytime & Run This Program :) \n");
                exit(0);

                break;
            
            case 1:
                
                printf("Addition it is, Do You Want It Easy Or Hard? \n");
                printf(" 1  Easy  or  2  Hard ");
                
                scanf("%d", &answerFour);
                
                switch (answerFour)
                {
                case 1:
                    
                    functionAddEasy(yourName);
                    
                    break;
                
                case 2:
                    
                    functionAddHard(yourName);
                    
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

                scanf("%d", &answerSeven);
                switch (answerSeven)
                {
                case 1:
                    
                    functionSubstractEasy(yourName);
                    
                    break;
                
                case 2:
                    
                    functionSubstractHard(yourName);
                    
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

                scanf("%d", &answerThirteen);
                switch (answerThirteen)
                {
                case 1:
                    
                    functionMultplyEasy(yourName);
                    
                    break;
                
                case 2:
                    
                    functionMultplyHard(yourName);
                    
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

                scanf("%d", &answerFourteen);
                switch (answerFourteen)
                {
                case 1:
                    
                    functionDivisionEasy(yourName);
                    
                    break;
                
                case 2:
                    
                    functionDivisionHard(yourName);
                    
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

                scanf("%d", &answerThirteen);
                switch (answerThirteen)
                {
                case 1:
                    
                    functionPowerEasy(yourName);
                    
                    break;
                case 2:

                    functionPowerHard(yourName);

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

                scanf("%d",&answerEightteen);
                switch (answerEightteen)
                {
                case 1:
                    
                    functionPercentageEasy(yourName);

                    break;
                
                case 2:

                    functionPercentageHard(yourName);

                    break;
                
                default:
                    break;
                }
                
                break;
            
            default:
                printf("Invalid Input, Exiting. ");
                break;
            }

            printf("Type Anything But 0 to Start Over Again ");
            scanf("%d",&again);
            again;

        }

    if (strncmp(myNames[randNum],yourName,strlen(yourName)) == 0)
    {
        printf("You Have Rached The End Me! You Can Run This Program Again If You Want! This Is You, Signing Out. \n" );
    }
    else
    {
        printf("You Have Rached The End %s! You Can Run This Program Again If You Want! This Is %s, Signing Out. \n" , yourName,myNames[randNum]);
    }
    
    return 0;
}