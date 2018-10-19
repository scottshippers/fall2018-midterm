	/**
		Description: Program that counts how many times a single character 
        	occurs in a string of characters provided by a user
        	Author: Scott Shippers
        	Email: shipperss@student.vvc.edu
        	Date Created: 10/19/2018
	*/

	#include <iostream>
	#include <string>


	using namespace std;

	//  variable declarations for user input and for functions to count character:

	string get_string(string s);
	int get_char(string c);
    


	int main()
	{

	// user prompt for string of characters
   
	cout << get_char("Enter a continuous string of characters: ") << endl;
  
	}
	/**
        	@param get_string will get string of characters typed by user
        	@return the value that is typed from the user
	*/
    
	string get_string(string s) 
	{
        	string value;
        	cout << s;
        	cin >> value;
        	return value;
	}
	/**
        	@param get_char will use the string of charachters from the user as reference
        	@param somCh used to store character chosen to be counted
        	@param for loop ensures entire string of characters are checked
        	@param if statement ref. the chosen char, checks all and counts them
        	returns count to user
	*/

	int get_char(string c)
	{
        	string value;
        	cout << c << endl;
        	cin >> value;
    
        	char someCh;
        	cout << "Enter character to be counted" << endl;
        	cin >> someCh;
    
        	int count = 0;
    
        	for (int i = 0; i < value.length(); i++)
        {
        	if (value.at(i) == (someCh))
            	count++;
        }
        	return count;
	}




