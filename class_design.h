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

class Person  //Person类
{
private:
	const string s1 = "男";
	const string s2 = "女";
public:
	string Name;
	int Age;
	string Sex;
	string Address;
	string Telephone;
	//对象的赋值
	Person()
	{
		cout << "请输入姓名：";
		cin >> Name;
		cin.ignore();  //清空缓存区

		cout << "请输入年龄：";
		cin >> Age;
		cin.ignore();  //清空缓存区


		//性别
		while (1)
		{
			cout << "请输入性别:";
			cin >> Sex;
			if (Sex == s1 || Sex == s2)
			{
				break;
			}
			else
			{
				cout << "请重新输入" << endl;
			}
		}
		cin.ignore();  //清空缓存区

		cout << "请输入家庭地址：";
		cin >> Address;
		cin.ignore();  //清空缓存区

		//电话号码
		while (1)
		{
			cout << "请输入电话号码：";
			cin >> Telephone;
			if (Telephone.length() == 11)
			{
				break;
			}
			else
			{
				cout << "错误" << endl;
			}

		}
		cin.ignore();  //清空缓存区
	}
	void ShowPerson();
};

class Teacher :virtual public Person  //Teacher类
{
public:
	string Title;
	Teacher()
	{
		cout << "请输入职称：";
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
		cout << "请输入职务：";
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
		cout << "请输入薪资：";
		cin >> Wages;
		PrintAreaLine();
	}
	void show();
};





//类Person的函数
void Person::ShowPerson()
{
	cout << "姓名：" << Name << endl;
	cout << "年龄：" << Age << endl;
	cout << "性别：" << Sex << endl;
	cout << "电话号码：" << Telephone << endl;
	cout << "家庭住址：" << Address << endl;
}


//类Teacher的函数
void Teacher::display()
{
    ShowPerson();
	cout << "职称：" << Title << endl;
}


//类Cadre的函数
void Cadre::ShowData()
{
	ShowPerson();
	cout << "职务：" << Post << endl;
}


//类TeacherCadre的函数
void TeacherCadre::show()
{
	display();
	cout << "职务：" << Post << endl;
	cout << "薪水：" << Wages << endl;
}
