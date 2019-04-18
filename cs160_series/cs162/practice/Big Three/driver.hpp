#pragma once
#include "header.hpp"
class driver{
  
  private:
  string driver_names;
  
  public:
  driver();
  ~driver();
  void set_names(string);
  string get_names();
  driver(const driver&);
  void operator=(const driver&);
  
};