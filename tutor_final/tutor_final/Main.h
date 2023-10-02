#pragma once

/// <summary> </summary>
// INCLUDES
#include<iostream> // for input and output - cout, cin, endl, getline
#include<stdlib.h>
#include<fstream> // for files
#include<string> // for string
#include<iomanip> // setfill and setw

/// <summary> </summary>
// USINGS
// which std:: are we gunna use a lot of?
using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::ifstream; // input
using std::ofstream; // output 
using std::fstream; // file stream

// look into renaming conventions. FunctionNames. variable_names. _private_variables_names. 


// very interesting... 
// for cin.ignore, ignore the max characters, in nice variable.. in weird way 
const unsigned long long int ALL = std::numeric_limits<std::streamsize>::max();


/// <summary> </summary>
// GLOBAL CONSTANTS - these variables will never change, so can make then global in header file 
// these are for displaying and format reasons. 
const char line = '='; // line symbol :: =
const char code_symbol = '#'; // code symbol :: #
const char price_symbol = '$'; // price symbol :: $
const string payrate_symbol = " / HR"; // payrate symbol :: / HR
const string spacer = " -- "; // entry spacer 
const string zero = "0"; // for number 0 
const string blank = ""; // for a blank space
const string out_of_stock = "OUT OF STOCK"; // for when the item is out of stock -  OUOT OF STOCK 
const string in_stock = " IN STOCK"; // for when the item is in stock - X IN STOCK

// for the array
const short unsigned int line_count = 60; // 60 - count for lines
const short unsigned int itemsXemployee = 2; // 2 - size for the arrays of items entries and arrays of employees entries
const short unsigned int MAX_SIZE = 10; // 10 - max size for each entry is 10 entries, C-style array size is const
const short unsigned int entry_size = 4; // 4 - number of details for each entry

const short unsigned int ITEM_ITEM = 0; // to access the first element, for the item entry details
const short unsigned int ITEM_CODE = 0; // to access the item code element
const short unsigned int ITEM_NAME = 1; // to access the item nme element
const short unsigned int ITEM_STOCK = 2; // to access the item stock element
const short unsigned int ITEM_PRICE = 3; // to access the price element

const short unsigned int EMPLOYEE_EMPLOYEE = 1; // to access the first element, for the item entry details
const short unsigned int EMPLOYEE_CODE = 0; // to access the employee code element
const short unsigned int EMPLOYEE_NAME = 1; // to access the employee name element
const short unsigned int EMPLOYEE_JOB = 2; // to access the job element
const short unsigned int EMPLOYEE_PAYRATE = 3; // to access the payrate element. 


/// <summary> </summary>
/***********************
** FUNCTION PROTOTYPES *
***********************/
// need functionns for - menu display, adding an entry(maybe different for first input), modify an entry, delete and entry, 
// display all the current entries, save all the current data to output to a file, read a file and input the data, quit the program that is running
// how do we ask for the user to control the program?
int display_options();

//add, modify, delete, display, write_file, and read_file(and open_file)
// how should the user first enter the information??
// void new_entries();
// how should the user enter new information
void add_one_entry(string (&)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &, short unsigned int &); // overloaded function, for adding an entry during the program, needs two more parameters
void add_first_entry(string (&)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &, short unsigned int &); //for the first time, dont need some data yet, so overload this function. 

// how should the user modify an entry that has already been entered? (space to continue?)
void modify_one_entry(string (&)[itemsXemployee][MAX_SIZE][entry_size]); // modifies an entry from a code input. asks user for each entry detail

// how should the user delete an entry?? 
void delete_one_entry(string (&)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &, short unsigned int &); // deletes an entry from a code input. shifts data up in the database, no holes.

// how should the user display the information they modified, or from reading the file 
void display_all_entries(string (&)[itemsXemployee][MAX_SIZE][entry_size], string &, short unsigned int &, short unsigned int &); // displays all the entries in the correct format with correct information

// how should the user save the newly entered information
void save_file(string(&)[itemsXemployee][MAX_SIZE][entry_size], string &, short unsigned int &, short unsigned int &); // save anad output the data to a text file. 

// how should the user see what information is in an input file?
void read_file(string (&)[itemsXemployee][MAX_SIZE][entry_size], string &, short unsigned int &, short unsigned int &); // read and input data from the new file, into databasae

// to deal with input file format, how to remove the underline, and replace with space?
string replace_w_space(string); 

//how to make a loop, and then end it? quit program?
void quit_program(bool &); // quits the program that is active. 