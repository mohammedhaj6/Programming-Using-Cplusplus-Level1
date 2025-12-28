#include <iostream>
using namespace std;


enum enColor { Red, Green, Yellow, Blue };
enum enGendor { Male, Female };
enum enMaritalStatus { Single, Married };




struct stAddress
{
    string StreetName;
    string BuildingNo;
    string POBox;
    string ZipCode;
};




struct stContactInfo
{
    string Phone;
    string Email;
    stAddress Address;
};




struct stUser
{


    string FirstName;
    string LastName;

    stContactInfo ContactInfo;


    enMaritalStatus MaritalStatues;
    enGendor Gendor;
    enColor FavourateColor;
};




int main()
{

    stUser User1;


    User1.FirstName = "Mohammed";
    User1.LastName = "AlHaj-Mohammed";


    User1.ContactInfo.Email = "m@gmail.com";
    User1.ContactInfo.Phone = "+972597521358";
    User1.ContactInfo.Address.POBox = "2222";
    User1.ContactInfo.Address.ZipCode = "123456";
    User1.ContactInfo.Address.StreetName = "hamed Street";
    User1.ContactInfo.Address.BuildingNo = "123";

    User1.Gendor = enGendor::Male;
    User1.MaritalStatues = enMaritalStatus::Married;
    User1.FavourateColor = enColor::Green;


    cout << User1.ContactInfo.Address.StreetName << endl;



    return 0;
}
