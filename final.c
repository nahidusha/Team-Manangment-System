#include <stdio.h>

#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 44

#define SIZE 4
#define STACK 3
#define QUEUE 3
int top = -1, stack_array[STACK], queue_array[QUEUE];
struct my_struct
{
    int int_array[ARRAY_SIZE];
    float float_array[ARRAY_SIZE];
    char *name_array[50];
    char *skills_array[50];
};

// ading student to my team
void push()
{
    int x;

    if (top == STACK - 1)
    {
        printf("\nYou Already have a Full team You cant add untill you remove someone from your team");
    }
    else
    {
        printf("\nEnter student id to add him/her in your team: ");
        scanf("%d", &x);
        top = top + 1;
        stack_array[top] = x;
    }
}
void push_from_searched_id(int id)
{
    // int id;
    if (top == STACK - 1)
    {
        printf("\nYou Already have a Full team You cant add untill you remove someone from your team");
    }
    else
    {
        //  printf("\nEnter student id to add him/her in your team: ");
        // scanf("%d", &x);
        top = top + 1;
        stack_array[top] = id;
    }
}
// removing from my team
void pop()
{
    if (top == -1)
    {
        printf("\nNo one is your team yet ");
    }
    else
    {
        printf("\nRemoved Student's Id: %d", stack_array[top]);
        top = top - 1;
    }
}
// Showing your team
void show_my_team()
{

    struct my_struct my_data;

    float float_array[ARRAY_SIZE] = {
        0.00,
        3.18,
        0.00,
        0.00,
        3.67,
        3.33,
        0.00,
        3.93,
        0.00,
        3.53,
        0.00,
        2.85,
        3.58,
        3.83,
        3.63,
        0.00,
        0.00,
        2.90,
        3.74,
        3.08,
        0.00,
        0.00,
        3.58,
        3.28,
        0.00,
        0.00,
        3.25,
        3.67,
        3.42,
        0.00,
        3.42,
        0.00,
        3.01,
        0.00,
        0.00,
        3.08,
        0.00,
        0.00,
        0.00,
        3.06,
        0.00,
        0.00,
        0.00,
        0.00};

    char *names[] = {"Tanvir Hosenn ", "Jahidul Islam", "Partha Baddya", "Shakil Sarker", "Aysha Smirty", "Yousuf Sabuj", "Muhammad Mustafe", "Antora Chatarjee", "Rakibul Hridoy", "Farnaz Arpita", "Shaiful Islam", "Liton Mahmud", "Afsana Mim", "Sunzida Sanju", "Nahid Usha", "Nusaiba Payel", "Maria Bakul", "Ayesha Subarna", "Mursalatul Pallob", "Maliha Musrat", "Mirza Nafi", "Sajjad Swadhin", "Redwanul Sagor", "Partha Sarker", "Mamunul Islam", "Mohammad Sami", "Naim Nahid", "Mahinur Istia", "Rafia Romana ", "Toufiq Islam", "Fatema Lima ", "Ariyan Silva ", "Syed Saif", "Sabbir Bijoy", "Abdus Samad", "Tariqul Ankon", "Sharmin Muna", "Ariyan Silva", "Fardin Pranto", "Ishrat Hayat", "Mohammad Nayem", "Muhammad Mustafe", "Sohan Mia", "Ajit Sutradhar"};
    char *skills[] = {
        "N/A", "Master of Managment", "N/A", "N/A", "Math Expert", "Productive", "N/A",
        "Productive", "N/A", "Excelence in Communication ", "N/A", "Photographer", "Productive", "Host", "Js Devloper", "N/A", "N/A", "Animation Speacialist",
        "Pro Programmer", "Scientistic Mind", "Biker", "N/A", "Ms Office Expert", "Python Programmer", "N/A", "N/A", "Prodcutive", "Digital Marketer", " Arabic Caligraphy Artist", "N/A", "Good Communicator", "N/A", "Spoarts Freak", "N/A", "N/A", "Seo Speacialist", "N/A", "N/A", "N/A", "Social Media Influencer", "Digital Marketer", "N/A", "Productive", "Cricketer"};
    for (int i = 0; i < 44; i++)
    {
        my_data.int_array[i];
        my_data.name_array[i] = names[i];
        my_data.skills_array[i] = skills[i];
        my_data.float_array[i] = float_array[i];

        // this section have to edited
    }

    if (top == -1)
    {
        printf("\nYour team has no members .Please add them first");
    }
    else
    {
        int i;
        printf("\nYour Team members are : \n");
        for (int i = top; i >= 0; --i)
        {
            //  printf("%d\n", stack_array[i]);
            int member1 = stack_array[i];
            // int member2=stack_array[top-1];
            // int member3=stack_array[top-2];

            printf("\nRoll      : %d\nCgpa      :%.2f\nName      :%s\nSkill     :%s\n", stack_array[i], my_data.float_array[member1 - 1], my_data.name_array[member1 - 1], my_data.skills_array[member1 - 1]);
        }
    }
    printf("What do you wannt ?\n");
    printf("\n1.Remove member \n2.Any numeric key except 1 to ignore\n");
    int yes;
    scanf("%d", &yes);

    if (yes == 1)
    {
        pop();
    }

    else
    {
    }
}

// struct my_struct
// {
//     int int_array[ARRAY_SIZE];
//     float float_array[ARRAY_SIZE];
//     char *name_array[50];
//     char *skills_array[50];
// };

void show_all()
{
    // Declare a variable of the structure type
    struct my_struct my_data;
    float float_array[ARRAY_SIZE] = {
        0.00,
        3.18,
        0.00,
        0.00,
        3.67,
        3.33,
        0.00,
        3.93,
        0.00,
        3.53,
        0.00,
        2.85,
        3.58,
        3.83,
        3.63,
        0.00,
        0.00,
        2.90,
        3.74,
        3.08,
        0.00,
        0.00,
        3.58,
        3.28,
        0.00,
        0.00,
        3.25,
        3.67,
        3.42,
        0.00,
        3.42,
        0.00,
        3.01,
        0.00,
        0.00,
        3.08,
        0.00,
        0.00,
        0.00,
        3.06,
        0.00,
        0.00,
        0.00,
        0.00};
    char *names[] = {"Tanvir Hosenn ", "Jahidul Islam", "Partha Baddya", "Shakil Sarker", "Aysha Smirty", "Yousuf Sabuj", "Muhammad Mustafe", "Antora Chatarjee", "Rakibul Hridoy", "Farnaz Arpita", "Shaiful Islam", "Liton Mahmud", "Afsana Mim", "Sunzida Sanju", "Nahid Usha", "Nusaiba Payel", "Maria Bakul", "Ayesha Subarna", "Mursalatul Pallob", "Maliha Musrat", "Mirza Nafi", "Sajjad Swadhin", "Redwanul Sagor", "Partha Sarker", "Mamunul Islam", "Mohammad Sami", "Naim Nahid", "Mahinur Istia", "Rafia Romana ", "Toufiq Islam", "Fatema Lima ", "Ariyan Silva ", "Syed Saif", "Sabbir Bijoy", "Abdus Samad", "Tariqul Ankon", "Sharmin Muna", "Ariyan Silva", "Fardin Pranto", "Ishrat Hayat", "Mohammad Nayem", "Muhammad Mustafe", "Sohan Mia", "Ajit Sutradhar"};
    char *skills[] = {
        "N/A", "Master of Managment", "N/A", "N/A", "Math Expert", "Productive", "N/A",
        "Productive", "N/A", "Excelence in Communication ", "N/A", "Photographer", "Productive", "Host", "Js Devloper", "N/A", "N/A", "Animation Speacialist",
        "Pro Programmer", "Scientistic Mind", "Biker", "N/A", "Ms Office Expert", "Python Programmer", "N/A", "N/A", "Prodcutive", "Digital Marketer", " Arabic Caligraphy Artist", "N/A", "Good Communicator", "N/A", "Spoarts Freak", "N/A", "N/A", "Seo Speacialist", "N/A", "N/A", "N/A", "Social Media Influencer", "Digital Marketer", "N/A", "Productive", "Cricketer"};
    for (int i = 0; i < 44; i++)
    {
        my_data.int_array[i];
        my_data.name_array[i] = names[i];
        my_data.skills_array[i] = skills[i];
        my_data.float_array[i] = float_array[i];

        // this section have to edited
    }

    // Print the values of the  arrays
    //  printf("\n Roll:%d\nCgpa:%.2f\nName:%s\nSkill:%s\n");
    for (int i = 0; i < 44; i++)
    {
        printf("\nRoll      : %d\nCgpa      :%.2f\nName      :%s\nSkill     :%s\n", i + 1, my_data.float_array[i], my_data.name_array[i], my_data.skills_array[i]);
    }

    printf("Want to add in your team  \n?");

    printf("\n1.Yes\n2.Any key to ignore\n");
    int yes;
    scanf("%d", &yes);
    if (yes == 1)
    {
        push();
    }
    else
    {
    }
}

void linear_search()
{
    struct my_struct
    {
        int int_array[ARRAY_SIZE];
        float float_array[ARRAY_SIZE];
        char *name_array[50];
        char *skills_array[50];
    };
    // Declare a variable of the structure type
    struct my_struct my_data;

    float float_array[ARRAY_SIZE] = {
        0.00,
        3.18,
        0.00,
        0.00,
        3.67,
        3.33,
        0.00,
        3.93,
        0.00,
        3.53,
        0.00,
        2.85,
        3.58,
        3.83,
        3.63,
        0.00,
        0.00,
        2.90,
        3.74,
        3.08,
        0.00,
        0.00,
        3.58,
        3.28,
        0.00,
        0.00,
        3.25,
        3.67,
        3.42,
        0.00,
        3.42,
        0.00,
        3.01,
        0.00,
        0.00,
        3.08,
        0.00,
        0.00,
        0.00,
        3.06,
        0.00,
        0.00,
        0.00,
        0.00};

    char *names[] = {"Tanvir Hosenn ", "Jahidul Islam", "Partha Baddya", "Shakil Sarker", "Aysha Smirty", "Yousuf Sabuj", "Muhammad Mustafe", "Antora Chatarjee", "Rakibul Hridoy", "Farnaz Arpita", "Shaiful Islam", "Liton Mahmud", "Afsana Mim", "Sunzida Sanju", "Nahid Usha", "Nusaiba Payel", "Maria Bakul", "Ayesha Subarna", "Mursalatul Pallob", "Maliha Musrat", "Mirza Nafi", "Sajjad Swadhin", "Redwanul Sagor", "Partha Sarker", "Mamunul Islam", "Mohammad Sami", "Naim Nahid", "Mahinur Istia", "Rafia Romana ", "Toufiq Islam", "Fatema Lima ", "Ariyan Silva ", "Syed Saif", "Sabbir Bijoy", "Abdus Samad", "Tariqul Ankon", "Sharmin Muna", "Ariyan Silva", "Fardin Pranto", "Ishrat Hayat", "Mohammad Nayem", "Muhammad Mustafe", "Sohan Mia", "Ajit Sutradhar"};

    char *skills[] = {
        "N/A", "Master of Managment", "N/A", "N/A", "Math Expert", "Productive", "N/A",
        "Productive", "N/A", "Excelence in Communication ", "N/A", "Photographer", "Productive", "Host", "Js Devloper", "N/A", "N/A", "Animation Speacialist",
        "Pro Programmer", "Scientistic Mind", "Biker", "N/A", "Ms Office Expert", "Python Programmer", "N/A", "N/A", "Prodcutive", "Digital Marketer", " Arabic Caligraphy Artist", "N/A", "Good Communicator", "N/A", "Spoarts Freak", "N/A", "N/A", "Seo Speacialist", "N/A", "N/A", "N/A", "Social Media Influencer", "Digital Marketer", "N/A", "Productive", "Cricketer"};

    for (int i = 0; i < 44; i++)
    {
        my_data.int_array[i];
        my_data.name_array[i] = names[i];
        my_data.skills_array[i] = skills[i];
        my_data.float_array[i] = float_array[i];
    }

    int srch;

    printf("Please type an id for search\n");
    scanf("%d", &srch);
    int found = 0; // flag to indicate if search value was found
    for (int i = 0; i < 44; i++)
    {
        if (i == srch)
        {
            printf("\nRoll      : %d\nCgpa      :%.2f\nName      :%s\nSkill     :%s\n", srch, my_data.float_array[srch - 1], my_data.name_array[srch - 1], my_data.skills_array[srch - 1]);
            found = 1;
            break;
        }
    }
    if (!found)
    {
        printf("There is no one with the id you searched\n");
    }
    printf(" \nWant to add %d to your team \n", srch);
    printf("\n1.Yes\n2.Any key to ignore\n");
    int yes;
    scanf("%d", &yes);

    if (yes == 1)
    {
        push_from_searched_id(srch);
    }
    else
    {
    }
    // exit(0);
}

int main()
{
    int choice;

    while (1)
    {
        printf("\nMake Your Desired Team ");
        printf("\n1.Search a specific with Roll\n2.Show All Students Info\n3.Show My Team\n4.Quit");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            linear_search();
            break;
        case 2:
            show_all();
            break;
        case 3:
            show_my_team();
            break;
        case 4:
            exit(0);

        default:
            printf("\nInvalid choice!!");
        }
    }
    return 0;
}