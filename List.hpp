/****************************************************************************************
 **Program Filename: List.hpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: Header file for the List Class
 ***************************************************************************************/
#ifndef LIST_HPP
#define LIST_HPP
#include "Items.hpp"
#include <vector>

using std::vector;

class List
{  private:
      vector<Items> list;
      int itemNumber;
   public:
      void addItem(Items);
      void deleteItem(int);
      void display();
};
#endif
