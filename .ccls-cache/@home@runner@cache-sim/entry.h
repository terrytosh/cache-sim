#include <iostream>
#include <fstream>

class Entry {
public:
  Entry();
  ~Entry();
  void display(std::ofstream& outfile);
  void setTag(int tag);
  int getTag();
  void setValidBit(bool valid);
  bool getValidBit();
  void setRef(int ref);
  int getRef();

private:
  unsigned tag;
  bool validBit;
  int ref;
};