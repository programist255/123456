#include <iostream> 
#include <string.h>
#include <locale>
#include <vector>
#include <string>
#include <stdio.h>

using namespace std;

class Baza
{
	char last_name_vidpravnuk[20];
	char name_vidpravnuk[20];
	char number_vidpravnuk[15];
	char adress_vidpravnuk[35];

	char last_name_otrymyvach[20];
	char name_otrymyvach[20];
	char number_otrymyvach[15];
	char adress_otrymyvach[35];
  
	char data[10];
	float vaga;
	float kilometraj;
	int prise;
	
public:
	void init_vidpravnuk() { // запис даних
    cout << "Прізвище: ";
    cin >> last_name_vidpravnuk;
    cout << "Ім'я відправника: ";
    cin >> name_vidpravnuk;
    cout << "Номер відправника: ";
    cin >> number_vidpravnuk;
    cout << "Адреса відправки: ";
    cin >> adress_vidpravnuk;
    cout << endl;
}
	void init_otrymyvach() { // запис даних
    cout << "Прізвище: ";
    cin >> last_name_otrymyvach;
    cout << "Ім'я отримувача: ";
    cin >> name_otrymyvach;
    cout << "Номер отримувача: ";
    cin >> number_otrymyvach;
    cout << "Адреса доставки: ";
    cin >> adress_otrymyvach;
    cout << endl;
}
	void init_vantaj(){  // запис даних
	cout<<"Вага вінтажу: ";
	cin>>vaga;
	cout<<"Кілометраж доставки: ";
	cin>>kilometraj;
	Prise();
	cout<<"Дата завантаження: ";
	cin >> data;
	cout<<endl;
  }
/////////////////////////////
	void get_vidpravnuk() { //зберігання даних
	cout << "Bідправник: " <<last_name_vidpravnuk<<"  "<<name_vidpravnuk<<endl;
    cout << "Номер відправника: "<<number_vidpravnuk<<endl;
    cout << "Адреса: "<<adress_vidpravnuk<<endl;
}
	void get_otrymyvach() { //зберігання даних
	cout << "Отримувач: " << last_name_otrymyvach<<"  "<<name_otrymyvach<<endl;
    cout << "Номер отримувача: "<<number_otrymyvach<<endl;
    cout << "Адреса: "<<adress_otrymyvach<<endl;
}
	void get_vantaj(){
  	cout << "Вага вінтажу: "<<vaga<<endl;
  	cout << "Кілометраж доставки: "<<kilometraj<<endl;
  	cout << "Ціна: "<<prise<<endl;
  	cout << "Дата завантаження: "<<data<<endl;
}
  
	void Prise();

  char* get_Last_Name_vidpravnuk(){
  	return last_name_vidpravnuk;
  }
  char* get_Name_vidpravnuk(){
  	return name_vidpravnuk;
  }
  char* get_number_vidpravnuk(){
  	return number_vidpravnuk;
  }
  char* get_adress_vidpravnuk(){
  	return adress_vidpravnuk;
  }
///

  char* get_last_name_otrymyvach(){
  	return last_name_otrymyvach;
  }
  char* get_Name_otrymyvach(){
  	return name_otrymyvach;
  }
  char* get_number_otrymyvach(){
  	return number_otrymyvach;
  }
  char* get_adress_otrymyvach(){
  	return adress_otrymyvach;
  }
///

  float get_vaga(){
  	return vaga;
  }
  int get_kilometraj(){
  	return kilometraj;
  }
  char* get_data(){
  	return data;
  }
  
};

void Baza::Prise()
{
	this->prise = ((kilometraj * 1.40) + (vaga * 1.60));
} 

class Register : public Baza
{
  	Baza baza;
  	vector<Baza> dani;
public:

	void init()
	{
    baza.init_vidpravnuk();
    baza.init_otrymyvach();
    baza.init_vantaj();
    dani.push_back(baza);
	}
	void get_init()
	{
    for (int i = 0; i < dani.size(); i++)
    {
    	dani[i].get_vidpravnuk();
    	dani[i].get_otrymyvach();
    	dani[i].get_vantaj();
    	cout<<endl;
	}
}
  
void find()
{
  	int cc;
  	cout<<"1. По відправнику: "<<endl;
  	cout<<"2. По номеру відправника: "<<endl;
  	cout<<"3. По адресі відправника: "<<endl;
  	cout<<"4. По отримувачу: "<<endl;
  	cout<<"5. По номеру отримувача: "<<endl;
	cout<<"6. По адресу отримувача: "<<endl;
  	cout<<"7. По вазі: "<<endl;
  	cout<<"8. По кілометражу: "<<endl;
  	cout<<"9. По даті завантаження: "<<endl;
  	cin>>cc;
  	int ii;
  	char hh[20];
  	char hhh[20];
  	switch(cc)
  	{
  		case 1:
			cout<<"Введіть прізвище відправника: "<<endl;
			cin>>hh;
			cout<<"Введіть ім'я відправника: "<<endl;
			cin>>hhh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_Last_Name_vidpravnuk()))
				{
					if(!strcmp(hhh, dani[i].get_Name_vidpravnuk()))
					{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
					}
					else cout<<"Дані незнайдено!!!"<<endl;
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
		  
		case 2:
			cout<<"Введіть номер відправника: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_number_vidpravnuk()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
			
		case 3:
			cout<<"Введіть адрес відправника: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_adress_vidpravnuk()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
		  
		case 4:
			cout<<"Введіть отримувача: "<<endl;
			cin>>hh;
			cout<<"Введіть ім'я отримувача: "<<endl;
			cin>>hhh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_last_name_otrymyvach()))
				{
					if(!strcmp(hhh, dani[i].get_Name_otrymyvach()))
					{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
					}
					else cout<<"Дані незнайдено!!!"<<endl;
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
			
		case 5:
			cout<<"Введіть номер отримувача: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i]. get_number_otrymyvach()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;	
			}
			break;
			
		case 6:
			cout<<"Введіть адрес отримувача: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_adress_otrymyvach()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
		  
		case 7:
			cout<<"Введіть вагу вантажу: "<<endl;
			cin>>ii;
			for(int i = 0; i < dani.size(); i++)
			{
				if(ii == dani[i].get_vaga())
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
		  
		case 8:
			cout<<"Введіть кілометраж доставки: "<<endl;
			cin>>ii;
			for(int i = 0; i < dani.size(); i++)
			{
				if(ii == dani[i].get_kilometraj())
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
			
		case 9:
			cout<<"Введіть дату завантаження: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_data()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"Дані незнайдено!!!"<<endl;
			}
			break;
			
		default:
    		false;
      		break;	 	
		}
    }
    
    void delet_dani()
    {
    int aa;
  	cout<<"1. По відправнику: "<<endl;
  	cout<<"2. По номеру відправника: "<<endl;
  	cout<<"3. По адресі відправника: "<<endl;
  	cout<<"4. По отримувачу: "<<endl;
  	cout<<"5. По номеру отримувача: "<<endl;
	cout<<"6. По адресу отримувача: "<<endl;
  	cout<<"7. По вазі: "<<endl;
  	cout<<"8. По даті завантаження: "<<endl;
  	cin>>aa;
  	int ii;
  	int num;
  	char hh[20];
  	char hhh[20];
  	switch (aa)
    {
    case 1:
	  	cout<<"Введіть прізвище відправника: "<<endl;
		cin>>hh;
		cout<<"Введіть ім'я відправника: "<<endl;
		cin>>hhh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if(!strcmp(hh, dani[i].get_Last_Name_vidpravnuk()))
			{
				if(!strcmp(hhh, dani[i].get_Name_vidpravnuk()))
				{
					dani.erase(dani.begin() + i);
				}
				else cout<<"Дані незнайдено!!!"<<endl;
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
      
    case 2:
      	cout << "Введіть номер відправника: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_number_vidpravnuk()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
      
    case 3:
      	cout << "Введіть адрес відправника: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_adress_vidpravnuk()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
      
    case 4:
      	cout<<"Введіть прізвище отримувачa: "<<endl;
		cin>>hh;
		cout<<"Введіть ім'я отримувачa: "<<endl;
		cin>>hhh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_last_name_otrymyvach()))
        	{
        		if (!strcmp(hhh, dani[i].get_Name_otrymyvach()))
        		{
					dani.erase(dani.begin() + i);
        		}
        		else cout<<"Дані незнайдено!!!"<<endl;
    		}
    		else cout<<"Дані незнайдено!!!"<<endl;
		}
    break;
      
      	case 5:
      	cout << "Введіть номер отримувача: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_number_otrymyvach()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
      
    case 6:
      	cout << "Введіть адрес отримувача: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_adress_otrymyvach()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
      
    case 7:
      	cout << "Введіть вагу: ";
      	cin>>ii;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if(ii == dani[i].get_vaga())
        	{
				dani.erase(dani.begin() + i );
        	}
        	else cout<<"Дані незнайдено!!!"<<endl;
      	}
    break;
    
    case 8:
      cout << "Введіть дату завантаження: ";
      cin>>hh;
      for (int i = 0; i < dani.size(); i++)
      {
        if (!strcmp(hh, dani[i].get_data()))
        {
			dani.erase(dani.begin() + i);
        }
        else cout<<"Дані незнайдено!!!"<<endl;
      }
    break;
      
    default:
    	false;
    break;
    }
    	
	}
};

int main()
{
  system("chcp 1251 > nul");

  int c = true ;
  Register b1;
  while(c){
    cout<<"1. Додати заказ."<<endl;
    cout<<"2. Вивести всі закази."<<endl;
	cout<<"3. Пошук заказу."<<endl;
	cout<<"4. Видалити заказ."<<endl;
    cout<<"0. Вихід."<<endl;
    
    cin>>c;
    cout<<endl;
    switch (c)
    {
    case 1:
      b1.init();
	  cout<<endl;
      break;
    case 2:
      b1.get_init();
      cout<<endl;
      break;
    case 3:
      b1.find();
      cout<<endl;
      break;
    case 4:
    	b1.delet_dani();
    	cout<<endl;
    	break;
    default:
    	false;
      break;
  	}
    }
  return 0;
}
