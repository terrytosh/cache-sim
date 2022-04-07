#include <vector>
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

class Cache {
public:
  Cache();
  ~Cache();
  void display(std::ofstream& outfile);
  int getIndex(unsigned long addr);
  int getTag(unsigned long addr);
  unsigned long getAddr(int way, int index);
  bool hit(std::ofstream& outfile, unsigned long addr);
  void update(std::ofstream& outfile, unsigned long addr);
  void addEntry(Entry e);
  void setAssociation(int a);
  void setNumEntries(int e);

private:
  int association;
  int numSets;
  int numEntries;
  std::vector<Entry> entries;
};