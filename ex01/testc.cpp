#include "contact.hpp"

int main ()
{


    // Contact contactOne;
    // Contact contactTwo("Lukas", "Mueller", "Luke", 1234, "vvv");
    // Contact contactThree("Jon", "Smith", "Johnny", 5678, "yyy");
    // Contact contactFour("Robert", "Schwarz", "Bob", 9012, "zzz");
    // Contact contactFive("Nick", "Mueller", "Nicki", 1234, "aaa");
   
    // std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    // contactOne.setFirstName("Paula");
    // std::cout << "name of contactOne = " << contactOne.getFirstName() << std::endl;
    // std::cout << "name of contactTwo = " << contactTwo.getFirstName() << std::endl;
    
    // contactTwo.setLastName("Anton");
    // std::cout << "last name of contactTwo new = " << contactTwo.getLastName() << std::endl;

    // contactThree.setNickname("Jonnie");
    // std::cout << "nickname of contactThree new = " << contactThree.getNickname() << std::endl;
    
    // contactFour.setPhoneNumber(9101);
    // std::cout << "phone number of contactFour new = " << contactFour.getPhoneNumber() << std::endl;
    
    // contactFive.setDarkestSecret("sss");
    // std::cout << "darkest secret of contactFive new = " << contactFive.getDarkestSecret() << std::endl;


    Contact contactOne; // object // default constructor
    Contact contactTwo("Hans", "Meier", "Hansi", 123, "abc"); // personalized constructor

    std::cout << "first name of contact1: " << contactOne.getFirstName() << std::endl;
    
    std::cout << "phone number of contact2: " << contactTwo.getPhoneNumber() << std::endl;

    contactOne.setFirstName("Klaus");
    contactTwo.setPhoneNumber(456);

    std::cout << "first name of contact1 [new]: " << contactOne.getFirstName() << std::endl;
    std::cout << "phone number of contact2 [new]: " << contactTwo.getPhoneNumber() << std::endl;


    return (0);
}