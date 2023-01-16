#include <iostream>
#include <string>
#include "Users.h"
#include "Seller.h"

using namespace std;

Seller* login(Users &users){

char answer;
cout<<"=============Welcome to Book SHELF=============\n\n";
cout<< "do you have an account? yes(y), no(n) : ";
cin>>answer;
if (answer=='y')
{
    string username;
    string password;
    cout<<"pleas enter your username: ";
    cin>>username;
    cout<<"enter your password: ";
    cin>>password;
    auto login_user=users.get_user(username);
    if(!(login_user.m_password==password))
        throw "wrong password!!\n";
    cout<<"your loged in.\n";
    cout<<users.get_user(username).m_name<<"the second";
    return &(users.get_user(username));
}
if (answer =='n')
{
    string name;
    string password;
    string address;
    string username;
    cin.ignore();
    cout <<"enter your name: ";
    getline(cin,name);
    cout <<"enter your address: ";
    cin.ignore();
    getline(cin, address);
    cout <<"choose a username: ";
    cin>>username;
    cout <<"choose a password: ";
    cin.ignore();
    getline(cin, password);
    users.creat_new_user(username,password,name,address);
    cout<< "your loged in your new account";
    cout<<users.get_user(username).m_name<<"the second";
    return &(users.get_user(username));
}
}
