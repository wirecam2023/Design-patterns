//
//  main.cpp
//  BridgePattern
//
//  Created by 李燕良 on 2022/5/15.
//

#include <iostream>
#include "shape.hpp"
#include "color.hpp"

#define DELETEOBJECT(x) if(x != nullptr){delete x; x = nullptr;}

int main(int argc, const char * argv[]) {
    // insert code here...
    
     Color* red = new Red();
     Color* black = new Black();

     //组合一个黑色的圆和一个红色的方形
     Shape* rectangle = new Rectangle();
     rectangle->SetColor(red);
     Shape* circle = new Circle();
     circle->SetColor(black);

     rectangle->MyShape();
     circle->MyShape();

     DELETEOBJECT(red);
     DELETEOBJECT(black);
     DELETEOBJECT(rectangle);
     DELETEOBJECT(circle);
    
    std::cout << "Hello, World!\n";
    return 0;
}
