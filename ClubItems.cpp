/****************************************************************************************
 **Program Filename: ClubItems.cpp 
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This is the implimentation file for Club Items which is a child of the 
 **Items class and reduces the price of an item
 **Input: Strings for Name and Unit, Integer for Quanity, and Double for Price
 **Output: None
 ***************************************************************************************/
#include "Items.hpp"
#include "ClubItems.hpp"


//Default constructor without parameters sets Name & Unit to "", Quantity &  Price to 0
ClubItems::ClubItems()
{ setItemName("");
  setUnit("");
  setQuantity(0);
  setPrice(0.0);
}
 

//Constructor with 2 strings an interger and a double as parameters to initialize 
//Item Name, Unit, Quantity, and Price
ClubItems::ClubItems(string itemNameIn, string unitIn, int quantityIn, double priceIn)
{  setItemName(itemNameIn);
   setUnit(unitIn);
   setQuantity(quantityIn);
   setPrice(priceIn);
}


//Overloaded Set Price method sets the price to 90% of the input value
void ClubItems::setPrice(double priceIn)
{  price =(priceIn * .9);
}
