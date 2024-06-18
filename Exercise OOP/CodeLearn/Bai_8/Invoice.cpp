#include"Customer.cpp"

class Invoice{
private:
    int id;
    Customer customer;
    double amount;
public:
    Invoice(int id, Customer customer, double amount){
        this->id = id;
        this->customer = customer;
        this->amount = amount;
    }

    int getId(){ return id; }

    double getAmount(){ return amount; }
    void setAmount(double amount){ this->amount = amount; }

    Customer getCustomer(){ return customer; }
    void setCustomer(Customer customer){ this->customer = customer; }
    
    string getCustomerName(){ return customer.getName(); }
    double getAmountAfterDiscount(){ return amount * (1 - customer.getDiscount() / 100.0); }
};