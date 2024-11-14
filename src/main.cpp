//******************************************************************************
// File name:   main.cpp
// Author:      
// Date:        
// Class:       
// Assignment:  
// Purpose:     
// Hours:       
//******************************************************************************

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main () {
  string fileName;
  ifstream inFile;
  ofstream outFile;
  int numChars = 0;
  char ch;

  // TODO #1: Open a file for reading gettysburg.txt. Prompt the user
  //          for the filename and error check that the file was opened
  //          correctly using is_open. Use a while loop.


  // TODO #2: Output the number of characters in the file. The correct answer
  //          is 1461


  // TODO #3: Ask the user to enter a file for writing to. Open the file
  //          for writing


  // TODO #4: Create a file gettysburg_formatted.txt that replaces the
  //          first blank after character 70 with a line return.
  inFile.clear ();
  inFile.seekg (0);

  inFile.close ();
  outFile.close ();

  return EXIT_SUCCESS;
}