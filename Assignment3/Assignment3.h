//Ryan Kinsella, 15rklk, 10194574
#pragma once


#ifdef	ASSIGNMENT3_EXPORTS
#define ASSIGNMENT3API __declspec(dllexport)
#else
#define ASSIGNMENT3API __declspec(dllimport)
#endif

//#ifdef __cplusplus
//extern "C" {
//#endif

#include <iostream>
#include <istream>
using namespace std;

//ASSIGNMENT3 double* addCplx(double a0, double a1, double a2, double a3);
namespace nspace {
	class FractionException {
	public:
		ASSIGNMENT3API FractionException(const string&);
		ASSIGNMENT3API string& what();
	private:
		string message;
	};


	class Fraction {
	public:
		// Constructs a fraction with numerator 0 and denominator 1.
		ASSIGNMENT3API Fraction();

		// Constructs a fraction with numerator t and denominator 1.
		ASSIGNMENT3API Fraction(int t);

		// Constructs a fraction with given numerator and denominator.
		ASSIGNMENT3API Fraction(int t, int b);

		// Returns the numerator.
		ASSIGNMENT3API int numerator() const;

		// Returns the denominator.
		ASSIGNMENT3API int denominator() const;

		// Updates a fraction by adding in another fraction value.
		ASSIGNMENT3API Fraction& operator+=(const Fraction& right);

		// Increment fraction by 1.
		ASSIGNMENT3API Fraction& operator++(); 			// Preincrement form
		ASSIGNMENT3API Fraction operator++(int unused); // Postincrement form

										 // Compare one fraction value to another.
										 // Result is negative if less than right, zero if equal, and
										 // positive if greater than right.
		ASSIGNMENT3API int compare(const Fraction& right) const;
		
		

	private:
		// Compute the greatest common denominator of two integer values.
		int gcd(int n, int m);

		// Place the fraction in lowest common denominator form.
		void normalize();

		

		int top;			// numerator
		int bottom;		// denominator
	};


	// Non-member overloaded arithmetic operators
	ASSIGNMENT3API Fraction operator+(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API Fraction operator-(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API Fraction operator*(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API Fraction operator/(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API Fraction operator-(const Fraction& value);

	// Non-member overloaded boolean operators
	ASSIGNMENT3API bool operator<(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API bool operator<=(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API bool operator==(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API bool operator!=(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API bool operator>=(const Fraction& left, const Fraction& right);
	ASSIGNMENT3API bool operator>(const Fraction& left, const Fraction& right);

	// Non-member stream operators
	ASSIGNMENT3API ostream& operator<<(ostream& out, const Fraction& value);
	ASSIGNMENT3API istream& operator >> (istream& in, Fraction& retFrac);
}

//#ifdef __cplusplus
//}
//
//#endif // __cplusplus


