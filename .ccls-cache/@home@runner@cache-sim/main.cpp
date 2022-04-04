#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;
  
int main(int argc, char*argv[]) {

  /* check if the correct number of arguments have been passed; bail otherwise */
  if (argc < 4) {
    cout << "Usage: " << endl;
    cout << "   ./cache num_entries associativity filename" << endl;
    return 0;
  }

  /* get args; all args come in as strings; need to convert to int with atoi() */
  unsigned entries = atoi(argv[1]);
  unsigned assoc = atoi(argv[2]);

  string input_filename = argv[3];
  string output_filename = "cache_sim_output";

  /* create input and output files streams */
  ofstream output;
  ifstream input;

  // /* print the args */
  // cout << "Number of entries: " << entries << endl;
  // cout << "Associativity: " << assoc << endl;
  // cout << "Input File Name: " << input_filename << endl;

  
  
  return 0;
}