//
//  shape.hpp
//  BridgePattern
//
//  Created by 李燕良 on 2022/5/15.
//

#ifndef shape_hpp
#define shape_hpp

#include <stdio.h>

#include "color.hpp"

//抽象类
class Shape
{
public:
    Shape(){}
    virtual ~Shape(){}
    void SetColor(Color* color);
    virtual void MyShape() = 0;
protected:
    Color* m_Color;
};

class Rectangle : public Shape
{
public:
    Rectangle();
    ~Rectangle();

    virtual void MyShape();
};

class Circle : public Shape
{
public:
    Circle();
    ~Circle();

    virtual void MyShape();
};

#endif /* shape_hpp */
