#include "header.hpp"
#include "driver.hpp"
class vehicle{
  
  private:
  string type;
  int wheels;
  driver *drivers;
  int num_drivers;
  
  public:
  vehicle();
  ~vehicle();
  
  void set_type(string);
  void set_wheels(int);
  void set_driver_name();
  void set_num_drivers(int);
  
  int get_num_drivers();
  string get_type();
  int get_wheels();
  driver* get_driver_name();
  
  vehicle(const vehicle&);
  void operator=(const vehicle&);
  
};