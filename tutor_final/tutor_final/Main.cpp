/********************************
This project will be part 1 conclusion to learning Computer Science, in less than 20-30 hours?
This will be a text-editor somewhat, using clean variables, good functions, an array/or vector, using files, and using classes/struct
maybe two parter, first one is "easier" with static with array(easy variables, etc), 
second is "complex" with dynamic with vectors and classes(use enum type?linked list?etc)
**PART ONE** short poem editor?
7-22-2021
displays options, can make a new sentance to write to text file, can open and display the text file, can save this new sentance over the text file, and append to the sentance in text file
each optoin will have default version header, then the "poem" sentances
*OR THIS*
store with items, and employee information, max of 10 each.
new item, or new employee, item is 4 digit code, employee is 5 digit stating with 0
[just enter the code number, and then will ask for the rest, etc #4245 goes to item and asks for name and stock and price
open the saved list in the text file
save the newly entered entries to the file correctly, employee information first? or maybe two files? 
change an entry, or rewrite over an entry?? or delete the entry??
always goes back to beggingin screen, someway, to then choose again. 
[]
add or modify, an then save the information after
open the current file, with or without saved changes
write, or "print" the new file to text with correct formatting?
OR 
two stores with two input files? 

********************************/

/**************
* this project will be a milestone for those learning to code *
* this project will prompt the user to start filling out information for their store and item stock, and employees hired. *
* given the number of starting items and employees, will input the info, items having 4 digit cods of 1-9, and employees having 6 digits, starting with 00 *
* given the code, will prompt the user for the rest of the details * 
* - item_name, item_stock, and item_price - empl_name, emply_job, and emply_payrate *
* with this info, can then add, modify, or delete an entry. can also choose to display the current info, 
* can write current data to output to a file, and also has ability to read a file, *
* and parse the information into memory, and can be changed, displayed, or written to file*

*****************/
/* Question - 
you are asked to create a program that will have data entered on a stores name with a possible 10 item entries, and 10 employee entries
either by user input, or by reading input from a text file. the data the user will enter will be precise, and not anything crazy, within bounds. the text file will also be formatted exactly as so, and should be handled correctly then. 
all input should be handled correctly, and should store the data precisely, and able to be output for display. the display for the output can be through the console for show, or
or should be formatted to an output file, save as a text file. 
the format should match exactly as these examples for both potential input data, and for the output display data. 
the user should be prompted to go through a menu, and be notified of anything like success, failures, or errors. 
the menu should consist of these actions: add one entry, modify an entry, delete an entry, display the data, read a file, output or save to a file, and then quit
the program should run, until the quit optoin is pressed ( hint infinite) 

*/

// look into things here needing docucmentation and add

// TODO
// add_entry() ~99%~ check it works right, add validity check
// add_entry(overloaded) ~99%~ check it works right, add validity check
// read_file() ~90%~ open the input file, and parse the information into the array correctly
// delete_entry() ~90%~ should find the right file and empty all the contents
// modify_entry() ~90%~ should modify one entry based off code, add validity check
// display_all_entries() 99%~
// save_entry() ~99%~

// look into input, switch to all getline(), or use cin.clear with cin.ignore?
// input looks good

// input validation, and check on display and write, for if it is blank( is blank is deleted so skip this element)
// ask for number of entries in beggining. dont seperate. for rest of code that deals with this total. think about redoing add_entry (maybe only one function)
// should only check for 4 digits or 6 digits, nothing in between. 
// also give example input, for both manual entering and through reading the text file. 

// write out the things this program does not handle, as from developer design. but these can be real world issues, things to be fixed or designed in firsrt place. 

// DONE
// or when delete, move all items back  one element?
// max input of 10 entries

// DOES NOT
// does not check every input for validation, like the item or employee description. they can enter wrong information here.
// does not handle more than 10 items or 10 employee entry individually. 
// does not handle any kind of input file. only specific input files. this is a huge task to handle every sort of possible input. this EXPECTS correct input file. 
// does not

/* 
Part 1 - understand questions, gather needed data, declrae the needed memory for the data and then add 0 or more entries, and display them.
part 2 - thinking of functions, adding the header, and fleshing out all the functions and display function and the quit function. 
part 3 - then work on starting the modyfying and deleting entry. 
part 4 - then work on the file portion, reading and writing the data to a file, and additions to other functionality. 
part 5 - finish up details? or done. 
*/



//  PORTIONS FOR HELP - max of 5
// PART 1 -variables and data types, memory, and use cases. 
// PART 2 -
// PART 3 -
// PART 4 -
// PART 5 -

// include header file, with all basic info
// do this part around array with consts? otherwise start with the other shit in here. 
#include"Main.h"




/***********************
** MAIN FUNCTION (1) ***
***********************/
int main()
{
	/// <summary> </summary>
	// how to start a program? 
	// disect the question down to its possible data and connections like a comparison, or needing use of math equation, or other tools of coding, even like input/output. 
	// reading and writing to files are another form of input or output, anad is useful in many program languages. 
	// 
	// what i like, begin most likely going to only have run once, dont need function, and can give a refresher? sice its atop
	// $ help portion #1 $

	// start with some basics, get some user input
	// from the question, we will need to account for this many pieces of informtion or data. store name, items, employees, 
	//so start in the most comfortable place by putting that data into variables first.
	//
	// decalre a variable that can hold writing like letters and numbers, which is a string. initialize it or assign it to the starting value of blank, to get the input from the user or file
	///<summary> This variable is a string and holds the store name </summary> 
	string store_name_="";

	// declare a variable that can be used to count for the number of storee entires needed for the items, and for the emplohyees, the two asked of pieces of data
	///<summary> These variables are sunint (short unsigned int, smaller memory usage than an int, ) for items, and empoyees, the two entries needed. Must be positive </summary>
	short unsigned int items_= 0, employees_= 0, starting_entries_=0;
	
	// starting with the console, to intereact with the user, to prompt them the options asked from the question. 
	// the needed data is the store name, number of items and number of employees accounted for. 
	// get some input since first time running program. 
	// this can really be named eveything, no restrictions for a name of a place.
	cout << "Enter your store name: ";
	getline(cin, store_name_); // get the whole line of string. 
	// cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// for the bumber of entries, it must be a positive integer amount or 0 entries, positive whole numbers greater than 0. need to check for the case of less than 0
	// or the question states only positive integers or 0 will be entered, do not worry about special cases here. only 0-10 will be entered at this stage
	cout << "Enter how many starting entries: ";
	cin >> starting_entries_;
	cin.ignore(ALL, '\n');
	
	/*cout << "Enter how many items: ";
	cin >> items_;
	cin.ignore(ALL, '\n');
	cout << "Enter how many employees: ";
	cin >> employees_;
	cin.ignore(ALL, '\n');*/

	// how can we store all this info that the user will enter? how can we display this input from the user back to them?
	// how can we store all the info from a file that can be read from ( input ), and write to file ( output)
	// two different arrays, one for items and one for employees? or one array of 3 dimension :D
	// next store all the user input into an array of 2 x 10 x 4, 
	// so 2 for item and employee and 10 for max number of entries that hold 4 details per entry each
	// makes an array to hold all the details for all the entries
	///<summary> this array is the whole database, holds all our data from the user or file, and is stored in memory here. [items and employees access(2)], [question states max size(10)], [the four details for each single entry(4)] </summary>
	string entry_array[itemsXemployee][MAX_SIZE][entry_size]; 
	// string employee_array[MAX_SIZE][entry_size]; // makes an array to hold all the details for employees entries

	// loop the correct amount of times, to have the user enter the first entries as given by them
	// can loop by adding the two sizes, adding a new entry for each size
	// get the first needed information from the user for the items
	
	for (short unsigned int i = 0; i <starting_entries_; i++)
	{
		// call the function for first time adding an entry
		add_first_entry(entry_array,items_,employees_); // different ways to pass an array
	}

	//// get the first needed information from the user for the employees
	
	// put dusplay options up here, and have start entry and display inn video 1. 
	// END PART 1
	// PART 2 -  thinking of functions, adding the header, and fleshing out all the functions and quit program 
	// PART 3 - add the first entry, and add entry functions
	// PART 4 - Add the modify and delete entry
	// PART 5 - add the file functionality. 
	// PART 6 - add quit function
	// PART 7 - add remove space
	// PART 8 - finish off this continous program, and write some test data for it to run.

	
	// now continue on to rest of program.
	/// <summary> </summary>
	// PART 2
	// to make a menu, a switch case is a really nice usecase, first display the choices for the menu, and then use a switch case to do each of those actions
	// need a variable to get usere input for the menu choice
	short unsigned int option = 0;
	
	// with a menu and quit option, can have a loop running infinitely, and then quit option will quit the program. 
	// menu needs to be the base, always return back to this menu after an action is done, so the user can quit. 
	bool run_program = true; // is the programming still running or not. True :: is running; False :: is quitting
	// add a quit button 

	// for an infinite loop, use while loop, with our run_program boolean. to run or quit
	while (run_program == true)
	{ 
		// first display the menu optoions to the user. 
		// display function- for new, open, save, modify, 
		option = display_options(); // calls function to find which option they want
		

		//next, with the user input, switch off to that option, add entry, modify entry, delete entry, display data, read file, or save file(output)
		// how are we gunna branch off to right option?
		switch (option)
		{

		case 1: // ADD ENTRY - add data for entries, to memory(array)
			add_one_entry(entry_array, items_, employees_); // call second function that addsd entry, and accounts for item and employee count
			break;

		case 2: // MODIFY ENTRY - Modify a current entry, enter number to modify?
			modify_one_entry(entry_array);
			break;

		case 3: // DELETE ENTRY - select an entry to delete
			delete_one_entry(entry_array, items_, employees_);
			break;

		case 4: // DISPLAY ENTRIES - displays the current data, either user input, or had read from the file ( from the array )
			display_all_entries(entry_array, store_name_, items_, employees_);
			break;

		case 5: // SAVE TO FILE - saves the current data, and formatts it correctly to the output file.
			save_file(entry_array, store_name_, items_, employees_);
			break;

		case 6: // READ FILE - reads an input file, and stores that data
			read_file(entry_array, store_name_, items_, employees_);
			break;

		case 0: // QUIT THE LOOP, END PROGRAM
			quit_program(run_program);
			break;

		default:
			cout << "\n ruh roh, something went wrong here..";
			break;
		}
	}

	return EXIT_SUCCESS;	
} // ENDfunc


/****************************
* DISPLAY MENU FUNCTION (2) *
****************************/
// this function should include everything needed to display the full menu to the user, based on the question provided. 
int display_options()
{
	/// <summary> </summary>
	// create a temporary function variable, to get from the user and return this number back to the main function
	short unsigned int option_for_display = 0; // temporary variable for user input of their option choice 
	// need to check if the option is valaid, there are only 7 total menu options, is the choice 0-6 basically? if not there is an error
	bool valid_input = 1; // input is valid or not; 1 :: valid; 0 :: invalid

	// now clear the screen before outputting a menu, clean slate. 
	// this is my formatting for a menu, keep the choices clear and seperate from eachother. 
	system("CLS");
	cout << "|| 1: ADD || 2: MODIFY || 3: DELETE || 4: DISPLAY ENTRIES || 5: SAVE TO FILE || 6: READ FILE || 0: QUIT ||" << endl;
	cout << "Which option do you want: ";
	cin >> option_for_display;

	// prompt the user for input, and for validity, do ask again if invalid, else get the user input, and then set the flag to invalid, and now check if the input is valid or not valid and loop again
	// asks user for input for which choice
	// do all this stuff at least once, when choices are not 0-6, it will loop and do again. 
	do {
		// with the first user input, check if it is within the valid number range first. this is very first check. 
		if (0 <= option_for_display && option_for_display <= 6)
		{
			break; // when the input IS valid, break out of the loop to exit and continue on. return the valid input option
		}
		// NOT valid input, prompts the user with the menu again and states there was an error, and for reentry of input..
		// cout << std::flush;
		system("CLS");
		cout << "|| 1: ADD || 2: MODIFY || 3: DELETE || 4: DISPLAY ENTRIES || 5: SAVE TO FILE || 6: READ FILE || 0: QUIT ||" << endl;
		cout << "Wrong input, please select options 0-6: ";
		cin >> option_for_display;
		cin.ignore(ALL, '\n');
		// this should only run once, when there is no input. when input is valid the loop is exited and continued on
		
			
	// will loop while the options are beyond 0-6 range, when valid input is entered, this loop is exited and will continue on. this is second check
	} while (option_for_display < 0 || option_for_display > 6); // options between 0-6 are succesfull, otherwise, will ask again
	
	// with valid input from the user, return this information to the main function to continiue with this choice. 
	return option_for_display;
} // ENDfunc


/***********************
***** ADD ENTRY (4.5) ****
** OVERLOADED FUNCTION**
****** TAKES TWO ******
*** MORE ARGUEMENTS: ***
** ITEMS AND EMPLOYEES **
***********************/

// how can we temporary store the information to manipulate it out of the file, to rewrite to the file?
// keep track of the information in an array, to use for the manipulation

// OVERLOADED FUNCTION, TAKES TWO MORE ARGUMENTS OF ITEMS AND EMPLOYEES
// FOR NEW ENTRY, RECALCULATES THE GIVEN ITEMS AND EMPLOYEES(from first lines of inputs)
// this is to add an entry after the menu, incrementing item or employee whith new entry. 
void add_one_entry(string (&add_entry)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// find what entries there currently are
	static string temp_code = "";
	system("CLS");
	cout << "Enter the code for the item or employee: ";
	cin >> temp_code; // user input for the item or employee entry to add. 	

	// now figure out if its item or employee based on code size. 
	if (temp_code.size() == 4 && items <10) // compares the size, so if its 4 digits is an item. if 6 is an employee
	{
		// this is an item!! now find out the next information!
		// loop to find an empty piece of data
		for (short unsigned int ind = 0; ind < MAX_SIZE; ind++)
		{
			if (add_entry[ITEM_ITEM][ind][ITEM_CODE] == "") // if the first entry is blank, is blank has no code!!
			{
				add_entry[ITEM_ITEM][ind][ITEM_CODE] = temp_code; // takes user input and reassigns it to code element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter the name of item
				cout << "Please enter the name for the item: ";
				cin.ignore();
				getline(cin, temp_code);
				add_entry[ITEM_ITEM][ind][ITEM_NAME] = temp_code; // takes user input and reassigns it to name element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter the number in stock of item
				cout << "Please enter how many are in stock for "<<add_entry[ITEM_ITEM][ind][ITEM_NAME] << ": ";
				cin >> temp_code;
				cin.ignore(ALL, '\n');
				add_entry[ITEM_ITEM][ind][ITEM_STOCK] = temp_code; // takes user input and reassigns it to stock element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter price of the item
				cout << "Please enter the price(X.XX) for " << add_entry[ITEM_ITEM][ind][ITEM_NAME] << ": ";
				cin >> temp_code;
				cin.ignore(ALL, '\n');
				add_entry[ITEM_ITEM][ind][ITEM_PRICE] = temp_code; // takes user input and reassigns it to price element in the array of ITEM entries

				// a new item has been additionally added, increment the total amount of item entries
				items++; 

				system("CLS");
				//cin.ignore(ALL, '\n');
				cout << "Entry succesfully addded!" << endl;
				cout << "Please press the *Enter* key to go back to the main menu...";
				cin.ignore(ALL, '\n');
				break; // found the next empty entry and got input, now break out of loop
			}
			
		}
		
	}
	// now check to see if not item, then is employee code?
	else if(temp_code.size() ==6 && employees < 10)
	{
		// this should be an employee, so find out the rest of information here
		// loop to find empty entry 
		for (short unsigned int ind = 0; ind < MAX_SIZE; ind++)
		{
			// is it empty?
			if (add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_CODE] == "") // if the employee code is blank, then is new blank data entry
			{
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_CODE] = temp_code; // takes user input and reassigns it to code element in the array of EMPLOYEE entries
				system("CLS");
				// clear screen and now ask for rest of employee information
				cout << "Please enter the full name, seperated by one space: ";
				cin.ignore();
				getline(cin, temp_code);
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] = temp_code; // takes user input and reassigns it to name elemEnt in the array of EMPLOYEE entries
				system("CLS");
				// clear screen and now ask for job
				cout << "Please enter the job/occupation for "<<add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] << ": ";
				// cin.ignore();
				getline(cin, temp_code);
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_JOB] = temp_code; // takes user input and reassigns it to job elemEnt in the array of EMPLOYEE entries
				system("CLS");
				// clear screen and now ask for the payrate of employee
				cout << "Please enter the payrate(X.XX) for "<<add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] << ": ";
				cin >> temp_code;
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_PAYRATE] = temp_code; // takes user input and reassigns it to payrate elemEnt in the array of EMPLOYEE entries

				// successfually added an additional entry, increment amount of employees. 
				employees++;
				system("CLS");
				//cin.ignore(ALL, '\n');
				cout << "Entry succesfully addded!" << endl;
				cout << "Please press the *Enter* key to go back to the main menu...";
				cin.ignore(ALL, '\n');
				break;
			}

		}
	}
	// otherwise, they entered a wrong type of code. does not fit our entries. tell them to please try again. 
	else
	{
		system("CLS");
		cin.ignore(ALL, '\n');
		cout << "You entered a wrong code, please hit *Enter* to try again...";
		cin.ignore(ALL, '\n');
	}
	
	
} // ENDfunc


/***********************
***** ADD FIRST ENTRY (4) ****
***********************/

// how can we take the data, and add something to it? what is needed? what steps to add?
//  to add an entry, given the first input, add to the blank array from the continued input
// this function does not add anything to the item or employees, as this is first function, so alreaddy know that information from user. 
void add_first_entry(string (&add_entry)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// find what entries there currently are
	static string temp_code = ""; // temp comparison variables for this funcationality. // maybe temp_data
	system("CLS");
	cout << "Enter the code for the item or employee: ";
	cin >> temp_code;
	cin.clear();
	//cin.ignore(ALL, '\n');
	// make a comparisoin between the two codes, one is 4 digits long for the item, the other is 6 digits long for the employee. 
	// now figure out if its item or employee
	// compare when the size of the string is 4 digits, then it is an item and can retrieve item values
	if (temp_code.size() == 4&& items<10) // compares the size, so if its 4 digits is an item. if 6 is an employee
	{
		// need to find an empty data set, to enter the newly additional entry data. add values to empty data. 
		// this is an item!! now find out the next information!
		// loop to find an empty piece of data
		for (short unsigned int ind = 0; ind < MAX_SIZE; ind++)
		{
			if (add_entry[ITEM_ITEM][ind][ITEM_CODE] == "") // if the first entry is blank, is blank has no code!!
			{
				add_entry[ITEM_ITEM][ind][ITEM_CODE] = temp_code; // takes user input and reassigns it to code element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter the name of item
				cout << "Please enter the name for the item: ";
				cin.ignore();
				getline(cin, temp_code);
				add_entry[ITEM_ITEM][ind][ITEM_NAME] = temp_code; // takes user input and reassigns it to name element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter the number in stock of item
				cout << "Please enter how many are in stock for " << add_entry[ITEM_ITEM][ind][ITEM_NAME] << ": ";
				cin >> temp_code;
				cin.ignore(ALL, '\n');
				add_entry[ITEM_ITEM][ind][ITEM_STOCK] = temp_code; // takes user input and reassigns it to stock element in the array of ITEM entries
				system("CLS");
				// clear screen, and ask to enter price of the item
				cout << "Please enter the price(X.XX) for " << add_entry[ITEM_ITEM][ind][ITEM_NAME] << ": ";
				cin >> temp_code;
				cin.ignore(ALL, '\n');
				add_entry[ITEM_ITEM][ind][ITEM_PRICE] = temp_code; // takes user input and reassigns it to price element in the array of ITEM entries
				items++;
				// let the user know the entry has been successfully added. 
				system("CLS");
				cout << "Entry succesfully addded!" << endl;
				cout << "Please press the *Enter* key to continue adding the initial entries...";
				cin.ignore(ALL, '\n');
				break; // found the next empty entry and got input, now break out of loop
			}

		}

	}
	// now compares the size of the string, for 6 digits, which is the eomployee, so now get data for employee. 
	else if (temp_code.size() == 6 && employees<10)
	{
		// this should be an employee, so find out the rest of information here
		// loop to find empty entry 
		for (short unsigned int ind = 0; ind < MAX_SIZE; ind++)
		{
			// is it empty? need to enter new data into an empty entry. 
			if (add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_CODE] == "") // if the employee code is blank, then is new blank data entry
			{
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_CODE] = temp_code; // takes user input and reassigns it to code element in the array of employee entries
				system("CLS");
				// clear screen and now ask for rest of employee information
				cout << "Please enter the full name, seperated by one space: ";
				cin.ignore();
				getline(cin, temp_code);
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] = temp_code; // takes user input and reassigns it to name element in the array of employee entries
				system("CLS");
				// clear screen and now ask for job
				cout << "Please enter the job/occupation for " << add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] << ": ";
				// cin.ignore();
				getline(cin, temp_code);
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_JOB] = temp_code; // takes user input and reassigns it to job element in the array of employee entries
				system("CLS");
				// clear screen and now ask for the payrate of employee
				cout << "Please enter the payrate(X.XX) for " << add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_NAME] << ": ";
				cin >> temp_code;
				cin.ignore(ALL, '\n');
				add_entry[EMPLOYEE_EMPLOYEE][ind][EMPLOYEE_PAYRATE] = temp_code; // takes user input and reassigns it to payrate element in the array of employee entries
				employees++;
				// let the user know the entry was succesfful for the employee entry. 
				system("CLS");
				cout << "Entry succesfully addded!" << endl;
				cout << "Please press the *Enter* key to continue adding the initial entries...";
				cin.ignore(ALL, '\n');
			
				break;
			}

		}
	}
	// otherwise, they entered a wrong type of code. does not fit our entries. tell them to please try again. 
	else
	{
		system("CLS");
		cin.ignore(ALL, '\n');
		cout << "You entered a wrong code, please hit *Enter* to try again...";
		cin.ignore(ALL, '\n');
	}
} // ENDfunc


/***********************
*** MODIFY ENTRY (5) ***
***********************/
// with the array of entries, get user input and then find the matched code, to then modify the whole entry at that element.
// will prompt the user to modify each part of the entry, code, name, stock, price, OR job, payrate.
void modify_one_entry(string (&modify_entry)[itemsXemployee][MAX_SIZE][entry_size])
{
	/// <summary> </summary>
	system("CLS");
	string temp_word = "";
	cout << " Pease enter the code for modification: ";
	cin >> temp_word;
	cin.ignore(ALL, '\n');

	// how to get the user to correctly get to right information to modify correctly??
	// can loop through and ask to change each entry, or can use a loop with a switch case: 1 entry 1-4, or ALL 
	for (unsigned int mod =0; mod < MAX_SIZE; mod++)
	{
		// First check is this an item or employee entry?? should be employee code for this
		if (modify_entry[EMPLOYEE_EMPLOYEE][mod][EMPLOYEE_CODE].compare( temp_word)==0)
		{

			// EMPLOYEE CODE
			system("CLS");
			cout << "Do you want to modify the employee code? (Y/N) : ";
			cin >> temp_word;
			cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new employee code: ";
				cin >> temp_word;
				cin.ignore(ALL, '\n');
				modify_entry[EMPLOYEE_EMPLOYEE][mod][EMPLOYEE_CODE] = temp_word;
			}

			// EMPLOYEE NAME
			system("CLS");
			cout << "Do you want to modify the employee name? (Y/N) : ";
			cin >> temp_word;
			//cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new name: ";
				cin.ignore();
				getline(cin,temp_word);				
				modify_entry[EMPLOYEE_EMPLOYEE][mod][EMPLOYEE_NAME] = replace_w_space(temp_word);
			}

			// EMPLOYEE JOB 
			system("CLS");
			cout << "Do you want to modify the job? (Y/N) : ";
			cin >> temp_word;
			// cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new job: ";
				cin.ignore();
				getline(cin, temp_word);
				modify_entry[EMPLOYEE_EMPLOYEE][mod][EMPLOYEE_JOB] = replace_w_space(temp_word);
			}

			// EMPLOYEE PAYRATE
			system("CLS");
			cout << "Do you want to modify the payrate? (Y/N) : ";
			cin >> temp_word;
			cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new price: ";
				cin >> temp_word;
				cin.ignore(ALL, '\n');
				modify_entry[EMPLOYEE_EMPLOYEE][mod][EMPLOYEE_PAYRATE] = temp_word;
			}

			// let the user know, the entry has been succesfully modified. 
			// found the oneentry to modify, now break out of loop
			system("CLS");
			cout << "Entry succesfully modified!" << endl;
			cout << "Please press the *Enter* key to go back to the main menu...";
			cin.ignore(ALL, '\n');
			break;
		}
		// now check to see if its not employee, then is it an item code? should be an item code for this
		else if (modify_entry[ITEM_ITEM][mod][ITEM_CODE].compare(temp_word) == 0)
		{
			// ITEM CODE
			system("CLS");
			cout << "Do you want to modify the item code? (Y/N) : ";
			cin >> temp_word;
			cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new item code: ";
				cin >> temp_word;
				cin.ignore(ALL, '\n');
				modify_entry[ITEM_ITEM][mod][ITEM_CODE] = temp_word;
			}

			// ITEM NAME
			system("CLS");
			cout << "Do you want to modify the item name? (Y/N) : ";
			cin >> temp_word;
			// cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new item name: ";
				cin.ignore();
				getline(cin ,temp_word);
				modify_entry[ITEM_ITEM][mod][ITEM_NAME] = replace_w_space(temp_word);
			}

			// ITEM STOCK
			system("CLS");
			cout << "Do you want to modify the stock? (Y/N) : ";
			cin >> temp_word;
			cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new stock amount: ";
				cin >> temp_word;
				cin.ignore(ALL, '\n');
				modify_entry[ITEM_ITEM][mod][ITEM_STOCK] = temp_word;
			}

			// ITEM PRICE
			system("CLS");
			cout << "Do you want to modify the price? (Y/N) : ";
			cin >> temp_word;
			cin.ignore(ALL, '\n');

			// wait for user to enter if they want to modify this entry element
			if (temp_word == "Y" || temp_word == "y")
			{
				system("CLS");
				cout << "Please enter the new price: ";
				cin >> temp_word;
				cin.ignore(ALL, '\n');
				modify_entry[ITEM_ITEM][mod][ITEM_PRICE] = temp_word;
			}


			// let the user know, the entry has been succesfully modified. 
			system("CLS");
			cout << "Entry succesfully modified!" << endl;
			cout << "Please press the *Enter* key to go back to the main menu...";
			cin.ignore(ALL, '\n');
			break; // modifed the entry, so break out
		}
	}
}// ENDfunc




/***********************
***** DELETE ENTRY (6) ****
***********************/
// gets the user input for a code, and will delete that entry based off the unique code. 
// we need the array of entries, and the count of items and employees to decrement one counted entry
void delete_one_entry(string(&delete_entry)[itemsXemployee][MAX_SIZE][entry_size], short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// string delete_ = "";
	string temp_code;
	bool deleted = false; // has the entry been successfully deleted yet, or not? start out fales; true :: deleted; false :: not_deleted;
	cout << "Enter the item or employee code you want to delete: ";
	cin >> temp_code; // code must match an entry to be deleted, or will fail. 
	cin.ignore(ALL, '\n');

	// with the user input of the code, now loop through the array of entries and find that element to delete. 
	
	for (unsigned int i= 0; i<MAX_SIZE; i++)
	{
		// how to deal with the correctly compared code
		// skip to the last element and fix the array to right size  FIX SIZING ISSUE
		// first compare to the item entries, is it an item?
		if (delete_entry[ITEM_ITEM][i][ITEM_CODE].compare(temp_code) == 0) // if they compare, then delete this, wipe it blank
		{
			/*delete_entry[ITEM_ITEM][i][ITEM_CODE] = blank;
			delete_entry[ITEM_ITEM][i][ITEM_NAME] = blank;
			delete_entry[ITEM_ITEM][i][ITEM_STOCK] = blank;
			delete_entry[ITEM_ITEM][i][ITEM_PRICE] = blank;*/
			
			// arrays have a bounds, and to rewrite data, there needsd to be data in element spot + 1 to move it over. 
			// so check the second to last element, and then do a special check after to the last element, it will be special case here

			// 10 - 1 = 9. check second to last element, to make sure to stay in bounds
			for (unsigned int p = i; p < (MAX_SIZE-1); p++)
			{				
				// check if the entry is blank or not, when its blank, finished with the last entry, into unknown memory, so stop when blank data. 
				// if there is  code, then the item must be registered and can be moved down, or replaced
				if (delete_entry[ITEM_ITEM][p][ITEM_CODE].compare(blank) != 0)
				{
					// with a found code
					delete_entry[ITEM_ITEM][p][ITEM_CODE] = delete_entry[ITEM_ITEM][p + 1][ITEM_CODE];
					delete_entry[ITEM_ITEM][p][ITEM_NAME] = delete_entry[ITEM_ITEM][p + 1][ITEM_NAME];
					delete_entry[ITEM_ITEM][p][ITEM_STOCK] = delete_entry[ITEM_ITEM][p + 1][ITEM_STOCK];
					delete_entry[ITEM_ITEM][p][ITEM_PRICE] = delete_entry[ITEM_ITEM][p + 1][ITEM_PRICE];
				}
			}
			// special case
			// check for last entry, and delete the data if it is not blank, otherwise it is already blank. 
			if (delete_entry[ITEM_ITEM][MAX_SIZE - 1][ITEM_CODE].compare(blank) != 0)
			{
				delete_entry[ITEM_ITEM][MAX_SIZE - 1][ITEM_CODE] = blank;
				delete_entry[ITEM_ITEM][MAX_SIZE - 1][ITEM_NAME] = blank;
				delete_entry[ITEM_ITEM][MAX_SIZE - 1][ITEM_STOCK] = blank;
				delete_entry[ITEM_ITEM][MAX_SIZE - 1][ITEM_PRICE] = blank;
			}
			// since deleted there must be one less entry, so can clear the last antry in the array no matter wht(i think)
			

			// one item entry is gone, so decrement the count of items. 
			items--;
			deleted = true; // item has been successfully deleted. 
		}

		// then compare to the employee entries, is it an employee?
		else if (delete_entry[EMPLOYEE_EMPLOYEE][i][EMPLOYEE_CODE].compare(temp_code) == 0) // if they compare, then delete this, wipe it blank
		{
			/*delete_entry[EMPLOYEE_EMPLOYEE][i][EMPLOYEE_CODE] = delete_;
			delete_entry[EMPLOYEE_EMPLOYEE][i][EMPLOYEE_NAME] = delete_;
			delete_entry[EMPLOYEE_EMPLOYEE][i][EMPLOYEE_JOB] = delete_;
			delete_entry[EMPLOYEE_EMPLOYEE][i][EMPLOYEE_PAYRATE] = delete_;
			*/
			// arrays have a bounds, and to rewrite data, there needsd to be data in element spot + 1 to move it over. 
			// so check the second to last element, and then do a special check after to the last element, it will be special case here

			// 10 - 1 = 9. check second to last element, to make sure to stay in bounds. goes through element 0-8, ( p < 9 )
			for (unsigned int p = i; p < (MAX_SIZE-1); p++)
			{
				delete_entry[EMPLOYEE_EMPLOYEE][p][EMPLOYEE_CODE] = delete_entry[EMPLOYEE_EMPLOYEE][p + 1][EMPLOYEE_CODE];
				delete_entry[EMPLOYEE_EMPLOYEE][p][EMPLOYEE_NAME] = delete_entry[EMPLOYEE_EMPLOYEE][p + 1][EMPLOYEE_NAME];
				delete_entry[EMPLOYEE_EMPLOYEE][p][EMPLOYEE_JOB] = delete_entry[EMPLOYEE_EMPLOYEE][p + 1][EMPLOYEE_JOB];
				delete_entry[EMPLOYEE_EMPLOYEE][p][EMPLOYEE_PAYRATE] = delete_entry[EMPLOYEE_EMPLOYEE][p + 1][EMPLOYEE_PAYRATE];

			}
			// now special check for last element, delete it if it is not blank. 
			if (delete_entry[EMPLOYEE_EMPLOYEE][MAX_SIZE-1][EMPLOYEE_CODE].compare(blank) !=0 )
			{
				delete_entry[EMPLOYEE_EMPLOYEE][MAX_SIZE - 1][EMPLOYEE_CODE] = blank;
				delete_entry[EMPLOYEE_EMPLOYEE][MAX_SIZE - 1][EMPLOYEE_NAME] = blank;
				delete_entry[EMPLOYEE_EMPLOYEE][MAX_SIZE - 1][EMPLOYEE_JOB] = blank;
				delete_entry[EMPLOYEE_EMPLOYEE][MAX_SIZE - 1][EMPLOYEE_PAYRATE] = blank;
			}
			
			// successfully deleted an item, decrement count of employee entries. 
			employees--;
			deleted = true; // succesful delete. 

		}	
	} // ENDloop


	// after looping through all, hopefully found the entry to delete. let the user know. true is succesful delete, else failure :(
	if (deleted == true)
	{
		system("CLS");
		cout << "Entry succesfully deletd!" << endl;
		cout << "Please press the *Enter* key to go back to the main menu...";
		cin.ignore(ALL, '\n');		
	}
	// or let them know they typed it in wrong, or entry doesnt exist for some reason... 
	else
	{
		system("CLS");
		cout << "That entry does not exist yet! deleting it could be dangerous.." << endl;
		cout << "Please press the *Enter* key to go back to the main menu...";
		cin.ignore(ALL, '\n');
	}
}  // ENDfunc



/***********************
****** DISPLAY ENTRY (3) *******
***********************/
// in order to display, we need all the pieces of data, from the store name, items, employees, and each entry that is stored in memory or the array

void display_all_entries(string (&display_entry)[itemsXemployee][MAX_SIZE][entry_size], string &store_name, short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// clear the screen for displaying
	system("CLS");
	cin.ignore(ALL, '\n');

	// in order to create a nice border, use set fill and setwidth, to insert a repeated charatcter for a nice line of "="
	// doing this format is ugly, use functionality and abilities of code. 

	// figure out setw and setfill
	// first what character do you want to fill out? then set the width to be filled out by that much. 
	cout << std::setfill(line) << std::setw(line_count) << '\n'; // line of "="
	// start with the store name and number of items and employees with the spaced format
	cout << store_name << spacer << items << " ITEMS, " << employees << " EMPLOYEES" <<endl;
	cout << std::setfill(line) << std::setw(line_count) << '\n'; // line of "='

	// check and compare for 0 items and 0 employees, seperately. write there are no items, or no employees, or neither?
	// go through the array of item data, getting and displaying each entry and its data. the order of code - name - stock - price
	// for the number of items, start incrementing through the array elements, to find entries filled with data
	for (unsigned int i=0; i<items; i++)
	{
		// start to display the filled entries, each element having a piece of data, either the code, name, stock, or price of the item
		cout << code_symbol << display_entry[ITEM_ITEM][i][ITEM_CODE] << spacer << display_entry[ITEM_ITEM][i][ITEM_NAME] << spacer;

		// for this same item code, if there is no stock, display a message instead of 0 stock. 
		if (display_entry[ITEM_ITEM][i][ITEM_STOCK].compare(zero) == 0)
		{
			cout << out_of_stock << spacer; 
		}
		else // for this item code else display the stock of the item
		{
			cout << display_entry[ITEM_ITEM][i][ITEM_STOCK] << in_stock << spacer; 
		}
		// then display the price of the same item code. 
		cout << price_symbol << display_entry[ITEM_ITEM][i][ITEM_PRICE] << endl;
		
	}
	// if there are 0 items registered, then display custom message here
	if (items==0)
	{
		cout << "There are no items registered." << endl; // displays when no entires are found
	}

	// display another seperation/ formated line
	cout << std::setfill(line) <<std::setw(line_count) << '\n'; 

	// go through the array of employee data
	// display the information in format of code- name - job - payrate
	for (unsigned int e=0; e<employees; e++)
	{
		// display the informatiion of code, name, job, and payrate seperated by spaced format
		cout  << code_symbol << display_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_CODE] << spacer
			<<display_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_NAME] << spacer << display_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_JOB] 
			<< spacer << price_symbol << display_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_PAYRATE] << payrate_symbol << endl;
	}

	// if there are no employees registered. 
	if (employees==0)
	{
		cout << "There are no employees registered." << endl; // displays when no entires are found
	}

	//display another formatted line
	cout << std::setfill(line) << std::setw(line_count) << '\n';
	
	// after displaying, need a way to go back to the main menu .
	cout << endl;
	cout << "Please press the *Enter* key to go back to the main menu...";
	cin.ignore(ALL, '\n');

} // ENDfunc


/***********************
**** SAVE FILE (8) *****
***********************/


// how to take the newly entered information and save it to the file? 
// to save the data to a file, we need the array of entries, the store name, the items and the employees. 
void save_file(string(&save_entry)[itemsXemployee][MAX_SIZE][entry_size], string &store_name, short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// for files, to create a file for output, or saving data from program to a file. 
	ofstream outputFile;
	outputFile.open("new_text_file.txt"); // open the file for the text output. 

	// check to see if the file is safely open. 
	if (outputFile.is_open())
	{
		// start to format the output just like the question is asking for. 
		outputFile << std::setfill(line) << std::setw(line_count) << '\n';
		outputFile << store_name << spacer << items << " ITEMS, " << employees << " EMPLOYEES" << endl;
		outputFile << std::setfill(line) << std::setw(line_count) << '\n';

		// now to display all the item entries
		for (unsigned int i = 0; i < items; i++)
		{
			// same format as display function: code - name - stock - price
			outputFile << code_symbol << save_entry[ITEM_ITEM][i][ITEM_CODE] << spacer << save_entry[ITEM_ITEM][i][ITEM_NAME] << spacer;

			// again check for special stock case, 0 stock or some stock
			if (save_entry[ITEM_ITEM][i][ITEM_STOCK].compare(zero) == 0)
			{
				outputFile <<  out_of_stock << spacer;
			}
			else
			{
				outputFile << save_entry[ITEM_ITEM][i][ITEM_STOCK] << in_stock << spacer;
			}
			outputFile << price_symbol << save_entry[ITEM_ITEM][i][ITEM_PRICE] << endl;
			
		}

		// format line
		outputFile << std::setfill(line) << std::setw(line_count) << '\n';

		// now to display all the employee entries. 
		for (unsigned int e = 0; e < employees; e++)
		{
			//same format as display function: code - name - job - payrate
			outputFile << code_symbol << save_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_CODE] << spacer
				<< save_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_NAME] << spacer << save_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_JOB] 
				<< spacer << price_symbol << save_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_PAYRATE] << payrate_symbol << endl;


		}

		// format line
		outputFile << std::setfill(line) << std::setw(line_count) << '\n';

		// tell user that the data was scuccesfully written to the text output file 
		system("CLS");
		cin.ignore(ALL, '\n');
		cout << "File succesfully written and saved!" << endl;
		cout << "Please press the *Enter* key to go back to the main menu...";
		cin.ignore(ALL, '\n');

	}
	// incase somethng goes wrong with opening the file,
	else
	{
		cout << " RUH ROH NOT AGAIN RAGGY. SOMETINGS WRONG";
	}

	// REMEMBER TO CLOSE A FILE THAT YOU OPEN!!
	outputFile.close();
} // ENDfunc



/***********************
****** READ FILE (7)*****
***********************/
// to read the data and use it as input, instead of typed from a user. data from a file-  needing array of entries, store name, items, and employees
void read_file(string (&read_entry)[itemsXemployee][MAX_SIZE][entry_size], string &store_name, short unsigned int &items, short unsigned int &employees)
{
	/// <summary> </summary>
	// what kind of file does this need? how do we do that?
	// we need input from a file, to read the data from the file. 
	ifstream input_file;
	input_file.open("data_text_file.txt");
	string temp_word = "";

	// REMEBER THE FILE HAS CERTAIN FORMAT AND SO NEED TO DISECT AND READ THE DATA IN ORDER OF THE FORMAT.
	// how to make sure the file opens without errors?
	if (input_file.is_open()) // great out file opened successfully!!!!
	{
		// how do we organize our info/how do we parse ?
		// get three pieces of information first line - giving the store name, item and employee count
		// how to deal with the format for spacing?

		// read the first piece of data, the store name. now we need to get rid of the _ and replace with a space. 
		input_file >> temp_word; // with names deal with format
		store_name= replace_w_space(temp_word); // the function is passed the word_with_, and then returns the word with (spaces) 
		input_file >> items;
		input_file >> employees;
		
		// with the first data read, now have to continue the format and read all the item data into our array of entries. 
		for (short unsigned int i=0; i<items; i++)
		{
			// like cin >>
			// get the data and place it into each array element, coresponding to the code, name, stock, and price of items. 
			input_file >> read_entry[ITEM_ITEM][i][ITEM_CODE]; // get the code entry

			// need to replace w/ space, so get data first then replace it with space. 
			input_file >> temp_word; 
			read_entry[ITEM_ITEM][i][ITEM_NAME] = replace_w_space(temp_word); // replaced with space and put into correct name entry

			input_file >> read_entry[ITEM_ITEM][i][ITEM_STOCK]; // get the stock entry
			input_file >> read_entry[ITEM_ITEM][i][ITEM_PRICE];	// get the price entry

		}

		// now time to read the employee data into the array of entries
		for (unsigned short int e=0; e<employees; e++)
		{
			input_file >> read_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_CODE]; // get the employee code
			input_file >> temp_word;
			read_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_NAME] = replace_w_space(temp_word); // replaced with space and put into correct name entry

			input_file >> read_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_JOB]; // get the employee job
			input_file >> read_entry[EMPLOYEE_EMPLOYEE][e][EMPLOYEE_PAYRATE]; // get the employee payrate
		}

		// succesful read! let the user know the file has been read!
		system("CLS");
		cin.ignore(ALL, '\n');
		cout << "File succesfully read!" << endl;
		cout << "Please press the *Enter* key to go back to the main menu...";
		cin.ignore(ALL, '\n');
	}
	// incase the input file did not open safely
	else
	{
		// BAD!!
		system("CLS");
		cout << "RUH ROH RAGGY!FILE WAS NOT FOUND ERRORR REEEEEEEE";
	}


} // ENDfunc

// pass one string, from each input, and check to see where the '_' and replace with ' '  
// a small function to remove the _ and replace with a space. run more than once, so a nice little function 
string replace_w_space(string word)
{
	/// <summary> </summary>
	// for every character within the string, compare it to the '_' and replace it with a space ' ' 
	for (unsigned int i =0; i< word.size(); i++)
	{
		if (word[i] == '_')
		{
			word[i] = ' '; // replace this character in the string with the space. 
		}
	}

	// return the new word with replaced with spaces. 
	return word;
} // ENDfunc



/***********
*****quit***
************/
// function to 
void quit_program(bool &run)
{
	/// <summary> </summary>
	// stop running the program now. quit out 
	run = false;

} // ENDfunc