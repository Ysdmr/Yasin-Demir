#include <iostream>

void yuzlerB(int value){// Say�n�n y�zler basama��n� harflerle yazd�r
	switch(value)
	{
		case 1:
			std::cout<<"y�z ";
			break;
		case 2:
			std::cout<<"iki y�z ";
			break;
		case 3:
			std::cout<<"�� y�z ";
			break;
		case 4:
			std::cout<<"d�rt y�z ";
			break;
		case 5:
			std::cout<<"be� y�z ";
			break;
		case 6:
			std::cout<<"alt� y�z ";
			break;
		case 7:
			std::cout<<"yedi y�z ";
			break;
		case 8:
			std::cout<<"sekiz y�z ";
			break;
		case 9:
			std::cout<<"dokuz y�z ";
			break;
		default:
			std::cout<<"";
			break;
	}
}

void onlarB(int value){// Say�n�n onlar basama��n� yazd�r 
	switch(value)
	{
		case 1:
			std::cout<<"on ";
			break;
		case 2:
			std::cout<<"yirmi ";
			break;
		case 3:
			std::cout<<"otuz ";
			break;
		case 4:
			std::cout<<"k�rk ";
			break;
		case 5:
			std::cout<<"elli ";
			break;
		case 6:
			std::cout<<"altm�� ";
			break;
		case 7:
			std::cout<<"yetmi� ";
			break;
		case 8:
			std::cout<<"seksen ";
			break;
		case 9:
			std::cout<<"doksan ";
			break;
		default:
			std::cout<<"";
			break;
	}
}

void birlerB(int value){//Say�n�n birler basama��n� yazd�r
	switch(value)
	{
		case 1:
			std::cout<<"bir\n";
			break;
		case 2:
			std::cout<<"iki\n";
			break;
		case 3:
			std::cout<<"��\n";
			break;
		case 4:
			std::cout<<"d�rt\n";
			break;
		case 5:
			std::cout<<"be�\n";
			break;
		case 6:
			std::cout<<"alt�\n";
			break;
		case 7:
			std::cout<<"yedi\n";
			break;
		case 8:
			std::cout<<"sekiz\n";
			break;
		case 9:
			std::cout<<"dokuz\n";
			break;
		default:
			std::cout<<"\n";
			break;
	}
}

int main()
{
	int sayi{1};
	while (sayi<1000)
	{
		yuzlerB(sayi/100);
		onlarB(sayi%100/10);
		birlerB(sayi%10);
		sayi++;	
	}
	std::cout<<"bin";
	return 0;
}
