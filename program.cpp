#include <string>
#include <iostream>

class Doctor
{
    public:
        Doctor (void);
        Doctor (std::string tname, std::string tnumber, std::string temail);
        std::string getName(void);
        std::string getPhoneNumber(void);
        std::string getEmail(void);
        void setName(std::string tname);
        void setPhoneNumber(std::string tnumber);
        void setEmail(std::string temail);
    private:
        std::string Name;
        std::string phonenumber;
        std::string email;
};

class HospitalDoctor : Doctor
{
    public:
        std::string getStaffNumber(void);
        void setStaffNumber(std::string tnumber);

        std::string getPagerNumber(void);
        void setPagerNumber(std::string tnumber);
    private:
        std::string staffnumber;
        std::string pagernumber;
};

class General_Practitioner : Doctor
{
    public:
        std::string getPractice(void);
        std::string getAddress(void);

        void setPractice (std::string tpractice);
        void setAddress (std::string  taddress);
    private:
        std::string Practice;
        std::string Address;
};

std::string HospitalDoctor::getStaffNumber(void)
{
    return staffnumber;
}

void HospitalDoctor::setStaffNumber(std::string tnumber)
{
    staffnumber = tnumber;
}

std::string HospitalDoctor::getPagerNumber(void)
{
    return pagernumber;
}

void HospitalDoctor::setPagerNumber(std::string tnumber)
{
    pagernumber = tnumber;
}


std::string General_Practitioner::getPractice(void)
{
    return Practice;
}

std::string General_Practitioner::getAddress(void)
{
    return Address;
}


void General_Practitioner::setPractice (std::string tpractice)
{
    Practice = tpractice;
}

void General_Practitioner::setAddress (std::string  taddress)
{
    Address = taddress;
}

Doctor::Doctor (void)
{
    email = "";
    Name = "";
    phonenumber = "";
}

Doctor::Doctor (std::string tname, std::string tnumber, std::string temail)
{
    email = temail;
    Name = tname;
    phonenumber = tnumber;
}

std::string Doctor::getEmail(void)
{
    return email;
}
std::string Doctor::getName(void)
{
    return Name;
}
std::string Doctor::getPhoneNumber(void)
{
    return phonenumber;
}

void Doctor::setName(std::string tname)
{
   Name = tname;
}

void Doctor::setPhoneNumber(std::string tnumber)
{
    phonenumber = tnumber;
}
void Doctor::setEmail(std::string temail)
{
    email = temail;
}


std::string getStaffNumber(void);
void setStaffNumber(std::string tnumber);

std::string getPagerNumber(void);
void setPagerNumber(std::string tnumber);

int main(void)
{
    std::cout << "--DOCTOR--" << std::endl;
    Doctor DrEssa;
    DrEssa.setName("Dr. Essa");
    DrEssa.setEmail("a.essa@csuohio.edu");
    DrEssa.setPhoneNumber("216-687-2588");
    std::cout << "Dr Essa's Name is: " << DrEssa.getName() << std::endl;
    std::cout << "Dr Essa's Email is: " << DrEssa.getEmail() << std::endl;
    std::cout << "Dr Essa's Number is: " << DrEssa.getPhoneNumber() << std::endl;

    return 0;
}