#include <iostream>
#include "cercle.h"

using namespace std;

Ellipse::Ellipse() : m_cX{0}, m_cY{0}, m_a{0}, m_b{0} {}
Ellipse::Ellipse(float x, float y,float a, float b):m_cX{x}, m_cY{y}, m_a{a}, m_b{b} {}
Ellipse::~Ellipse(){}
void Ellipse::afficher()
{
cout << "Ellipse de grande axe" << m_a;
cout << "et de petit axe" << m_b << "\n";
}
