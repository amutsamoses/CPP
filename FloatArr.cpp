#ifndef _FLOATARR_
#define _FLOATARR_

#include <iostream>
using namespace std;

class BadIndex
{
	private:
		int index;
	public:
		BadIndex(int i) {index = i;}
		int getBadIndex() const {return index;}
};

class FloatArr
{
	private:
		float* arrPtr; //dynamic number
		int max;  //maximum number without reallocating more memory
		int cnt; //current number of elements
		void expand (int newSize); //function to help to enlarge the array
	public:
		FloatArr(int n = 256); //constructor
		FloatArr(int n, float val);
		FloatArr(const FloatArr& src);
		~FloatArr();
		FloatArr& operator= (const FloatArr&); //Assignment
		
		int length() const {return cnt;}
		
		//subscript operator
		float& operator[] (int i) throw(BadIndex);
		float operator[] (int i) const throw (BadIndex);
		
		//method to append a float value or an array of floats
		void append(float val);
		void append (const FloatArr& v);
		
		FloatArr& operator+=(float val)
		{
			append (val); return *this;
		}
		FloatArr& operator+= (const FloatArr& v)
		{
			append(v); return *this;
		}		
		
		//method to insert a float value or an array of float values
		void insert (float val, int pos) throw(BadIndex);
		void insert (const FloatArr& v, int pos) throw (BadIndex);
		void remove (int pos) throw(BadIndex); //remove at pos
		
		//output the array
		friend ostream& operator<<(ostream& os, const FloatArr& v)
		{
			//save field width
			int w = os.width();
			for (float *p = v.arrPtr; p < v.arrPtr + v.cnt; ++p)
			{
				os.width(w); os << *p;
			}
			return os;
		}
};
#endif //_FLOATARR_