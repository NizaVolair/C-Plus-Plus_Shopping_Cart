/****************************************************************************************
 **Program Filename: Shop.cpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This programs allows the user to add items to a shopping list at regular 
 **or sale price, display the list and subtotal of the price
 **Input: The use inputs a choice of what to do and name, unit, quanitity, price of items
 **Output: Program displays prompts and item list and well as subtotal
 ***************************************************************************************/
#include <iostream>
#include <string>
#include <cctype>
#include "List.hpp"
#include "Items.hpp"
#include "ClubItems.hpp"
#include <iostream>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::getline;

int main()
{
   //Create List, Item, and CLubItem objects
   List listObj;
   Items itemObj;
   ClubItems clubItemObj;

   //Create user variables for choice, name, unit, quantity, and price
   int choice, userQuantity, userItemNumber;
   double userPrice;
   string userItemName, userUnit;
   char clubMember, clubItem;

   //Determine if the user is a Club Member
   cout << endl << "$$$$$$$$$$ Grocery Time $$$$$$$$$$$$\n" << endl;
   cout << "Are you a Grocery Club Member? (y/n)\n";
   cout << "Please enter selection: ";
   //Loop to get correct input
   do
   {  cin >> clubMember;
      if((clubMember != 'y') && (clubMember != 'n'))
      {	 cout << endl << "Error: Please enter 'y' or 'n' to continue: \n" << endl;
      }
   } while ((clubMember != 'y') && (clubMember != 'n'));

   //Display menu and get user input in a loop to run until user exits
   cout << endl << "$$$ Make a Grocery List $$$\n";
   do
   {  cout << "1) Add Item to Grocery List\n";
      cout << "2) Remove Item from Grocery List\n";
      cout << "3) Display Grocery List\n";
      cout << "4) Exit Grocery List\n" << endl;
      cout << "Please enter selection: ";
      //Loop to get correct input
      do
      {	 cin >> choice;
	 cout << endl;
	 if((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4))
	 {  cout << "Error: Please enter '1' '2' '3' or '4' to continue: ";
	 }
      } while ((choice != 1) && (choice != 2) && (choice != 3) && (choice != 4));
      
      //In switch statement perform user selection
      switch(choice)
      {
	 case 1:  //Get user item input and add Item or Club Item to List 
	       cout << "$$$ Enter Item Information $$$\n";
	       cout << "Name: ";
	       cin.ignore();
	       getline(cin, userItemName);
	       cout << "Unit: ";
	       getline(cin, userUnit);
	       cout << "Quantity: ";
	       cin >> userQuantity;
	       cout << "Price: ";
	       cin >> userPrice;
	       cout << endl;
	       if(clubMember == 'y')
	       {  cout << "Is this a Club Item? (y/n)\n";
		  cout << "Please enter selection: ";
	          //Loop to get correct input
		  do
		  {  cin >> clubItem;
		     cout << endl;
		     if((clubItem != 'y') && (clubItem != 'n'))
		     {  cout << "Error: Please enter 'y' or 'n' to continue: ";
		     }
		  } while ((clubItem != 'y') && (clubItem != 'n'));
	          //Call appropriate method depending on Item/Club Item status and add to List
		  if(clubItem == 'n')
		  {  itemObj.setItemName(userItemName);
		     itemObj.setUnit(userUnit);
		     itemObj.setQuantity(userQuantity);
		     itemObj.setPrice(userPrice);
		     listObj.addItem(itemObj);
		  }  
		  if(clubItem == 'y')
		  {  clubItemObj.setItemName(userItemName);
		     clubItemObj.setUnit(userUnit);
		     clubItemObj.setQuantity(userQuantity);
		     clubItemObj.setPrice(userPrice);
		     listObj.addItem(clubItemObj); 
		  }
	       }
	       else
	       {  itemObj.setItemName(userItemName);
	          itemObj.setUnit(userUnit);
	          itemObj.setQuantity(userQuantity);
	          itemObj.setPrice(userPrice);
	          listObj.addItem(itemObj);
	       }
	       break;
	 case 2:  //Get user item number input and call Delete Item method
	       cout << "$$$ Enter Item Information $$$\n";
	       cout << "What is the number of the item you would like to remove?\n";
	       cout << "Please enter selection: ";
	       cin >> userItemNumber;
	       listObj.deleteItem(userItemNumber);
	       break;
	 case 3:  //Call Display method to show the list and total
	       listObj.display();
	       break;
	 case 4:  //Display goodbye message
	       cout << "$$$ Goodbye $$$\n" << endl;
	       break;
      }

   } while (choice != 4);
   
   return 0;
}
