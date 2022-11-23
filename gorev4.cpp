#include <iostream>
#include <string>

struct province{
	std::string name;
	std::string* domain;
};
struct country {
	std::string name;
	province* capital;
};

int main(){
	province sehir;
	country ulke;
	province capital;
	sehir.name = "Ýstanbul";
	ulke.name = "Türkiye";
	capital.name = "Ankara";
	sehir.domain = &ulke.name;
	ulke.capital = &capital;

	std::cout <<sehir.name<<" ilinin bulunduðu "<< *sehir.domain <<" ülkesinin baþkenti "<< ulke.capital->name;
}
