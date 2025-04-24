#include <stdio.h>
#define SIZE 2

struct hotel
{
    char name[50];
    char address[100];
    char grade;
    float room_charge;
    int no_of_rooms;
};

void read();
void display();
void printline(int n);
void print_grade();
void print_charge();

struct hotel h[SIZE];

int main(void)
{
    read();
    display();
    print_grade();
    print_charge();
    return 0;
}

void read()
{
    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter details for hotel %d:\n", i + 1);
        printf("Enter Name: ");
        scanf("%[^\n]%*c", h[i].name);
        printf("Enter Address: ");
        scanf("%[^\n]%*c", h[i].address);
        printf("Enter Grade: ");
        scanf("%c", &h[i].grade);
        printf("Enter Average Room Charge: ");
        scanf("%f", &h[i].room_charge);
        printf("Enter Number of Rooms: ");
        scanf("%d%*c", &h[i].no_of_rooms);
        printf("\n");
    }
}

void display()
{
    printline(95);
    printf("%-30s%-20s%-10s%15s%15s\n", "Name", "Address", "Grade", "Average Room Charge", "Number of Rooms");
    printline(95);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%-30s\t%-20s\t%-10c\t%15.2f\t%15d\n", h[i].name, h[i].address, h[i].grade, h[i].room_charge, h[i].no_of_rooms);
    }
    printline(95);
}

void printline(int n)
{
    for (int i = 1; i <= n; i++)
    {
        printf("-");
    }
    printf("\n");
}

void print_grade()
{
    char grade;
    printf("Enter grade to display: ");
    scanf("%c", &grade);
    printline(95);
    printf("%-30s%-20s%-10s%15s%15s\n", "Name", "Address", "Grade", "Average Room Charge", "Number of Rooms");
    printline(95);
    for (int i = 0; i < SIZE; i++)
    {
        if (grade == h[i].grade)
            printf("%-30s\t%-20s\t%-10c\t%15.2f\t%15d\n", h[i].name, h[i].address, h[i].grade, h[i].room_charge, h[i].no_of_rooms);
    }
    printline(95);
}

void print_charge()
{
    float charge;
    printf("Enter an amount to display: ");
    scanf("%f", &charge);
    printline(95);
    printf("%-30s%-20s%-10s%15s%15s\n", "Name", "Address", "Grade", "Average Room Charge", "Number of Rooms");
    printline(95);
    for (int i = 0; i < SIZE; i++)
    {
        if (h[i].room_charge < charge)
            printf("%-30s\t%-20s\t%-10c\t%15.2f\t%15d\n", h[i].name, h[i].address, h[i].grade, h[i].room_charge, h[i].no_of_rooms);
    }
    printline(95);
}