#pragma once
#include <vector>
#include <iostream>

class Ship {
 public:
   Ship();
   Ship(int size, bool vertical);
   int check_status();
   void mark_damaged_part(int x, int y);

   int size_;
   bool vertical_;
   std::pair<int, int> coordinates_;
   std::vector<bool> damages_;
};