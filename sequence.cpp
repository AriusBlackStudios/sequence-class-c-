//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#include "sequence.h"
#include <cstdlib>//standard c++ library
using namespace std;
namespace jade_assignment_3
{
	const sequence::size_type sequence::CAPACITY;
	sequence::sequence()
	{
		current_index = 0;
		used = 0;
	}
	
	void sequence::start()
	{
		current_index = 0;
	}
	
	void sequence::advance()
	{//slide to the right
		current_index++;
	}
	
	//based on insert, only we add to the spot ahead of the current index
	void sequence::attach(const value_type& entry)
	{//adds a new item to the sequence AFTER the current item
		for(int i = used-1; i>(int)current_index; --i)
			{
				data[i+1]=data[i];
			}
			data[current_index+1] = entry;
			used++;
			current_index++;
	}
	//basedon textbook
	 void sequence::insert(const value_type& entry)
    {//places a new item BEFORE the current item
		for(int i = used-1; i>(int)current_index; --i){
			data[i+1]=data[i];
		}
		data[current_index] = entry;
		used++;
	}

	//based on textbook
	void sequence::remove_current()
	{//removes the current item from the sequence
		for(size_type i = current_index+1; i<used; i++)
		{
			data[i-1]=data[i];
		}
			used--;
			current_index--;
	}

}


