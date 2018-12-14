/*
file: word.cpp
Description: 
Author: Scott Shippers
Email: shipperss@student.vvc.edu
Date Created: Dec 2018 
*/

#include<iostream>
#include "word.h"

using namespace std;	

	Word::Word(std::string  word)
	{
	   m_word = word;
	   m_count = 1;
	}
	

	void Word::add_count(int count)
	{
	   m_count++;
	}
	

	void Word::add_line(int line)
	{
	   m_line.push_back(line);
	}

