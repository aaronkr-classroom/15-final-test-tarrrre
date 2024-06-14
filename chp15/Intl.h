
#ifndef GUARD_INTL_H
#define GUARD_INTL_H

#include "Core.h"


class Intl : public Core {
public:
	// �� ������ ��� �Ϲ������� Core::Core()�� ����Ͽ�
	// ��ü�� �⺻ Ŭ�������� ����� �κ��� �ʱ�ȭ
	Intl() : toeic(0) {};
	Intl(istream& is) { read(is); };

	double grade() const;
	istream& read(istream&);
protected:
	Intl* clone() const { return new Grad(*this); }
private:
	double toeic; // ��
};

#endif