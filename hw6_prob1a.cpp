//
//  hw6_prob1a.cpp
//  Created by Gabrielle Guarino on 3/27/17.

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string decimal_to_binary(int num){
  // 7 bit binary output string
  string return_string = "";
  int val;
  for (int i = 6; i >= 0; i--){
    val = pow(2,i);
    if (num - val >= 0){
      return_string += "1";
      num -= val;
    } else {
      return_string += "0";
    }
  }
  return return_string;
}


int main(void){

  // 7 bit input
  // 95-100 A+
  // 89-94 A
  // 83-88 A-
  // 77-82 B+
  // 71-76 B
  // 63-70 B-
  // 54-62 C+
  // 40-53 C
  // 0-39 C-
  
  // 6 bit output
  // 100100 A+
  // 100010 A
  // 100001 A-
  // 010100 B+
  // 010010 B
  // 010001 B-
  // 001100 C+
  // 001010 C
  // 001001 C-
  
  // create inputs and outputs
  cout << ".i 7\n";
  cout << ".o 6\n";
  
  for (int i = 0; i <= 100; i++){
    if (i <= 39){
      // C-
      cout << decimal_to_binary(i) << "\t" << "001001\n";
    } else if (i <= 53){
      // C
      cout << decimal_to_binary(i) << "\t" << "001010\n";
    } else if (i <= 62){
      // C+
      cout << decimal_to_binary(i) << "\t" << "001100\n";
    } else if (i <= 70){
      // B-
      cout << decimal_to_binary(i) << "\t" << "010001\n";
    } else if (i <= 76){
      // B
      cout << decimal_to_binary(i) << "\t" << "010010\n";
    } else if (i <= 82){
      // B+
      cout << decimal_to_binary(i) << "\t" << "010100\n";
    } else if (i <= 88){
      // A-
      cout << decimal_to_binary(i) << "\t" << "100001\n";
    } else if (i <= 94){
      // A
      cout << decimal_to_binary(i) << "\t" << "100010\n";
    } else{
      // A+
      cout << decimal_to_binary(i) << "\t" << "100100\n";
    }
  }
  
  cout << ".e\n";
  
  return 0;
}
