#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

void loadingBar()
{

  // 0 - black background,

  // A - Green Foreground

  system("color A");

  // Initialize char for printing

  // loading bar

  char a = 177, b = 219;

  cout << "\n\n\n\n";

  cout << "\n\n\n\n\t\t\t\t\t\t\t\t\t";

  cout << "Loading...\n\n";

  cout << "\t\t\t\t\t\t\t\t\t";

  for (int i = 0; i < 18; i++)

    cout << a;

  cout << "\r";

  cout << "\t\t\t\t\t\t\t\t\t";

  for (int i = 0; i < 18; i++)
  {

    cout << b;

    Sleep(500);
  }
}
int main()
{
  int ch;
  HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

  loadingBar();

  cout << " ";
  cout << endl;
  cout << endl;
  cout << endl;

  Sleep(2000);
  system("Color A ");

  cout << "\t\t\t\t\t\t\t\t\t\b\b\b WELCOME TO Student Management PROGRAM  \t\t\t\t\t\t\t" << endl;

  // getch();

  cout << " ";
  cout << endl;
  cout << endl;
  
  cout << "\t\t\t\t\t\t\t\t\t     CREATED BY \t\t\t\t\t\t\t\t\t" << endl;
  Sleep(1000);
  cout << " ";
  cout << endl;
  

  // getch();

  cout << "\t\t\t\t\t\t\t\t******************************************\t\t\t\t\t\t\t" << endl;

  cout << "\t\t\t\t\t\t\t\t*  \t----> Vivek Sharma     \t\t *\t\t\t\t\t\t\t" << endl;
  cout << "\t\t\t\t\t\t\t\t*  \t----> Shubham Gupta    \t\t *\t\t\t\t\t\t\t" << endl;
  cout << "\t\t\t\t\t\t\t\t*  \t----> Pranjal Gupta   \t\t *\t\t\t\t\t\t\t" << endl;

  cout << "\t\t\t\t\t\t\t\t******************************************\t\t\t\t\t\t\t" << endl;

  cout << " ";
  cout << endl;
  cout << endl;
  cout << endl;

  do
  {
    SetConsoleTextAttribute(h, 2);
    cout << "\n\t\t\t\t\t\t\t\t Main Menu for Number System Conversion :-  \t\t\t\t\t\t\t" << endl;
    Sleep(1000);

   
    cout << " ";
    cout << endl;
    cout << endl;

    // getch();

    cout << "\t\t\t\t\t\t\t******************************************************************\t\t\t\t\t\t\t" << endl;

    
    cout << " ";
    cout << endl;

    cout << "\t\t\t\t\t\t\t* \t1.  ------> Add Student\t\t *\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t* \t2.  ------> Check Record\t *\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t* \t3.  ------> Search Student\t *\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t* \t4.  ------> Show Result\t\t *\t\t\t\t\t\t\t" << endl;
    cout << "\t\t\t\t\t\t\t* \t5.  ------> Exit  \t \t *\t\t\t\t\t\t\t" << endl;

    cout << endl;

    cout << "\t\t\t\t\t\t\t******************************************************************\t\t\t\t\t\t\t" << endl;

    cout << " ";
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "\t\t\t\t\t\t\t\tEnter your Choice:";
    cin >> ch;
    switch (ch)
    {
    case 1:
      SetConsoleTextAttribute(h, 5);
      system("ir.exe");
      break;
    case 2:
      SetConsoleTextAttribute(h, 9);
      system("d.exe");
      break;
    case 3:
      SetConsoleTextAttribute(h, 3);
      system("sid.exe");
      break;
    case 4:
      SetConsoleTextAttribute(h, 3);
      system("ms.exe");
      break;
    case 5:
      SetConsoleTextAttribute(h, 1);
      cout << "\t\t\t\t\t\t\t\tGood Day.....";
      break;
    default:
      SetConsoleTextAttribute(h, 4);
      cout << "\t\t\t\t\t\t\t\tWrong Choice......\n\n";
      break;
    }
  } while (ch != 5);
}
