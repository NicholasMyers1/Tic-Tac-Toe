#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
cout<<"Welcome to tic-tac-toe!\n";
char a = '1', b = '2',c = '3',d = '4',e = '5',f = '6',g = '7',h = '8',i = '9',playero,playerx,plb,emh;
int chp,mainstring,won,nomove,compplay;
/////
cout<<"Would you like to play against the computer or against another player?\n"
"'1' for computer, '2' for regular play, or anything else for regular play: ";
cin>>compplay;
if (compplay == 1){system("CLS");cout<<"Computer play was chosen:\n";}
//modifying
if (compplay == 1)
{cout<<"Would you like to play easy medium or hard?\n'1' for easy, '2' for medium, or '3' for hard?\nOr '4' for computer against computer (Computer is completely random for that): ";
cin>>emh;if (emh != '1' && emh != '2' && emh != '3' && emh != '4'){system("CLS");cout<<"Error:\n";cout<<"By your error you have chosen hard!";Sleep(1000);system("CLS");emh = '3';}}
////////done modifying this don't touch this part (above)
else if (compplay != 1){compplay != 1;}
//~
while (compplay == 1 && emh == '4') switch (compplay){
case 1:
system("CLS");cout<<"Computers turn for 'O'...\n";
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of the computers have won due to no moves availabe to win!\n";
{Sleep(2500);system("CLS");return main();}}
int random;
//
if (compplay == 4){cout<<"Computers turn for 'O'...\n";}
//
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);
random = rand() % 9 + 1;
cout<<"\nThe computer chose the spot of: ";cout<<random;Sleep(2500);
//errors state 1
while (random == 1 && a == 'O' || random == 1 && a == 'X' || random == 2 && b == 'O' || random == 2 && b == 'X' ||
random == 3 && c == 'O' || random == 3 && c == 'X' || random == 4 && d == 'O' || random == 4 && d == 'X' ||
random == 5 && e == 'O' || random == 5 && e == 'X' || random == 6 && f == 'O' || random == 6 && f == 'X' ||
random == 7 && g == 'O' || random == 7 && g == 'X' || random == 8 && h == 'O' || random == 8 && h == 'X' ||
random == 9 && i == 'O' || random == 9 && i == 'X')
{system("CLS");cout<<"The computer made an invalid move! Spot taken already! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
random = rand() % 9 + 1;
cout<<"The computer chose the spot of: ";cout<<random;Sleep(2500);
///////////////////////DO NOT MESS WITH THINGS ABOVE THIS, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){break;}
}
/////
/////end error state 1
//states
if (random == 1 && a != 'X'){a = 'O';}
if (random == 2 && b != 'X'){b = 'O';}
if (random == 3 && c != 'X'){c = 'O';}
if (random == 4 && d != 'X'){d = 'O';}
if (random == 5 && e != 'X'){e = 'O';}
if (random == 6 && f != 'X'){f = 'O';}
if (random == 7 && g != 'X'){g = 'O';}
if (random == 8 && h != 'X'){h = 'O';}
if (random == 9 && i != 'X'){i = 'O';}
//win state:
if (a == 'O' && b == 'O' && c == 'O' || d == 'O' && e == 'O' && f == 'O'|| g == 'O' && h == 'O' && i == 'O' || a == 'O' && d == 'O' && 
g == 'O' || b == 'O' && e == 'O' && h == 'O' || c == 'O' && f == 'O' && i == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && 
e == 'O' && g == 'O')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat computer 'X' -_-\n";{Sleep(2500);system("CLS");return main();}}
//
{compplay = 5;system("CLS");
{
/////
}}//EEEEENNNNNDDDDD HHHHHAAAAARRRRRDDDDD
///////////////////////////////////////////////////////////////////////////////////////////////////for computer::::::::::::::
case 2:
if (compplay == 5)
cout<<"Computers turn for 'X'...\n";
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of the computers have won due to no moves availabe to win!\n";
{Sleep(2500);system("CLS");return main();}}
//
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);
random = rand() % 9 + 1;
cout<<"\nThe computer chose the spot of: ";cout<<random;Sleep(2500);
//errors state 1
while (random == 1 && a == 'O' || random == 1 && a == 'X' || random == 2 && b == 'O' || random == 2 && b == 'X' ||
random == 3 && c == 'O' || random == 3 && c == 'X' || random == 4 && d == 'O' || random == 4 && d == 'X' ||
random == 5 && e == 'O' || random == 5 && e == 'X' || random == 6 && f == 'O' || random == 6 && f == 'X' ||
random == 7 && g == 'O' || random == 7 && g == 'X' || random == 8 && h == 'O' || random == 8 && h == 'X' ||
random == 9 && i == 'O' || random == 9 && i == 'X')
{system("CLS");cout<<"The computer made an invalid move! Spot taken already! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
random = rand() % 9 + 1;
cout<<"The computer chose the spot of: ";cout<<random;Sleep(2500);
///////////////////////DO NOT MESS WITH THINGS ABOVE THIS, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){break;}
}
/////
/////end error state 1
//states
if (random == 1 && a != 'O'){a = 'X';}
if (random == 2 && b != 'O'){b = 'X';}
if (random == 3 && c != 'O'){c = 'X';}
if (random == 4 && d != 'O'){d = 'X';}
if (random == 5 && e != 'O'){e = 'X';}
if (random == 6 && f != 'O'){f = 'X';}
if (random == 7 && g != 'O'){g = 'X';}
if (random == 8 && h != 'O'){h = 'X';}
if (random == 9 && i != 'O'){i = 'X';}
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat computer 'O' -_-\n";{Sleep(2500);system("CLS");return main();}}
//
{compplay = 1;emh = '4';system("CLS");
{
}}}//EEEEENNNNNDDDDD HHHHHAAAAARRRRRDDDDD
/////////////////////////////////////////////////////////////////end computer play
////////////////////////////////////////////EEEEEAAAAASSSSSYYYYY
while (compplay == 1 && emh == '1') switch (compplay){
case 1:system("CLS");cout<<"Easy computer play:\n";
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//case 1 part 1 FINISHED need computer part now
//case 3 is done/finish case 2 and case 1
//no move win part
//
if (compplay == 1)
{cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";
cin>>plb;
//errorstates
while (plb != '1' && plb != '2' && plb != '3' && plb != '4' && plb != '5' && plb != '6' && plb != '7' && plb != '8' && plb != '9' ||
plb == '1' && a == 'O' || plb == '1' && a == 'X' ||
plb == '2' && b == 'O' || plb == '2' && b == 'X' ||
plb == '3' && c == 'O' || plb == '3' && c == 'X' ||
plb == '4' && d == 'O' || plb == '4' && d == 'X' ||
plb == '5' && e == 'O' || plb == '5' && e == 'X' ||
plb == '6' && f == 'O' || plb == '6' && f == 'X' ||
plb == '7' && g == 'O' || plb == '7' && g == 'X' ||
plb == '8' && h == 'O' || plb == '8' && h == 'X' ||
plb == '9' && i == 'O' || plb == '9' && i == 'X')
{system("CLS");cout<<"Invalid move! Spot taken already or invalid variable! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";cin>>plb;}
//end errorstates
if (plb == a){a = 'O';}if (plb == b){b = 'O';}if (plb == c){c = 'O';}
if (plb == d){d = 'O';}if (plb == e){e = 'O';}if (plb == f){f = 'O';}
if (plb == g){g = 'O';}if (plb == h){h = 'O';}if (plb == i){i = 'O';}
//win state:
if (a == 'O' && b == 'O' && c == 'O' || d == 'O' && e == 'O' && f == 'O'|| g == 'O' && h == 'O' && i == 'O' || a == 'O' && d == 'O' && 
g == 'O' || b == 'O' && e == 'O' && h == 'O' || c == 'O' && f == 'O' && i == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && 
e == 'O' && g == 'O')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"You have beat the computer!\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}
mainstring = 0;chp = 2;}
//end win
///////////////////
////////////////////////////////////
{system("CLS");compplay = 2;}
//case 2 part 1 COMPUTER PART
case 2:
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
int random;
//
if (compplay == 2){cout<<"Computers turn for 'O':\n";}
//
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);
//computer is extremely hard to beat from here on:
///////////////////////////////MESS WITH THINGS FROM HERE ON:
//17
if (a == 'O' && c == 'O' && b != 'O' && b != 'X' || a == 'X' && c == 'X' && b != 'X' && b != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<b;Sleep(1250);b = 'X';system("CLS");break;}
//18
if (d == 'O' && f == 'O' && e != 'O' && e != 'X' || d == 'X' && f == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//19
if (g == 'O' && i == 'O' && h != 'O' && h != 'X' || g == 'X' && i == 'X' && h != 'X' && h != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<h;Sleep(1250);h = 'X';system("CLS");break;}
//20
if (a == 'O' && g == 'O' && d != 'O' && d != 'X' || a == 'X' && g == 'X' && d != 'X' && d != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<d;Sleep(1250);d = 'X';system("CLS");break;}
//21
if (b == 'O' && h == 'O' && e != 'O' && e != 'X' || b == 'X' && h == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//22
if (c == 'O' && i == 'O' && f != 'O' && f != 'X' || c == 'X' && i == 'X' && f != 'X' && f != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<f;Sleep(1250);f = 'X';system("CLS");break;}
//23
if (a == 'O' && i == 'O' && e != 'O' && e != 'X' || a == 'X' && i == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//24
if (c == 'O' && g == 'O' && e != 'O' && e != 'X' || c == 'X' && g == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//end of closed 17-24
///////////////////////DO NOT MESS WITH THINGS HERE ON, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//closed random generator for 1-9(computer)
random = rand() % 9 + 1;
cout<<"\nThe computer chose the spot of: ";cout<<random;Sleep(1250);
//errors state 1
while (random == 1 && a == 'O' || random == 1 && a == 'X' || random == 2 && b == 'O' || random == 2 && b == 'X' ||
random == 3 && c == 'O' || random == 3 && c == 'X' || random == 4 && d == 'O' || random == 4 && d == 'X' ||
random == 5 && e == 'O' || random == 5 && e == 'X' || random == 6 && f == 'O' || random == 6 && f == 'X' ||
random == 7 && g == 'O' || random == 7 && g == 'X' || random == 8 && h == 'O' || random == 8 && h == 'X' ||
random == 9 && i == 'O' || random == 9 && i == 'X')
{system("CLS");cout<<"The computer made an invalid move! Spot taken already! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
random = rand() % 9 + 1;
cout<<"The computer chose the spot of: ";cout<<random;Sleep(1250);
///////////////////////DO NOT MESS WITH THINGS ABOVE THIS, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){break;}
}
/////
/////end error state 1
//states
if (random == 1 && a != 'O'){a = 'X';}
if (random == 2 && b != 'O'){b = 'X';}
if (random == 3 && c != 'O'){c = 'X';}
if (random == 4 && d != 'O'){d = 'X';}
if (random == 5 && e != 'O'){e = 'X';}
if (random == 6 && f != 'O'){f = 'X';}
if (random == 7 && g != 'O'){g = 'X';}
if (random == 8 && h != 'O'){h = 'X';}
if (random == 9 && i != 'O'){i = 'X';}
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//
{compplay = 1;system("CLS");}
}
/////
}//EEEEENNNNNDDDDD EEEEEAAAAASSSSSYYYYY
////////////////////////////////////////////MMMMMEEEEEDDDDDIIIIIUUUUUMMMMM
while (compplay == 1 && emh == '2') switch (compplay){
case 1:system("CLS");cout<<"Medium computer play:\n";
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//case 1 part 1 FINISHED need computer part now
//case 3 is done/finish case 2 and case 1
//no move win part
//
if (compplay == 1)
{cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";
cin>>plb;
//errorstates
while (plb != '1' && plb != '2' && plb != '3' && plb != '4' && plb != '5' && plb != '6' && plb != '7' && plb != '8' && plb != '9' ||
plb == '1' && a == 'O' || plb == '1' && a == 'X' ||
plb == '2' && b == 'O' || plb == '2' && b == 'X' ||
plb == '3' && c == 'O' || plb == '3' && c == 'X' ||
plb == '4' && d == 'O' || plb == '4' && d == 'X' ||
plb == '5' && e == 'O' || plb == '5' && e == 'X' ||
plb == '6' && f == 'O' || plb == '6' && f == 'X' ||
plb == '7' && g == 'O' || plb == '7' && g == 'X' ||
plb == '8' && h == 'O' || plb == '8' && h == 'X' ||
plb == '9' && i == 'O' || plb == '9' && i == 'X')
{system("CLS");cout<<"Invalid move! Spot taken already or invalid variable! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";cin>>plb;}
//end errorstates
if (plb == a){a = 'O';}if (plb == b){b = 'O';}if (plb == c){c = 'O';}
if (plb == d){d = 'O';}if (plb == e){e = 'O';}if (plb == f){f = 'O';}
if (plb == g){g = 'O';}if (plb == h){h = 'O';}if (plb == i){i = 'O';}
//win state:
if (a == 'O' && b == 'O' && c == 'O' || d == 'O' && e == 'O' && f == 'O'|| g == 'O' && h == 'O' && i == 'O' || a == 'O' && d == 'O' && 
g == 'O' || b == 'O' && e == 'O' && h == 'O' || c == 'O' && f == 'O' && i == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && 
e == 'O' && g == 'O')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"You have beat the computer!\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}
mainstring = 0;chp = 2;}
//end win
///////////////////
////////////////////////////////////
{system("CLS");compplay = 2;}
//case 2 part 1 COMPUTER PART
case 2:
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
int random;
//
if (compplay == 2){cout<<"Computers turn...\n";}
//
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);
//computer is extremely hard to beat from here on:
///////////////////////////////MESS WITH THINGS FROM HERE ON:
//1
if (a == 'O' && b == 'O' && c != 'O' && c != 'X' || a == 'X' && b == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//2
if (b == 'O' && c == 'O' && a != 'O' && a != 'X' || b == 'X' && c == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//3
if (d == 'O' && e == 'O' && f != 'O' && f != 'X' || d == 'X' && e == 'X' && f != 'X' && f != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<f;Sleep(1250);f = 'X';system("CLS");break;}
//4
if (e == 'O' && f == 'O' && d != 'O' && d != 'X' || e == 'X' && f == 'X' && d != 'X' && d != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<d;Sleep(1250);d = 'X';system("CLS");break;}
//5
if (g == 'O' && h == 'O' && i != 'O' && i != 'X' || g == 'X' && h == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//6
if (h == 'O' && i == 'O' && g != 'O' && g != 'X' || h == 'X' && i == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//7
if (a == 'O' && d == 'O' && g != 'O' && g != 'X' || g == 'X' && d == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//8
if (d == 'O' && g == 'O' && a != 'O' && a != 'X' || d == 'X' && g == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//9
if (b == 'O' && e == 'O' && h != 'O' && h != 'X' || b == 'X' && e == 'X' && h != 'X' && h != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<h;Sleep(1250);h = 'X';system("CLS");break;}
//10
if (e == 'O' && h == 'O' && b != 'O' && b != 'X' || e == 'X' && h == 'X' && b != 'X' && b != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<b;Sleep(1250);b = 'X';system("CLS");break;}
//11
if (c == 'O' && f == 'O' && i != 'O' && i != 'X' || c == 'X' && f == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//12
if (f == 'O' && g == 'O' && c != 'O' && c != 'X' || f == 'X' && g == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//13
if (a == 'O' && e == 'O' && i != 'O' && i != 'X' || a == 'X' && e == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//14
if (e == 'O' && i == 'O' && a != 'O' && a != 'X' || e == 'X' && i == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//15
if (c == 'O' && e == 'O' && g != 'O' && g != 'X' || c == 'X' && e == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//16
if (e == 'O' && g == 'O' && c != 'O' && c != 'X' || e == 'X' && g == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//end of closed 1-16
///////////////////////DO NOT MESS WITH THINGS HERE ON, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//closed random generator for 1-9(computer)
random = rand() % 9 + 1;
cout<<"\nThe computer chose the spot of: ";cout<<random;Sleep(1250);
//errors state 1
while (random == 1 && a == 'O' || random == 1 && a == 'X' || random == 2 && b == 'O' || random == 2 && b == 'X' ||
random == 3 && c == 'O' || random == 3 && c == 'X' || random == 4 && d == 'O' || random == 4 && d == 'X' ||
random == 5 && e == 'O' || random == 5 && e == 'X' || random == 6 && f == 'O' || random == 6 && f == 'X' ||
random == 7 && g == 'O' || random == 7 && g == 'X' || random == 8 && h == 'O' || random == 8 && h == 'X' ||
random == 9 && i == 'O' || random == 9 && i == 'X')
{system("CLS");cout<<"The computer made an invalid move! Spot taken already! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
random = rand() % 9 + 1;
cout<<"The computer chose the spot of: ";cout<<random;Sleep(1250);
///////////////////////DO NOT MESS WITH THINGS ABOVE THIS, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){break;}
}
/////
/////end error state 1
//states
if (random == 1 && a != 'O'){a = 'X';}
if (random == 2 && b != 'O'){b = 'X';}
if (random == 3 && c != 'O'){c = 'X';}
if (random == 4 && d != 'O'){d = 'X';}
if (random == 5 && e != 'O'){e = 'X';}
if (random == 6 && f != 'O'){f = 'X';}
if (random == 7 && g != 'O'){g = 'X';}
if (random == 8 && h != 'O'){h = 'X';}
if (random == 9 && i != 'O'){i = 'X';}
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//
{compplay = 1;system("CLS");}
}
/////
}//EEEEENNNNNDDDDD MMMMMEEEEEDDDDDIIIIIUUUUUMMMMM
////////////////////////////////////////////HHHHHAAAAARRRRRDDDDD
while (compplay == 1 && emh == '3') switch (compplay){
case 1:system("CLS");cout<<"Hard computer play:\n";
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//case 1 part 1 FINISHED need computer part now
//case 3 is done/finish case 2 and case 1
//no move win part
//
if (compplay == 1)
{cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";
cin>>plb;
//errorstates
while (plb != '1' && plb != '2' && plb != '3' && plb != '4' && plb != '5' && plb != '6' && plb != '7' && plb != '8' && plb != '9' ||
plb == '1' && a == 'O' || plb == '1' && a == 'X' ||
plb == '2' && b == 'O' || plb == '2' && b == 'X' ||
plb == '3' && c == 'O' || plb == '3' && c == 'X' ||
plb == '4' && d == 'O' || plb == '4' && d == 'X' ||
plb == '5' && e == 'O' || plb == '5' && e == 'X' ||
plb == '6' && f == 'O' || plb == '6' && f == 'X' ||
plb == '7' && g == 'O' || plb == '7' && g == 'X' ||
plb == '8' && h == 'O' || plb == '8' && h == 'X' ||
plb == '9' && i == 'O' || plb == '9' && i == 'X')
{system("CLS");cout<<"Invalid move! Spot taken already or invalid variable! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";cin>>plb;}
//end errorstates
if (plb == a){a = 'O';}if (plb == b){b = 'O';}if (plb == c){c = 'O';}
if (plb == d){d = 'O';}if (plb == e){e = 'O';}if (plb == f){f = 'O';}
if (plb == g){g = 'O';}if (plb == h){h = 'O';}if (plb == i){i = 'O';}
//win state:
if (a == 'O' && b == 'O' && c == 'O' || d == 'O' && e == 'O' && f == 'O'|| g == 'O' && h == 'O' && i == 'O' || a == 'O' && d == 'O' && 
g == 'O' || b == 'O' && e == 'O' && h == 'O' || c == 'O' && f == 'O' && i == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && 
e == 'O' && g == 'O')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"You have beat the computer!\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}
mainstring = 0;chp = 2;}
//end win
///////////////////
////////////////////////////////////
{system("CLS");compplay = 2;}
//case 2 part 1 COMPUTER PART
case 2:
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
int random;
//
if (compplay == 2){cout<<"Computers turn...\n";}
//
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);
//computer is extremely hard to beat from here on:
///////////////////////////////MESS WITH THINGS FROM HERE ON:
//1
if (a == 'O' && b == 'O' && c != 'O' && c != 'X' || a == 'X' && b == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//2
if (b == 'O' && c == 'O' && a != 'O' && a != 'X' || b == 'X' && c == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//3
if (d == 'O' && e == 'O' && f != 'O' && f != 'X' || d == 'X' && e == 'X' && f != 'X' && f != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<f;Sleep(1250);f = 'X';system("CLS");break;}
//4
if (e == 'O' && f == 'O' && d != 'O' && d != 'X' || e == 'X' && f == 'X' && d != 'X' && d != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<d;Sleep(1250);d = 'X';system("CLS");break;}
//5
if (g == 'O' && h == 'O' && i != 'O' && i != 'X' || g == 'X' && h == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//6
if (h == 'O' && i == 'O' && g != 'O' && g != 'X' || h == 'X' && i == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//7
if (a == 'O' && d == 'O' && g != 'O' && g != 'X' || g == 'X' && d == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//8
if (d == 'O' && g == 'O' && a != 'O' && a != 'X' || d == 'X' && g == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//9
if (b == 'O' && e == 'O' && h != 'O' && h != 'X' || b == 'X' && e == 'X' && h != 'X' && h != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<h;Sleep(1250);h = 'X';system("CLS");break;}
//10
if (e == 'O' && h == 'O' && b != 'O' && b != 'X' || e == 'X' && h == 'X' && b != 'X' && b != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<b;Sleep(1250);b = 'X';system("CLS");break;}
//11
if (c == 'O' && f == 'O' && i != 'O' && i != 'X' || c == 'X' && f == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//12
if (f == 'O' && g == 'O' && c != 'O' && c != 'X' || f == 'X' && g == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//13
if (a == 'O' && e == 'O' && i != 'O' && i != 'X' || a == 'X' && e == 'X' && i != 'X' && i != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<i;Sleep(1250);i = 'X';system("CLS");break;}
//14
if (e == 'O' && i == 'O' && a != 'O' && a != 'X' || e == 'X' && i == 'X' && a != 'X' && a != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<a;Sleep(1250);a = 'X';system("CLS");break;}
//15
if (c == 'O' && e == 'O' && g != 'O' && g != 'X' || c == 'X' && e == 'X' && g != 'X' && g != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<g;Sleep(1250);g = 'X';system("CLS");break;}
//16
if (e == 'O' && g == 'O' && c != 'O' && c != 'X' || e == 'X' && g == 'X' && c != 'X' && c != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<c;Sleep(1250);c = 'X';system("CLS");break;}
//end of closed 1-16 now open 17-24:
//17
if (a == 'O' && c == 'O' && b != 'O' && b != 'X' || a == 'X' && c == 'X' && b != 'X' && b != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<b;Sleep(1250);b = 'X';system("CLS");break;}
//18
if (d == 'O' && f == 'O' && e != 'O' && e != 'X' || d == 'X' && f == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//19
if (g == 'O' && i == 'O' && h != 'O' && h != 'X' || g == 'X' && i == 'X' && h != 'X' && h != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<h;Sleep(1250);h = 'X';system("CLS");break;}
//20
if (a == 'O' && g == 'O' && d != 'O' && d != 'X' || a == 'X' && g == 'X' && d != 'X' && d != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<d;Sleep(1250);d = 'X';system("CLS");break;}
//21
if (b == 'O' && h == 'O' && e != 'O' && e != 'X' || b == 'X' && h == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//22
if (c == 'O' && i == 'O' && f != 'O' && f != 'X' || c == 'X' && i == 'X' && f != 'X' && f != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<f;Sleep(1250);f = 'X';system("CLS");break;}
//23
if (a == 'O' && i == 'O' && e != 'O' && e != 'X' || a == 'X' && i == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//24
if (c == 'O' && g == 'O' && e != 'O' && e != 'X' || c == 'X' && g == 'X' && e != 'X' && e != 'O')
{system("CLS");compplay = 1;cout<<"Computers turn...\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Computer thinking of a spot to play. ";Sleep(250);cout<<". ";Sleep(250);cout<<"\nThe computer chose the spot of: "<<e;Sleep(1250);e = 'X';system("CLS");break;}
//end of 1-24
///////////////////////DO NOT MESS WITH THINGS HERE ON, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//closed random generator for 1-9(computer)
random = rand() % 9 + 1;
cout<<"\nThe computer chose the spot of: ";cout<<random;Sleep(1250);
//errors state 1
while (random == 1 && a == 'O' || random == 1 && a == 'X' || random == 2 && b == 'O' || random == 2 && b == 'X' ||
random == 3 && c == 'O' || random == 3 && c == 'X' || random == 4 && d == 'O' || random == 4 && d == 'X' ||
random == 5 && e == 'O' || random == 5 && e == 'X' || random == 6 && f == 'O' || random == 6 && f == 'X' ||
random == 7 && g == 'O' || random == 7 && g == 'X' || random == 8 && h == 'O' || random == 8 && h == 'X' ||
random == 9 && i == 'O' || random == 9 && i == 'X')
{system("CLS");cout<<"The computer made an invalid move! Spot taken already! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
random = rand() % 9 + 1;
cout<<"The computer chose the spot of: ";cout<<random;Sleep(1250);
///////////////////////DO NOT MESS WITH THINGS ABOVE THIS, ALREADY MESSED UP ONCE!!!!!!!!!!!!!1
//no move
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){break;}
}
/////
/////end error state 1
//states
if (random == 1 && a != 'O'){a = 'X';}
if (random == 2 && b != 'O'){b = 'X';}
if (random == 3 && c != 'O'){c = 'X';}
if (random == 4 && d != 'O'){d = 'X';}
if (random == 5 && e != 'O'){e = 'X';}
if (random == 6 && f != 'O'){f = 'X';}
if (random == 7 && g != 'O'){g = 'X';}
if (random == 8 && h != 'O'){h = 'X';}
if (random == 9 && i != 'O'){i = 'X';}
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{system("CLS");cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"The computer has beat you! -_-\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//
{compplay = 1;system("CLS");}
}
/////
}//EEEEENNNNNDDDDD HHHHHAAAAARRRRRDDDDD
//multi-player
///end of computer play
{system("CLS");cout<<"Multi-player was chosen:\n";
cout<<"Choose a player: '1' for 'O' or '2' for 'X': ";
playero = 'O';playerx = 'X';
cin>>chp;
//errors - MAIN
if (chp != 1 && chp != 2){system("CLS");cout<<"You are currently in an unfixable error state...";Sleep(2000);return 0;}
//end errors
if (chp == 1){system("CLS");cout<<"You chose player: '"<<playero<<"'\n";}
if (chp == 2){system("CLS");cout<<"You chose player: '"<<playerx<<"'\n";}
cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
//good so far:
//cases/switch
while (chp == 1 || chp == 2) switch (chp)
{
case 1:
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){chp = 3,nomove = 3;}
//
if (chp == 1) 
{cout<<"Type 1-9 to place on the board for 'O': ";
cin>>plb;
//errorstates
while (plb != '1' && plb != '2' && plb != '3' && plb != '4' && plb != '5' && plb != '6' && plb != '7' && plb != '8' && plb != '9' ||
plb == '1' && a == 'O' || plb == '1' && a == 'X' ||
plb == '2' && b == 'O' || plb == '2' && b == 'X' ||
plb == '3' && c == 'O' || plb == '3' && c == 'X' ||
plb == '4' && d == 'O' || plb == '4' && d == 'X' ||
plb == '5' && e == 'O' || plb == '5' && e == 'X' ||
plb == '6' && f == 'O' || plb == '6' && f == 'X' ||
plb == '7' && g == 'O' || plb == '7' && g == 'X' ||
plb == '8' && h == 'O' || plb == '8' && h == 'X' ||
plb == '9' && i == 'O' || plb == '9' && i == 'X')
{system("CLS");cout<<"Invalid move! Spot taken already or invalid variable! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'O': ";cin>>plb;}
//end errorstates
if (plb == a){a = 'O';}if (plb == b){b = 'O';}if (plb == c){c = 'O';}
if (plb == d){d = 'O';}if (plb == e){e = 'O';}if (plb == f){f = 'O';}
if (plb == g){g = 'O';}if (plb == h){h = 'O';}if (plb == i){i = 'O';}
mainstring = 1;}
if (mainstring == 1)
{system("CLS");cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
//win state:
if (a == 'O' && b == 'O' && c == 'O' || d == 'O' && e == 'O' && f == 'O'|| g == 'O' && h == 'O' && i == 'O' || a == 'O' && d == 'O' && 
g == 'O' || b == 'O' && e == 'O' && h == 'O' || c == 'O' && f == 'O' && i == 'O' || a == 'O' && e == 'O' && i == 'O' || c == 'O' && 
e == 'O' && g == 'O')
{cout<<"Player: '"<<playero<<"' has won!\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
mainstring = 0;chp = 2;}
//end win
case 2:
//no moves
if (a != '1' && b != '2' && c != '3' && d != '4' && e != '5' && f != '6' && g != '7' && h != '8' && i != '9'){chp = 3,nomove = 3;}
//
if (chp == 2)
{cout<<"Type 1-9 to place on the board for 'X': ";
cin>>plb;
//errorstates
while (plb != '1' && plb != '2' && plb != '3' && plb != '4' && plb != '5' && plb != '6' && plb != '7' && plb != '8' && plb != '9' ||
plb == '1' && a == 'O' || plb == '1' && a == 'X' ||
plb == '2' && b == 'O' || plb == '2' && b == 'X' ||
plb == '3' && c == 'O' || plb == '3' && c == 'X' ||
plb == '4' && d == 'O' || plb == '4' && d == 'X' ||
plb == '5' && e == 'O' || plb == '5' && e == 'X' ||
plb == '6' && f == 'O' || plb == '6' && f == 'X' ||
plb == '7' && g == 'O' || plb == '7' && g == 'X' ||
plb == '8' && h == 'O' || plb == '8' && h == 'X' ||
plb == '9' && i == 'O' || plb == '9' && i == 'X')
{system("CLS");cout<<"Invalid move! Spot taken already or invalid variable! Please try again!\n";
cout<<"Board:\n";cout<<"/.---------.\\\n";cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";cout<<"|-----------|\n";cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";cout<<"|-----------|\n";cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";cout<<"\\.---------./\n";
cout<<"Type 1-9 to place on the board for 'X': ";cin>>plb;}
//end errorstates
if (plb == a){a = 'X';}if (plb == b){b = 'X';}if (plb == c){c = 'X';}
if (plb == d){d = 'X';}if (plb == e){e = 'X';}if (plb == f){f = 'X';}
if (plb == g){g = 'X';}if (plb == h){h = 'X';}if (plb == i){i = 'X';}
mainstring = 1;}
if (mainstring == 1)
{system("CLS");cout<<"Board:\n";
cout<<"/.---------.\\\n";
cout<<"| "<<a<<" | "<<b<<" | "<<c<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<d<<" | "<<e<<" | "<<f<<" |\n";
cout<<"|-----------|\n";
cout<<"| "<<g<<" | "<<h<<" | "<<i<<" |\n";
cout<<"\\.---------./\n";
//win state:
if (a == 'X' && b == 'X' && c == 'X' || d == 'X' && e == 'X' && f == 'X'|| g == 'X' && h == 'X' && i == 'X' || a == 'X' && d == 'X' && 
g == 'X' || b == 'X' && e == 'X' && h == 'X' || c == 'X' && f == 'X' && i == 'X' || a == 'X' && e == 'X' && i == 'X' || c == 'X' && 
e == 'X' && g == 'X')
{cout<<"Player: '"<<playerx<<"' has won!\nWould you like to play again '1' for yes '2' for no: ";cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
mainstring = 0;chp = 1;}
//end win
//lose state for both parts
case 3:
if (nomove == 3 && chp == 3){cout<<"Tie! Both of you have won due to no moves availabe to win!\n";cout<<"Press '1' to play again or '2' to exit: ";
cin>>won;if (won == 1){system("CLS");return main();}if (won != 1){return 0;}}
//end cases
}
//end switch/
}}
