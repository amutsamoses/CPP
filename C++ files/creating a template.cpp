//_______________________________________________________
// array.h
//Use of class templates to represent arrays
//_______________________________________________________

#ifndef _ARRAY_H_
#define _ARRAY_H_

#include <iostream>
#include <iomanip>
using namespace std;

class BadIndex
{
	private:
		int index;
	public:
		BadIndex(int i) : index(i){}
		int getBadIndex() const {return index;}
};

class OutOfRange {/*Without data members */};

template <class T, int n = 256>
class Array
{
	private:
		//The array
		T arr[n];
		//Current number of elements
		int cnt;
	public:
		Array(){ cnt = 0;}
		Array( const T& val );
		
		int length() const {return cnt; }
		int size()   const {return n;}
		
		T&   (int i) throw (BadIndex)
		{
			if(i<0 || i >= cnt) throw BadIndex(i);
			return arr[i];
		}
		const T& operator[] (int i) const throw (BadIndex)
		{
			if(i < 0 || i >= cnt) throw BadIndex(i);
			return arr[i];
		}
		Array& operator+=( float val ) throw (OutOfRang)
		{
			append (val); 
			return *this;
		}
		Array& operator += (const Array& v)  throw (OutOfRange)
		{
			append(v);
			return *this;
		}
		void append (T val) throw(OutOfRange);
		void append (const Array& v) throw (OutOfRange);
		
		void insert ( T val, int pos )
									throw (BadIndex, OutOfRange);
		void insert ( const Array& v, int pos )
									throw (BadIndex, OutOfRange);
								
		void remove (int pos ) throw (BadIndex); 													
};

tempate <class T, int n >
Array<T, n>: :Array (int m, const T& val
{
	cnt - m;
	for(int i=0; i<cnt; i++)
		arr[i] = val;
}

template <class T, int n >
void Array<T, n>: :append (T val) throw(OutOfRange)
{
	if (cnt < n)
		arr[cnt++] = val;
	else
		throw OutOfRange();
}

template <class T, int n >
void Array<T, n>: :append (const Array<T, n>& v) throw (OutOfRange)
{
	//not enough space
	if(cnt + v.cnt > n)
		throw OutOfRange();
	
	//necesssary if	
	int count = v.cnt;
	
	//v == *this
	for (int i=0; i < count; ++i)
		arr[cnt++] = v.arr[i];
}

template <class T, int n >
void Array<T, n>::insert (T val, int pos)
										throw (BadIndex, OutOfRange)
{
	insert(Array<T, n>(1, val), pos);
}

template <class T, int n >
void Array<T, n>: :insert( const Array<T, n>& v, int pos)
								throw (BadIndex, OutOfRange)
{
	if( pos < 0 || pos >= cnt)
	
		//invalid position
		throw BadIndex ();
	
	if(n < cnt + v.cnt)
		throw OutOfRange ();
		
	int i;
	
	// shift up
	for( i = cnt-1; i >= pos; --i)
	//starting at pos
		arr[i + v.cnt] = arr[i];
		
	//fill the gap
	for( i = 0; i < v.cnt; ++i)
		arr[i + pos] = v.arr[i];
	cnt = cnt + v.cnt;	
}

template <class T, int n >
void Array<T, n>: :remove(int pos) throw (BadIndex)
{
	if (pos >= 0 && pos < cnt)
	{
		for( int i = pos; i < cnt-1; ++i )
			arr[i] = arr[i+1];
		--cnt;
	}
	else
	throw BadIndex(pos);	
}						

template <class T, int n >
ostream& operator<< (ostream os, const Array<T, n>& v)
{
	//save the feild width
	int w = os.width();
	
	for( int i = 0; i < v.cnt; ++1)
	{
		os.width(w);   os << v.arr[i];	
	} 
	os << endl;
	return os;
}		
#endif


//=============================================================
//DayTime.h
//Class DayTime with relational operator,
//the operator ++ and -- (prefix and postfix),
//and the operators << and >> for I/O
//-------------------------------------------------------------


//------------------------------------------------------------
//Array_t.cpp
//Testing class templates Array<T, n>.
//------------------------------------------------------------

#include <iostream>
#include <iomanip>
using namespace std;

typedef Array< int, 100>  intArr;
typedef Array<double>     DoubleArr;

typedef Array<DayTime, 5> DayTimerArr;

int main()
{
	try
	{
		const DoubleArr vd( 10, 9.9);
		DoubleArr kd;
		
		cout << "\nThis is the Constant array of doubles: \n";
		cout << setw(8) << vd;
		
		kd = vd;
		cout << "\nAn array of doubles after the assignment: " << endl;
		
		cout << setw(8) <<kd;
		
		//delete element at position 3
		kd.remove(3);
		
		//add new element
		kd.append(10.0);
		// and repeat! 
		kd.append(20.0);
		
		cout << "\nThis is the modified array: " << endl;
		
		cout << setw(8) << kd;
		
		IntArr vi;
		
		int i;
		for (i=0; i < 10; i++)
			vi.append(rand()/100);
			
		cout << "\nThis is the array of the int values: \n" ;
		cout << setw(12) << vi;
		
		IntArr ki(vi);
		cout << "\nThis is the copy of the array: \n" ;
		cout << setw(12) << ki;
		
		//Array of daytime objects.
		DayTimeArr vt;
		DayTime temp;
		
		for( i=0; i < 3; i++)
		{
			if( !(cin >> temp))
				break;
			vt.append(temp);
		}
		
		cout << "\nThe array with objects of type DayTime: \n" ;
		for( i=0; i < 3; i++)
			cout << setw(20) << vt[i] << endl;	
	}
	
	catch (BadIndex& err)
	{
		cerr << "\nIndex" << err.getBadIndex()
			 << "invalid" ;
		exit (i)
	}
	catch(OutOfRange& )
	{
		cerr << "\nArray is full!" ;
		exit (2);
	}
	
	return 0;
}