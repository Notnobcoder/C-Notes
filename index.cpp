#include <iostream>
using namespace std;


int main() {
  // cout << "hello world" << endl;
  // insergig value in cout and it prints those values
  // -----variables
  int a = 6; // every integer needs 4 bytes of data
  string b = "helo alsjdflkasjdfkljasdfjlkdjsflkjsdf lakdsjflkj world this is my name and this is the value "; // 24 byte size of string
  bool c = 34; // 1 byte for boolean
  // int value = a + c;
  char value = 'H'; // character shourl always be in a single brackets
  char ch = '#' ; // 1 byte for string
  cout << sizeof(ch) << " is the size" << endl;
  // explicit type conversion
  cout << (int)value << " is the value" << endl;


}
