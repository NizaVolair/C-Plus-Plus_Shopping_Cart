/****************************************************************************************
 **Program Filename: Items.cpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This is the implimentation file for the Iems class which sets and gets
 **Item Name, Unit, Quantity, and Price
 **Input: Strings for Name and Unit, Integer for Quanity, and Double for Price
 **Output: Displays Name, Unit, Quanity, and Price for an Item
 ***************************************************************************************/
#include "Items.hpp"
#include <string>


//Default constructor without parameters sets Name & Unit to "", Quantity &  Price to 0
Items::Items()
{ setItemName("");
  setUnit("");
  setQuantity(0);
  setPrice(0.0);
}
 

//Constructor with 2 strings an interger and a double as parameters to initialize 
//Item Name, Unit, Quantity, and Price
Items::Items(string itemNameIn, string unitIn, int quantityIn, double priceIn)
{  setItemName(itemNameIn);
   setUnit(unitIn);
   setQuantity(quantityIn);
   setPrice(priceIn);
}


//Set Methods
void Items::setItemName(string nameIn)
{  itemName = nameIn;
}
void Items::setUnit(string unitIn)
{  unit = unitIn;
}
void Items::setQuantity(int quantityIn)
{  quantity = quantityIn;
}
void Items::setPrice(double priceIn)
{  price = priceIn;
}


//Get Methods
string Items::getItemName()
{  return itemName;
}
string Items::getUnit()
{  return unit;
}
int Items::getQuantity()
{  return quantity;
}
double Items::getPrice()
{  return price;
}


