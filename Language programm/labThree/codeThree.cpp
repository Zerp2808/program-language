#include <iostream>
#include <string>
 using namespace std; 
 int main() { 
	locale loc(ru_RU.UTF-8"); 
	locale::global(loc);
	wstring textOne = L"АбсолюТно СЛучайНый Набор БуКв";  
	for (int i = 0; i < textOne.length(); i++) { 
		if ((textOne[i] >= L'а' && textOne[i] <= L'я') || (textOne[i] >= L'А' && textOne[i] <= L'Я')) {   
			for(wchar_t & textTwo: textOne) {  
				textTwo = toupper(textTwo,loc);      
			}   
		} else textOne.erase(i,1); 
	}  int key; 
	cin >> key; 
		for(unsigned int p = 0; p < textOne.size(); p++) 
			for(int j = 0; j < key; j++) {  
		if(textOne[p] != 'Я') 
			textOne[p]++;   
		else   
			textOne[p] = 'А'; 
		} 
		wcout<<textOne<<endl; 
		return 0; 
		} 