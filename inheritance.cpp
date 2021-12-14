#include<iostream>
#include<string.h>
using namespace std;

class player{
    private:
    	int age;
    	char name[40];
    	char team[40];
    	public:
    		player(){
    			cout << "\n ****************PLAYER TEAM  PROJECT *********************" << endl;;
    			cout << "Enter Player Name : " ;
    			cin.getline(name,40);
    			cout << "Enter Player Team : " ;
    			cin.getline(team,40);
    			cout << "Enter Player Age  : " ;
    			cin  >>  age;
    			cout << endl;
			}
			void display(){
				cout << "Enter The Name OF Player : " << name << endl;
			    cout << "Enter The Team OF Player : " << team << endl;
                cout << "Enter The Age  OF Player : " << age  << endl;
}
            void inputdata(){
            		cout << "Enter Player Name  : " ;
			        cin  >>  name;
			       	cout << "Enter Player Team : "  ;
			        cin  >>  team;
			      	cout << "Enter Player Age : "   ;
			      	cin  >>  age; 
			
			}
			void changedata(){
		         	cout << "Enter Player Name  : " ;
			        cin  >>  name;
			       	cout << "Enter Player Team : "  ;
			        cin  >>  team;
			      	cout << "Enter Player Age : "   ;
			      	cin  >>  age; 	
			}
			
 
};


int main(){
		player p1;
		p1.display();
		int option;
		do{
			cout << "\n**********************MENU**********************" << endl;
			cout << "Enter Option From 1 to 4 .       "  << endl;
			cout << "Press 1. Input Player Data       "  << endl;
			cout << "Press 2. Display Player Data     "  << endl;
			cout << "Press 3. Change Player Data      "  << endl;
			cout << "Press 4. To EXit The Program     "  << endl;
			cin  >>  option;
		switch(option){
			case 1 :
				p1.inputdata();
				break;
			case 2 :
			    p1.display();
				break;
			case 3 :
				p1.changedata();
			    break;
		   case  4 :
		   	    exit(0);
		   	    break;
		   	     default:
		   	     	cout << "Enter Correct Option " << endl;
		   	
			    		
		}	
		}while(option =0);
		
	}

