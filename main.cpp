#include <iostream>
using namespace std;

int main() 
{

  int length, width, perimeter, area;
  //read length and width of rectangle
  cout << "What is the length of the rectangle? ";
  cin >> length;

   cout << "What is the width of the rectangle? ";
    cin >> width; 
  //compute perimeter
    perimeter = (length * 2) + (width * 2);
  //compute area
    area = length * width;
  //display all info
  cout << "length = " << length << endl;
  cout << "width = " << width << endl;
  cout << "perimeter of rectangle = " << perimeter << endl;
  cout << "area of rectangle = " << area << endl;
  return 0;
}