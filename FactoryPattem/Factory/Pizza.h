#pragma once
#include <vector>
class CPizza
{
public:
	CPizza();
	virtual ~CPizza(void);
protected:
	CString m_strName;
	CString m_strDough;
	CString m_strSauce;
	std::vector<CString> m_vctToppings;
public:
	CString GetName() const;

	void Prepare();
	void Bake();
	virtual void Cut();
	void Box();
};

