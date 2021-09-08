// main.cpp
// testing vs git
// Team: Anthony, An, Van, Vincent, Nhan
// Chapter 1: Software Development.
// 08/28/2021

#include <iostream>
#include <string>
#include "menus.h"
#include "input.h"
#include "optionOne.h"
#include "optionTwo.h"
#include "optionThree.h"

void mainMenu(void);
void programOne(void);
void programTwo(void);
void programThree(void);

int main(void) 
{
    mainMenu();
    return EXIT_SUCCESS;
}

//PreCondition: NA
//PostCondition: redirects user to different menus based on their choice
void mainMenu(void)
{
    clearScreen();

    displayMainMenu();

    do
    {
        int userInput = inputInteger("\t\tOption: ");
        switch (userInput)
        {
        case 0: clearScreen(); exit(1);  break;
        case 1: clearScreen(); programOne(); break;
        case 2: clearScreen(); programTwo(); break;
        case 3: clearScreen(); programThree(); break;
        default: cout << "\tERROR-3A: Invalid input. Must be from 0..3."; break;
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: lets user choose actions found in program one
void programOne(void)
{
    string userStringInput = "";
    string asciiString = "";

    displayOptionOneMenu();

    do
    {
        int option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': userStringInput = inputString("\n\t\t\tEnter a text line: ", true); displayOptionOneMenu(); break;
        case 'b': case 'B': asciiString = asciiConverter(userStringInput); 
                            displayAscii(asciiString); displayOptionOneMenu(); break;
        case 'c': case 'C': displaySaveToFile(asciiString); displayOptionOneMenu(); break;
        case 'd': case 'D': displayReadFromFile(); displayOptionOneMenu(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C', or 'D'"; continue;
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: lets user choose actions found in program Two
void programTwo(void)
{
    int number = NULL;

    displayOptionTwoMenu();

    do
    {
        char option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': number = inputInteger("\t\t Enter an integer number (base 10): "); displayOptionTwoMenu(); break;
        case 'b': case 'B': convertOneBase(number); displayOptionTwoMenu();  break;
        case 'c': case 'C': convertAllBase(number); displayOptionTwoMenu();  break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B', or 'C'"; continue;
        }
    } while (true);
}

//PreCondition: NA
//PostCondition: lets user choose actions found in program Three
void programThree(void)
{
    displayOptionThreeMenu();

    do
    {
        char option = inputChar("\n\t\t\tOption: ");

        switch (option)
        {
        case '0': mainMenu(); break;
        case 'a': case 'A': section_A(); displayOptionThreeMenu(); break;
        case 'b': case 'B': section_B(); displayOptionThreeMenu(); break;
        case 'c': case 'C': section_C(); displayOptionThreeMenu(); break;
        case 'd': case 'D': section_D(); displayOptionThreeMenu(); break;
        case 'e': case 'E': section_E(); displayOptionThreeMenu(); break;
        case 'f': case 'F': section_F(); displayOptionThreeMenu(); break;
        case 'g': case 'G': section_G(); displayOptionThreeMenu(); break;
        case 'h': case 'H': section_H(); displayOptionThreeMenu(); break;
        case 'i': case 'I': section_I(); displayOptionThreeMenu(); break;
        case 'j': case 'J': section_J(); displayOptionThreeMenu(); break;
        case 'k': case 'K': section_K(); displayOptionThreeMenu(); break;
        case 'l': case 'L': section_L(); displayOptionThreeMenu(); break;
        case 'm': case 'M': section_M(); displayOptionThreeMenu(); break;
        case 'n': case 'N': section_N(); displayOptionThreeMenu(); break;
        case 'o': case 'O': section_O(); displayOptionThreeMenu(); break;
        case 'p': case 'P': section_P(); displayOptionThreeMenu(); break;
        case 'q': case 'Q': section_Q(); displayOptionThreeMenu(); break;
        case 'r': case 'R': section_R(); displayOptionThreeMenu(); break;
        case 's': case 'S': section_S(); displayOptionThreeMenu(); break;
        case 't': case 'T': section_T(); displayOptionThreeMenu(); break;
        case 'u': case 'U': section_U(); displayOptionThreeMenu(); break;
        case 'v': case 'V': section_V(); displayOptionThreeMenu(); break;
        case 'w': case 'W': section_W(); displayOptionThreeMenu(); break;
        default: cout << "\t\tERROR-1A: Invalid input. Must be '0','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V', or 'W'"; continue;
        }
    } while (true);
}