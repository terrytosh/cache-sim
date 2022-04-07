#include "cache.h"

//Entry class methods
Entry::Entry() { tag = 0; validBit = false; ref = 0; }
Entry::~Entry() {};

void display(std::ofstream& outfile);

void Entry::setTag(int t) { tag = t; }
int Entry::getTag() { return tag; }

void Entry::setValidBit(bool v) { validBit = v; }
bool Entry::getValidBit() { return validBit; }

void Entry::setRef(int r) { ref = r; }
int Entry::getRef() { return ref; }

//Cache class methods
Cache::Cache(int e, int a) { 
  numEntries = e;
  association = a; 
}

Cache::~Cache() {}
  
void Cache::display(std::ofstream& outfile) {}
  
int Cache::getIndex(unsigned long addr) {
  return addr % (numEntries / association);
}
int Cache::getTag(unsigned long addr) { return 0; }
unsigned long Cache::getAddr(int way, int index) { return 0; }
  
bool Cache::hit(std::ofstream& outfile, unsigned long addr) { return false; }
  
void Cache::update(std::ofstream& outfile, unsigned long addr) {}

void Cache::addEntry(Entry e) { entries.push_back(e); }

void Cache::setAssociation(int a) { association = a; }
void Cache::setNumEntries(int e) { numEntries = e; }