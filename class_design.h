#include<iostream>
#include <string>
using namespace std;

void PrintAreaLine()
{
	cout << "===========================" << endl;
}

void PrintStar()
{
	cout << "***************************" << endl;
}

class Person  //Person��
{
private:
	const string s1 = "��";
	const string s2 = "Ů";
public:
	string Name;
	int Age;
	string Sex;
	string Address;
	string Telephone;
	//����ĸ�ֵ
	Person()
	{
		cout << "������������";
		cin >> Name;
		cin.ignore();  //��ջ�����

		cout << "���������䣺";
		cin >> Age;
		cin.ignore();  //��ջ�����


		//�Ա�
		while (1)
		{
			cout << "�������Ա�:";
			cin >> Sex;
			if (Sex == s1 || Sex == s2)
			{
				break;
			}
			else
			{
				cout << "����������" << endl;
			}
		}
		cin.ignore();  //��ջ�����

		cout << "�������ͥ��ַ��";
		cin >> Address;
		cin.ignore();  //��ջ�����

		//�绰����
		while (1)
		{
			cout << "������绰���룺";
			cin >> Telephone;
			if (Telephone.length() == 11)
			{
				break;
			}
			else
			{
				cout << "����" << endl;
			}

		}
		cin.ignore();  //��ջ�����
	}
	void ShowPerson();
};

class Teacher :virtual public Person  //Teacher��
{
public:
	string Title;
	Teacher()
	{
		cout << "������ְ�ƣ�";
		cin >> Title;
	}
	void display();
};

class Cadre :virtual public Person
{
public:
	string Post;
	Cadre()
	{
		cout << "������ְ��";
		cin >> Post;
	}
	Cadre(string post) :Post(post) {}
	void ShowData();
};

class TeacherCadre :public Teacher, public Cadre
{
public:
	double Wages;
	TeacherCadre()
	{
		cout << "������н�ʣ�";
		cin >> Wages;
		PrintAreaLine();
	}
	void show();
};





//��Person�ĺ���
void Person::ShowPerson()
{
	cout << "������" << Name << endl;
	cout << "���䣺" << Age << endl;
	cout << "�Ա�" << Sex << endl;
	cout << "�绰���룺" << Telephone << endl;
	cout << "��ͥסַ��" << Address << endl;
}


//��Teacher�ĺ���
void Teacher::display()
{
    ShowPerson();
	cout << "ְ�ƣ�" << Title << endl;
}


//��Cadre�ĺ���
void Cadre::ShowData()
{
	ShowPerson();
	cout << "ְ��" << Post << endl;
}


//��TeacherCadre�ĺ���
void TeacherCadre::show()
{
	display();
	cout << "ְ��" << Post << endl;
	cout << "нˮ��" << Wages << endl;
}
