#ifndef ENTRY_H
#define ENTRY_H

#include "entry.h"

Entry::Entry() { tag = 0; validBit = false; ref = 0; }
Entry::~Entry() {};

void display(std::ofstream& outfile);

void Entry::setTag(int t) { tag = t; }
int Entry::getTag() { return tag; }

void Entry::setValidBit(bool v) { validBit = v; }
bool Entry::getValidBit() { return validBit; }

void Entry::setRef(int r) { ref = r; }
int Entry::getRef() { return ref; }

#endif