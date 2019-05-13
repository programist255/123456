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
	void init_vidpravnuk() { // ����� �����
    cout << "�������: ";
    cin >> last_name_vidpravnuk;
    cout << "��'� ����������: ";
    cin >> name_vidpravnuk;
    cout << "����� ����������: ";
    cin >> number_vidpravnuk;
    cout << "������ ��������: ";
    cin >> adress_vidpravnuk;
    cout << endl;
}
	void init_otrymyvach() { // ����� �����
    cout << "�������: ";
    cin >> last_name_otrymyvach;
    cout << "��'� ����������: ";
    cin >> name_otrymyvach;
    cout << "����� ����������: ";
    cin >> number_otrymyvach;
    cout << "������ ��������: ";
    cin >> adress_otrymyvach;
    cout << endl;
}
	void init_vantaj(){  // ����� �����
	cout<<"���� ������: ";
	cin>>vaga;
	cout<<"ʳ�������� ��������: ";
	cin>>kilometraj;
	Prise();
	cout<<"���� ������������: ";
	cin >> data;
	cout<<endl;
  }
/////////////////////////////
	void get_vidpravnuk() { //��������� �����
	cout << "B���������: " <<last_name_vidpravnuk<<"  "<<name_vidpravnuk<<endl;
    cout << "����� ����������: "<<number_vidpravnuk<<endl;
    cout << "������: "<<adress_vidpravnuk<<endl;
}
	void get_otrymyvach() { //��������� �����
	cout << "���������: " << last_name_otrymyvach<<"  "<<name_otrymyvach<<endl;
    cout << "����� ����������: "<<number_otrymyvach<<endl;
    cout << "������: "<<adress_otrymyvach<<endl;
}
	void get_vantaj(){
  	cout << "���� ������: "<<vaga<<endl;
  	cout << "ʳ�������� ��������: "<<kilometraj<<endl;
  	cout << "ֳ��: "<<prise<<endl;
  	cout << "���� ������������: "<<data<<endl;
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
  	cout<<"1. �� ����������: "<<endl;
  	cout<<"2. �� ������ ����������: "<<endl;
  	cout<<"3. �� ����� ����������: "<<endl;
  	cout<<"4. �� ����������: "<<endl;
  	cout<<"5. �� ������ ����������: "<<endl;
	cout<<"6. �� ������ ����������: "<<endl;
  	cout<<"7. �� ���: "<<endl;
  	cout<<"8. �� ����������: "<<endl;
  	cout<<"9. �� ��� ������������: "<<endl;
  	cin>>cc;
  	int ii;
  	char hh[20];
  	char hhh[20];
  	switch(cc)
  	{
  		case 1:
			cout<<"������ ������� ����������: "<<endl;
			cin>>hh;
			cout<<"������ ��'� ����������: "<<endl;
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
					else cout<<"��� ����������!!!"<<endl;
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
		  
		case 2:
			cout<<"������ ����� ����������: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_number_vidpravnuk()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
			
		case 3:
			cout<<"������ ����� ����������: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_adress_vidpravnuk()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
		  
		case 4:
			cout<<"������ ����������: "<<endl;
			cin>>hh;
			cout<<"������ ��'� ����������: "<<endl;
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
					else cout<<"��� ����������!!!"<<endl;
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
			
		case 5:
			cout<<"������ ����� ����������: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i]. get_number_otrymyvach()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;	
			}
			break;
			
		case 6:
			cout<<"������ ����� ����������: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_adress_otrymyvach()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
		  
		case 7:
			cout<<"������ ���� �������: "<<endl;
			cin>>ii;
			for(int i = 0; i < dani.size(); i++)
			{
				if(ii == dani[i].get_vaga())
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
		  
		case 8:
			cout<<"������ ��������� ��������: "<<endl;
			cin>>ii;
			for(int i = 0; i < dani.size(); i++)
			{
				if(ii == dani[i].get_kilometraj())
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
			}
			break;
			
		case 9:
			cout<<"������ ���� ������������: "<<endl;
			cin>>hh;
			for(int i = 0; i < dani.size(); i++)
			{
				if(!strcmp(hh, dani[i].get_data()))
				{
					dani[i].get_vidpravnuk();
					dani[i].get_otrymyvach();
					dani[i].get_vantaj();
				}
				else cout<<"��� ����������!!!"<<endl;
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
  	cout<<"1. �� ����������: "<<endl;
  	cout<<"2. �� ������ ����������: "<<endl;
  	cout<<"3. �� ����� ����������: "<<endl;
  	cout<<"4. �� ����������: "<<endl;
  	cout<<"5. �� ������ ����������: "<<endl;
	cout<<"6. �� ������ ����������: "<<endl;
  	cout<<"7. �� ���: "<<endl;
  	cout<<"8. �� ��� ������������: "<<endl;
  	cin>>aa;
  	int ii;
  	int num;
  	char hh[20];
  	char hhh[20];
  	switch (aa)
    {
    case 1:
	  	cout<<"������ ������� ����������: "<<endl;
		cin>>hh;
		cout<<"������ ��'� ����������: "<<endl;
		cin>>hhh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if(!strcmp(hh, dani[i].get_Last_Name_vidpravnuk()))
			{
				if(!strcmp(hhh, dani[i].get_Name_vidpravnuk()))
				{
					dani.erase(dani.begin() + i);
				}
				else cout<<"��� ����������!!!"<<endl;
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
      
    case 2:
      	cout << "������ ����� ����������: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_number_vidpravnuk()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
      
    case 3:
      	cout << "������ ����� ����������: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_adress_vidpravnuk()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
      
    case 4:
      	cout<<"������ ������� ���������a: "<<endl;
		cin>>hh;
		cout<<"������ ��'� ���������a: "<<endl;
		cin>>hhh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_last_name_otrymyvach()))
        	{
        		if (!strcmp(hhh, dani[i].get_Name_otrymyvach()))
        		{
					dani.erase(dani.begin() + i);
        		}
        		else cout<<"��� ����������!!!"<<endl;
    		}
    		else cout<<"��� ����������!!!"<<endl;
		}
    break;
      
      	case 5:
      	cout << "������ ����� ����������: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_number_otrymyvach()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
      
    case 6:
      	cout << "������ ����� ����������: ";
      	cin>>hh;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if (!strcmp(hh, dani[i].get_adress_otrymyvach()))
        	{
				dani.erase(dani.begin() + i);
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
      
    case 7:
      	cout << "������ ����: ";
      	cin>>ii;
      	for (int i = 0; i < dani.size(); i++)
      	{
        	if(ii == dani[i].get_vaga())
        	{
				dani.erase(dani.begin() + i );
        	}
        	else cout<<"��� ����������!!!"<<endl;
      	}
    break;
    
    case 8:
      cout << "������ ���� ������������: ";
      cin>>hh;
      for (int i = 0; i < dani.size(); i++)
      {
        if (!strcmp(hh, dani[i].get_data()))
        {
			dani.erase(dani.begin() + i);
        }
        else cout<<"��� ����������!!!"<<endl;
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
    cout<<"1. ������ �����."<<endl;
    cout<<"2. ������� �� ������."<<endl;
	cout<<"3. ����� ������."<<endl;
	cout<<"4. �������� �����."<<endl;
    cout<<"0. �����."<<endl;
    
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
