//jade ainsworth
//data structures section 4
//fall 2021
//instructor kretlow
#ifndef SEQUENCE_H
#define SEQUENCE_H
#include <cstdlib>
namespace jade_assignment_3
{
class sequence{
    public:
        //TYPEDEFS and MEMBER CONSTANTS
        typedef double value_type;
        typedef std::size_t size_type;
        static const size_type CAPACITY = 30;

        //CONSTRUCTORS
        sequence();
		
        //MODIFICATION MEMBER FUNCTIONS
        void start();
        void advance();
        void attach(const value_type& entry);
        void insert(const value_type& entry);
        void remove_current();

        //CONSTANT MEMBER FUNCTIONS
        size_type size()const { return used;}
        bool is_item()const { return used<CAPACITY;}
        value_type current()const { return data[current_index];}
        
    private:
        size_type data[CAPACITY];
        size_type used;
		size_type current_index;
};



}





#endif // SEQUENCE1_H
