// Week03.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

//declaring constant variables

const double costusa1 = 6.00, costusa2 = 9.00, costusa3 = 12.00;
const double costcan1 = 8.00, costcan2 = 12.00, costcan3 = 15.00;
const double costaus1 = 10.00, costaus2 = 14.00, costaus3 = 17.00;
const double costsat1 = 90000000.00, costsat2 = 120000000.00, costsat3 = 175000000.00;

int main()
{
    //declearing variables
    string item = "", destination = "";
    string answer;

    double total{};
    cout << setfill('.') << setw(60) << '.' << endl;
    cout << "ITCS 2530 - Programming Assignment for week #3" << endl;
    cout << setfill('.') << setw(60) << '.' << endl;
    cout << endl;
    //user input item name
    cout << "Please enter the item name (no spaces).....:"; cin >> item;
    //user input if item is fragile or not
    cout << "Is the item fragile (y=yes/n=no)...........:";
    cin >> answer;
    //if statement, if yes variable for total changes to 2 if no continue
    transform(answer.begin(), answer.end(), answer.begin(), ::tolower);
    if (answer == "y" || answer == "Y")
    {
        total = 2;
    }
    else if (answer == "n" || answer == "N")
    {
    }
    else {
        cout << "Invalid entry, exiting" << endl;
        return(0);
    }

    //declearing variables for order and cost
    double order = 0, cost = 0;
    cout << "Please enter your order total...............:";
    cin >> order;
    cout << "Please enter destination. (usa/can/aus/saturn).....:";
    cin >> destination;
    //changing lowercase to uppercase

    transform(destination.begin(), destination.end(), destination.begin(), ::toupper);
    transform(item.begin(), item.end(), item.begin(), ::toupper);
    //If destination is usa
    if (destination == "SATURN")
    {
        cout << "Your item is......................" << item << endl;
        if (order <= 50.01)
        {
            cost = costsat1 + total;
        }
        else if (order <= 100)
        {
            cost = costsat2 + total;
        }
        else if (order <= 150)
        {
            cost = costsat3 + total;
        }
        int shipcost = order + cost;
        cout << fixed << setprecision(2);
        cout << "Your shippping cost is...........$" << cost << endl;
        cout << "You are shipping to.............." << destination << endl;
        cout << fixed << setprecision(2);
        cout << "Your total shipping costs are....$" << shipcost << endl;
        cout << setfill('-') << setw(60) << '-';
        cout << "Thank you!";
    }
    if (destination == "USA")
    {
        cout << "Your item is......................" << item << endl;
        if (order <= 50.01)
        {
            cost = costusa1 + total;
        }
        else if (order <= 100)
        {
            cost = costusa2 + total;
        }
        else if (order <= 150)
        {
            cost = costusa3 + total;
        }
        int shipcost = order + cost;
        cout << fixed << setprecision(2);
        cout << "Your shippping cost is...........$" << cost << endl;
        cout << "You are shipping to.............." << destination << endl;
        cout << fixed << setprecision(2);
        cout << "Your total shipping costs are....$" << shipcost << endl;
        cout << setfill('-') << setw(60) << '-';
        cout << "Thank you!";
    }
    //If destination is can 
    else if (destination == "CAN")
    {
        cout << "Your item is......................" << item << endl;
        if (order <= 50)
        {
            cost = costcan1 + total;
        }
        else if (order <= 100)
        {
            cost = costcan2 + total;
        }
        else if (order <= 150)
        {
            cost = costcan3 + total;
        }
        int shipcost = order + cost;
        cout << fixed << setprecision(2);
        cout << "Your shippping cost is...........$" << cost << endl;
        cout << "You are shipping to.............." << destination << endl;
        cout << fixed << setprecision(2);
        cout << "Your total shipping costs are....$" << shipcost << endl;
        cout << setfill('-') << setw(60) << '-' ;
        cout << "Thank you!";

    }
    //If destination is aus run this code
    else if (destination == "AUS")
    {
        cout << "Your item is......................" << item << endl;
        if (order <= 50)
        {
            cost = costaus1 + total;
        }
        else if (order <= 100)
        {
            cost = costaus2 + total;
        }
        else if (order <= 150)
        {
            cost = costaus3 + total;
        }
        int shipcost = order + cost;
        cout << fixed << setprecision(2);
        cout << "Your shippping cost is...........$" << cost << endl;
        cout << "You are shipping to.............." << destination << endl;
        cout << fixed << setprecision(2);
        cout << "Your total shipping costs are....$" << shipcost << endl;
        cout << setfill('-') << setw(60) << '-';
        cout << "Thank you!";
    }

    else {
        cout << "Invalid Entry, exiting" << endl;
    }
   
    return(0);
}