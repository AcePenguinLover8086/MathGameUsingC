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
    int trial = 3;
    
    int numberA = 64 * (rand() / (RAND_MAX + 2.0));
    int numberB = 32 * (rand() / (RAND_MAX + 2.0));

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
    int answerThree;
    int repeat = 1;

    while (repeat == 1)
    {
    int trial = 3;

    int numberC = (rand() / (RAND_MAX + 2.0)) * 4098;
    int numberD = (rand() / (RAND_MAX + 2.0)) * 4098;
    //int numberCAndNumberD = numberC + numberD;
    
    while (numberC == numberD || numberC == 0 || numberD == 0)
    {

    int numberC = (rand() / (RAND_MAX + 8.0)) * 4098;
    int numberD = (rand() / (RAND_MAX + 8.0)) * 4098;
        
    }
    
    printf("%d + %d = ",numberC,numberD);
    scanf("%d",&answerThree);

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
        printf("%d + %d = ",numberC,numberD);
        scanf("%d",&answerThree);
        trial = trial - 1;
        //exit(1);
        }
        switch (trial)
        {
        case 0:
            printf("You Failed %s! \n", yourName);
            printf("The Answer Is %d \n", numberC + numberD);
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
    int trial = 3;
    
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
    int answerSix;
    int repeat = 1;

    while (repeat == 1)
    {
    int trial = 3;
    
    int numberG = (rand() / (RAND_MAX + 2.0)) * 4098;
    int numberH = (rand() / (RAND_MAX + 2.0)) * 4098;

    while (numberG == numberH || numberG == 0 || numberH == 0)
    {

    int numberG = (rand() / (RAND_MAX + 4.0)) * 4098;
    int numberH = (rand() / (RAND_MAX + 4.0)) * 4098;
        
    }
    
    printf("%d - %d = ", numberH ,numberG);
    scanf("%d", &answerSix);

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
            printf("%d - %d = ", numberH , numberG);
            scanf("%d", &answerSix);
            trial = trial - 1;
        }
        
        switch (trial)
        {
        case 0:
            printf("You Failed %s! \n", yourName);
            printf("The Answer Is %d \n", numberH - numberG);
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
    
    int trial = 3;

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
    int answerNine;

    int repeat = 1;

    while (repeat == 1)
    {
    
    int trial = 3;

    int numberK = (rand() / (RAND_MAX + 1.0)) * 512;
    int numberL = (rand() / (RAND_MAX + 1.0)) * 512;
    
    printf("%d * %d = ", numberK , numberL);
    scanf("%d", &answerNine);

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
            printf("%d * %d = ", numberK , numberL);
            scanf("%d", &answerNine);
            trial = trial - 1;
        }
        
        switch (trial)
        {
        case 0:
            printf("You Failed %s! \n", yourName);
            printf("The Answer Is %d \n", numberL * numberK);
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
    double answerTen;

    int repeat = 1;

    while (repeat == 1)
    {
    
    int trial = 3;

    double numberM = (rand() / (RAND_MAX + 1.0)) * 12;
    double numberN = (rand() / (RAND_MAX + 1.0)) * 9;

    printf("%lf / %lf = ", numberM, numberN);
    scanf("%lf", &answerTen);

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
            printf("%lf / %lf = ", numberM, numberN);
            scanf("%lf", &answerTen);
            trial = trial - 1;
        }
        
        switch (trial)
        {
        case 0:
            printf("You Failed %s! \n", yourName);
            printf("The Answer Is %lf \n", numberM / numberN);
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
    double answerEleven;

    int repeat = 1;

    while (repeat == 1)
    {
    
    int trial = 3;

    double numberO = (rand() / (RAND_MAX + 3.6)) * 128;
    double numberP = (rand() / (RAND_MAX + 3.6)) * 128;

    printf("%lf / %lf = ", numberO, numberP);
    scanf("%lf", &answerEleven);

    while (numberO == numberP || numberO == 1 || numberP == 1)
    {

    double numberO = (rand() / (RAND_MAX + 3.6)) * 128;
    double numberP = (rand() / (RAND_MAX + 3.6)) * 128;

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
            printf("%lf / %lf = ", numberO, numberP);
            scanf("%lf", &answerEleven);
            trial = trial - 1;
        }
        
        switch (trial)
        {
        case 0:
            printf("You Failed %s! \n", yourName);
            printf("The Answer Is %lf \n",numberO / numberP);
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
        int trial = 3;

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
    double answerFifteen;

    int repeat = 1;
    
    while (repeat == 1)
    {
        int trial = 3;

        double numberS = 32 * (rand() / (RAND_MAX + 3.2));
        double numberT = 32 * (rand() / (RAND_MAX + 3.2));

        while (pow(numberS , numberT) < 50)
        {
            double numberS = 32 * (rand() / (RAND_MAX + 4.6));
            double numberT = 32 * (rand() / (RAND_MAX + 4.6));
        }
        
        printf("%lf ^ %lf = " , numberS , numberT);
        scanf("%lf", &answerFifteen);

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
                printf("%lf ^ %lf = ", numberS, numberT);
                scanf("%lf", &answerFifteen);
                trial = trial - 1;
            }
            switch (trial)
            {
            case 0:
                printf("You Failed! \n");
                printf("The Answer is %lf \n",pow(numberS,numberT));
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

int main()
{
    time_t theTime = time(NULL);
    struct tm *aTime = localtime(&theTime);    
    srand(time(NULL));
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
    

    char * myNames[] = {"Kenway", "Austen", "Kate", "Alex", "Lucy", "Nicky", "Micky", "Edward", "Biden", "Snowden", "Josif", "Linda", "Marry", "Elezabet", "Redington", "John", "Creg", "Conner", "Abraham", "Antony", "Loyyd"};
    int randNum = 20 * (rand() / (RAND_MAX + 2.0));

    printf("It's day %d of the Month. Stored in Memory Location %p \n", currentDay, &currentDay);
    printf("It's Month %d of the Year. Stored in Memory Location %p \n", currentMonth, &currentMonth);
    printf("It's Year %d. Stored in Memory Location %p \n", currentYear, &currentYear);
    printf("\n");
    printf("So In MM/DD/YYYY format, The Date The Is %d/%d/%d \n",currentMonth,currentDay,currentYear);
    printf("\n");

    printf("Hello There! My Name Is %s, Tell me Your Name ", myNames[randNum]);
    fgets(yourName, 256, stdin);
    yourName[strlen(yourName)-1] = '\0';
    printf("Okay %s, This Is A Math Game. I will Give You an Equation & you will solve it! \n", yourName);
    
    printf("\n");
    printf("\n");

    printf("What Kind Of Math Do You Want To Play? Just Type The Number Beside That Represents The Math Game. During Which You Can Type 0 To Exit \n");

    printf("\n");

        while (again != 0)
        
        {

            printf(" 1 Addition  2 Subtraction  3 Multiplication  4 Division  5 Power ");
            scanf("%d", &answerOne);

            while (answerOne < 1 && answerOne > 5 && tries > 0 && answerOne != 0)
            {
                printf("Your Input Was't Valid! Try Again! \n");
                printf("You Have %d tries to get it right or a 0 to exit! after Too many wrong input ithe program will exit it self! \n" , tries);
                printf(" 1 Addition  2 Subtraction  3 Multiplication  4 Division  5 Power ");
                scanf("%d", &answerOne);
                tries = tries - 1;
                tries;
            }
            
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
            
            default:
                printf("Invalid Input, Exiting. ");
                break;
            }

            printf("Type Anything But 0 to Start Over Again ");
            scanf("%d",&again);
            again;

        }

    printf("You Have Rached The End %s! You Can Run This Program Again If You Want! \n" , yourName);

    return 0;
}