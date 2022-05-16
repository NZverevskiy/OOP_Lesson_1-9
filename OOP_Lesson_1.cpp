#include <iostream>
#include <string>
using namespace std;
//создание класса
class student {
//public://все параметы ниже доступны для создания характеристик обьекта//добавляем значение через методы
private://параметры ниже будут доступны только через методы
	int age;
	string first_name;
	string second_name;
	string mail;
	string phone;
	char group;
	void SetAllFields(int age,	string first_name,	string second_name) {
		this->age = age; this->first_name = first_name; this->second_name = second_name;
		//this->age применяется в классе что бы указать, что в конкретном классе доступный параметр и он устанавливается
	}
	void printAll(int age, string first_name, string second_name) {

	}
};
int main()
{	//добавление характеристик возможно при public характеристик класса
	setlocale(LC_ALL, "Russian");
	student Alex;//создание классу обьекта алекс
	//Alex.first_name = "Alex";//добавление значений
	//Alex.second_name = "Member";
	Alex.SetAllFields(14, "Alex", "member");

}