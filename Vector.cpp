#include "Vector.h"
#include <stdio.h>
#include <iostream>


int Vector::count = 0;

Vector::Vector()
{
count++;
number = count;
cout<<endl<<"Created vector "<<number<<":";
}
Vector::Vector(int d)
{
count++;
number = count;
	dim=d;
	b=new double [dim];
	for (int i=0; i<dim; i++)
		b[i]=0;
cout <<endl<<"Created vector "<<number<<":";
}
Vector::Vector(int d, double *x) {
	count++;
	number=count;
	dim=d;
	b=new double [dim];
	for (int i=0; i<dim; i++)
	b[i]=x[i];
	cout<<endl<<"Created vector "<< number<<":";
}

Vector& Vector::operator +(Vector&r)              // sum
{
	cout<<endl<<"Sum of vector "<<number<<" and "<<r.number<<":";
		Vector tmp (dim);
		for (int i=0; i<dim; i++)
		tmp.b[i]=b[i]+r.b[i];
		tmp.printb();
		return tmp;
}

Vector::~Vector()                  // Destroying vector
{
	cout<<endl<<"Destroying vector #"<<number;
	delete[]b;
}

Vector& operator-(Vector &l, Vector &r)       // Subtraction
{
cout<<endl<<"Subtraction vectors "<<l.number<<" and  "<<r.number<<":";
Vector tmp (l.dim);
for (int i = 0; i < l.dim; i++)
 	tmp.b[i]=l.b[i]-r.b[i];
		tmp.printb();
	return tmp;

}
Vector::Vector(Vector &x)            // Copy vectors
{
	count++;
	number=count;
	dim=x.dim;
	b = new double[dim];
	for(int i = 0;i<dim;i++)
		b[i]=x.b[i];
	cout<<"Copy vectors. Create vector ?"<<number<<endl;
}

double Vector::operator*(Vector &r)
{
	Vector tmp (r.dim);
	int p=0;
	for (int i=0; i<r.dim; i++)
	p=p+(b[i]*r.b[i]);
	return p;
}

Vector& Vector::operator*(int c)            // scalar product
{
	Vector tmp (dim);
	for (int i=0; i<dim; i++)
		tmp.b[i]=c*b[i];
	tmp.printb();
	return tmp;
}

Vector& Vector::operator=(Vector &r)     // assignment
{
	Vector tmp (dim);
	for(int i=0;i<dim;i++)
		tmp.b[i]=r.b[i];
	tmp.printb();
	return tmp;
}

void Vector::printb()                // vector printing
{
cout<<endl<<"Vector "<<number<<": ";
cout<<"(";
for (int i=0; i<dim; i++)
	{
		cout<<b[i];
		if(i<dim-1)
			cout<<",";
	}
cout<<")";
}

Vector& Vector::operator-()     // Unary minus
	{
		Vector tmp(dim,b);
		for (int i = 0;i<dim;i++)
			if (tmp.b[i]!=0) tmp.b[i] = -tmp.b[i];
		tmp.printb();
		return tmp;
	}
