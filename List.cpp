/****************************************************************************************
 **Program Filename: List.cpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This is the implimentation file for the Lsit Class which adds, removes 
 **Items objects from a list and displays the list of Items with their prices and total
 **Input: Item objects
 **Output: Prompts, list of Items, prices of items including subtotals and totals
 ***************************************************************************************/
#include "List.hpp"
#include "Items.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::fixed;
using std::showpoint;
using std::setprecision;

/****************************************************************************************
 Function: Add Item
 Description: Adds an Item to the list vector
 Parameters: Item object
 Pre-Conditions: Item object has been created
 Post-Conditions: Item object is added to list vector
 ***************************************************************************************/
void List::addItem(Items itemIn)
{  list.push_back(itemIn);
}


/****************************************************************************************
 Function: Delete Item
 Description: Deletes an Item from list vector
 Parameters: Integer of the Item Number to be removed
 Pre-Conditions: Item Number is passed
 Post-Conditions: Item object with corresponding Item Number is deleted from list vector
 **or an error message displays
 ***************************************************************************************/
void List::deleteItem(int itemNumberIn)
{   //Iterate though list vector searching for Item Number
   for(int i = 0; i < list.size(); i++)
   {  //if Item Number is found delete Item and display confirmation
      if(i == (itemNumberIn -1))
      {	 list.erase(list.begin() + (itemNumberIn -1));
	 cout << "Item Deleted" << endl;
      }
   }
   //redisplay list with updated numbers
   display();
}


/****************************************************************************************
 Function:i Display
 Description: Displays all Items in list vector with subtotals and total
 Parameters: None
 Pre-Conditions: List object must be created 
 Post-Conditions: Object information for ojects on list, subtotals, and totals display
 ***************************************************************************************/
void List::display()
{  //Create integer for Item Numbers and double for Total
   int itemNumber = 1;
   double total;

   //Check to see if list vector is empty or display list Item information in a loop
   if(list.size() == 0)
   {  cout << "Grocery List Empty\n" << endl;
   }
   else
   {  cout << "$$$ Grocery List $$$\n" << endl;
      for(int i = 0; i < list.size(); i++)
      {	 cout << fixed << showpoint << setprecision(2);
	 cout << "Item Number: " << itemNumber << endl;
	 cout << "Name: " << list[i].getItemName() << endl;
	 cout << "Unit: " << list[i].getUnit() << endl;
	 cout << "Quantity: " << list[i].getQuantity() << endl;
	 cout << "Price: " << list[i].getPrice() << endl;
	 cout << "Subtotal: " << ((list[i].getPrice()) * (list[i].getQuantity())) << endl;
	 cout << endl;
	 itemNumber++;     
      }
      //Calculate the total price of all the subtotals
      for(int i = 0; i < list.size(); i++)
      {  total += ((list[i].getPrice()) * (list[i].getQuantity()));
      }
      cout << "Total: " << total << endl << endl;   
   }
}
