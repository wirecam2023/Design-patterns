#pragma once
#include "Observer.h"

//CSubject:出版者
//接口类
class CSubject
{
public:
	CSubject(void);
	~CSubject(void);
public:
	virtual void RegisterObserver(CObserver* pObserver) = 0;
	virtual void RemoveObserver(CObserver* pObserver)   = 0;
	virtual void NotifyObservers()  = 0;


};

