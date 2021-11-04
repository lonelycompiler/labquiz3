#include <string>
#include <iostream>

class Doctor
{
    public:
        Doctor (void);
        std::string getName(void);
        std::string getPhoneNumber(void);
        std::string getEmail(void);
        void setName(std::string tname);
        void setPhoneNumber(std::string tnumber);
        void setEmail(std::string temail);
        std::string Name;
        std::string phonenumber;
        std::string email;
        Doctor Register(void);
        void deRegister(Doctor *doc);
};

Doctor Doctor::Register(void)
{
    Doctor newDoctor;
    return newDoctor;
}

void Doctor::deRegister(Doctor *doc)
{
    delete doc;
}

class HospitalDoctor : public Doctor
{
    public:
        std::string getStaffNumber(void);
        void setStaffNumber(std::string tnumber);

        std::string getPagerNumber(void);
        void setPagerNumber(std::string tnumber);
        std::string staffnumber;
        std::string pagernumber;
};

class General_Practitioner : public Doctor
{
    public:
        std::string getPractice(void);
        std::string getAddress(void);

        void setPractice (std::string tpractice);
        void setAddress (std::string  taddress);
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

    std::cout << "--HOSPITAL DOCTOR--" << std::endl;
    HospitalDoctor DrEssaTA;
    DrEssaTA.setName("Dr. Essa's Ta");
    DrEssaTA.setStaffNumber("123456789");
    std::cout << "Dr. Essa's TA's Name is " << DrEssaTA.getName();
    std::cout << std::endl;
    std::cout << "And his Staff Phone number is " << DrEssaTA.getStaffNumber();
    std::cout << std::endl;

    std::cout << "--HOSPITAL DOCTOR--" << std::endl;
    General_Practitioner DrEssaTATA;
    DrEssaTATA.setEmail("123456789@erandoemail.org");
    DrEssaTATA.setAddress("1234 memory lane");
    std::cout << "Dr. Essa's Ta's TA's email is " << DrEssaTATA.getEmail();
    std::cout << std::endl;
    std::cout << "And his Address is " << DrEssaTATA.getAddress();
    std::cout << std::endl;

    return 0;
}