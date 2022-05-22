//
//  shape.cpp
//  BridgePattern
//
//  Created by 李燕良 on 2022/5/15.
//
#include <iostream>
#include "shape.hpp"

void Shape::SetColor(Color *color)
{
    m_Color = color;
}


Rectangle::Rectangle()
{

}

Rectangle::~Rectangle()
{

}

void Rectangle::MyShape()
{
    std::cout << "Rectangle" << " And " << m_Color->Name() << std::endl;
}

Circle::Circle()
{

}

Circle::~Circle()
{

}

void Circle::MyShape()
{
    std::cout << "Circle" << " And " << m_Color->Name() << std::endl;
}
