///////////////////////////////////////////////////////////
//  Sphere.cpp
//  Implementation of the Class Sphere
//  Created on:      25-oct.-2018 20:47:54
//  Original author: p482457
///////////////////////////////////////////////////////////

#include "Sphere.h"


Sphere::Sphere(const Point3D& pt, float r)
: PrimitiveAbs(pt)	// A Completer...
{
	if (r < 0.0)
		throw std::range_error("Invalid radius value for sphere. Must be larger than 0");
	// Fait
	m_radius = r;
}

Sphere::~Sphere(){
}

Sphere * Sphere::clone() const
{
	// A Completer...
	// Fait
	return new Sphere(m_center, m_radius);
}

size_t Sphere::getNbParameters() const {

	// A Completer...
	// Fait
	return 1;
}

PrimitiveParams Sphere::getParameters() const {

	// A Completer...
	//Fait 
	PrimitiveParams vecteurParams = PrimitiveParams();
	vecteurParams.push_back(m_radius);
	return vecteurParams;
}

void Sphere::setParameter(size_t pIndex, float pValue){
	if (pIndex != 0)
		throw std::range_error("Invalid parameter index for sphere. Must be 0");

	if (pValue < 0.0)
		throw std::range_error("Invalid radius value for sphere. Must be larger than 0");

	// A Completer...
	// Fait
	m_radius = pValue;
}

std::ostream & Sphere::toStream(std::ostream & o) const
{
	return o << "Sphere:    center = " << m_center << "; r = " << m_radius << ";";
}
