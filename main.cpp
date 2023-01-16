#include <iostream>
#include "Book.h"
#include "Seller.h"
#include "Users.h"
#include <string>
#include <map>
#include "login.h"
#include <fstream>
#include <sstream>

using namespace std;

void read_data(Users &users){
    auto file = ifstream();
    file.open("Users.txt");
    while (!file.eof())
    {
        string  read_line;
        string temp;
        stringstream stream;
        getline(file, read_line);
        if(read_line.empty())
            continue;
        stream<<read_line;
        getline(stream,temp,',');
        string username=temp;
        getline(stream,temp,',');
        string password=temp;
        getline(stream,temp,',');
        string name=temp;
        getline(stream,temp,',');
        string address=temp;
        users.creat_new_user(username,password,name,address);
        while (!stream.eof())
        {
        getline(stream,temp,',');
        if(temp.empty())
            break;
        string name=temp;
        getline(stream,temp,',');
        string genre=temp;
        getline(stream,temp,',');
        string year=temp;
        getline(stream,temp,',');
        string price=temp;
        users.get_user(username).add_book(name,stoi(year),genre,stod(price));
        }
    }

}



int main ()
{

Users users;

read_data(users);
/* users.creat_new_user("rayan","Basket7.5","rayan karimi","zwingliStr.6");
users.creat_new_user("razi","123r","razi karimi","tehran");
users.creat_new_user("luba","123l","luba zherno","zwingliStr.6");
users.creat_new_user("maman","123m","noushin karimi","theran.6"); */
while (true)
{
auto logedin_user = login(users);
cout<<endl<<logedin_user->m_name;
 bool quit = false;
while (!quit)
{
cout <<"\n\n========= "<<logedin_user->m_name<<"==========\n";
cout<< "if you want to add a book choose (1)\n for getting a list of your books choose (2)\n and for quite choose 3!!\n";
cout << "select=>";
short selection;
cin>>selection;


switch (selection)
{
case 1:
    logedin_user->add_book();
    break;
case 2:
    logedin_user->print_books();
    break;
default:
    quit = true;
    break;
}
}
}

/* std::cout<<"===============Welcome to book shelf===============\n";
Users adminestor;
adminestor.creat_new_user("dev_22","rayan", "zwingliStr.6");
auto user = &(adminestor.get_user("dev_22"));

user->add_book("sarzamine ashbah", 1995, "tarsnak", 22.22);
user->add_book("sarzamine ashbah", 1995, "tarsnak", 22.22);
user->add_book("eragon", 1905, "freadom", 2.22);
user->print_books(); */



}
