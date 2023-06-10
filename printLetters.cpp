#include <iostream>
using namespace std;

int main ()
{

  int SIZE = 12;
  int ROWS = 2;
  int COLS = 2;


  string letters[2][2][3] = {
    {
     {"A", "B", "C"},
     {"D", "E", "F"}
     },
    {
     {"G", "H", "I"},
     {"J", "K", "L"}
     }
  };

   // Getting the 3D array

  for (int i = 0; i < ROWS; i++)
    {
      for (int j = 0; j < COLS; j++)
	{
	  for (int k = 0; k < SIZE; k++)
	    {
	      letters[i][j][k];
	    }
	}
    }


  // Displaying the 3D array
  for (int i = 0; i < ROWS; i++)
    {
      for (int j = 0; j < COLS; j++)
	{
	  for (int k = 0; k < SIZE; k++)
	    {
	      std::cout << letters[i][j][k] << " ";
	    }
	  std::cout << std::endl;
	}
      std::cout << std::endl;
    }

  return 0;
}
