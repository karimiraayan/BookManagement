#include "Seller.h"
#include <algorithm>




Seller::Seller(std::string name, std::string address,std::string password):m_name(name), m_address(address), m_password(password)
{}

 void Seller::add_book(std::string name, short year, std::string genres, double price)
{
    my_books[name]= Book(name,year,genres,price);
}

void Seller::add_book()
{
    std::string name;
    std::string gen;
    short year;
    double price;
    std::cout<<"title: ";
    std::cin.ignore();
    std::getline(std::cin, name);
    std::cout<<"genres: ";
    std::cin>>gen;
    std::cout<<"year: ";
    std::cin>>year;
    std::cout<<"price: ";
    std::cin>>price;
    my_books[name]= Book(name,year,gen,price);
}

void Seller::set_book_discribtion(std::string name,std::string discribtion)
{
    my_books[name].add_discribtion(discribtion);
}

void Seller::remove_book(std::string book_name)
{
    my_books.erase(book_name);
}

void Seller::print_books()
{
    for (auto [name, book] : my_books)
        book.print_book();

}
std::ostream& operator<<(std::ostream& os, const Seller& seller)
{
    os<<seller.m_password<<","<<seller.m_name<<','<<seller.m_address;
    for (auto &&[name,book] :seller.my_books)
    {
        os<<","<<book;
    }
    return os;
}
