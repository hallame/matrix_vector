#ifndef VECTOR_H
#define VECTOR_H




#include <iostream>
using namespace std;

class Vector
{
	public:
	static int count;
	Vector (int d);
	Vector (int d,double *x);
	Vector(const Vector &);      //  copy constructor
	Vector();                   // constructor
	~Vector();                 // destructor

	Vector (Vector &x);
	void printb();
	Vector& operator +(Vector &r);
	friend Vector& operator -(Vector&l, Vector&r);
	double operator*(Vector&r);

	Vector& operator=(Vector&r);

	Vector& operator-();
	Vector& operator*(int c);


	private:
	int dim;
	double *b;
	int number;

};

#endif // VECTOR_H
