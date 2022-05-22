//
//  color.hpp
//  BridgePattern
//
//  Created by 李燕良 on 2022/5/15.
//

#ifndef color_hpp
#define color_hpp

#include <stdio.h>
#include <string>

class Color
{
public:
    Color(){}
    virtual ~Color(){}
    virtual std::string Name() = 0;
protected:
    std::string m_Name;
};

class Black : public Color
{
public:
    Black();
    virtual ~Black();
    virtual std::string Name();
};

class Red : public Color
{
public:
    Red();
    virtual ~Red();
    virtual std::string Name();
};

#endif /* color_hpp */
