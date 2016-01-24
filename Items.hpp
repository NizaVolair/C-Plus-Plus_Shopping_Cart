/****************************************************************************************
 **Program Filename: Items.hpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This is the header file for the Items class
 ***************************************************************************************/
#ifndef ITEMS_HPP
#define ITEMS_HPP
#include <string>

using std::string;

class Items
{  protected:
      string itemName;
      string unit;
      int quantity;
      double price;
   public:
      Items();
      Items(string, string, int, double);
      void setItemName(string);
      void setUnit(string);
      void setQuantity(int);
      void setPrice(double);
      string getItemName();
      string getUnit();
      int getQuantity();
      double getPrice();
};
#endif
