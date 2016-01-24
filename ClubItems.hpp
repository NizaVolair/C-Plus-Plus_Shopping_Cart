/****************************************************************************************
 **Program Filename: ClubItems.hpp
 **Author: Niza Volair
 **Date: 04-25-15
 **Description: This is the header file for Club Items which is a child class of Items
 ***************************************************************************************/
#ifndef CLUBITEMS_HPP
#define CLUBITEMS_HPP

class ClubItems:public Items
{  public:
      ClubItems();
      ClubItems(string, string, int, double);
      void setPrice(double);
};
#endif
