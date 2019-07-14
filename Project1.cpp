//Program Name
//Lawrence Su 3645884 University of California Santa Barbara ECE Department
//github.com/lawrence-su123
//CS16 Spring 2019
//Date:
// Program Function
// How to run the program
// Bugs (Hopefully this line will be empty :) )
//



#include <iostream>
#include <cstdlib>
#include <fstream> //reading from /txt files
#include <string>
#include <cstring>

//#include "linkedlist.h"
using namespace std;


// creating structure for the linked list, it can be imprted from a .h file later
struct Node
{
	int data;
	Node *next;
	Node *prev;
};

struct  
{
	Node* head;
	Node*tail;
};

//void 



int main(int argc, char *argv[])
{
	ifstream ifs;
	string my_line;
	if (argc!=2)
	{
		cerr << "Usage: "<< argv[0] << " Input just one file dude" <<endl;
		exit(-1);
	}
	ifs.open(argv[1]);
	

	if (ifs.fail())
	{
		cerr<< "Unable to open the file :("<<endl;
		exit(-1)

	
	return 0
}
