#pragma once

#include <iostream>
#include <string>

class Package {
    public:
    // Constructor
    Package(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight);


    // printInfo()
    virtual void printInfo();

    // calculateCost()
    virtual float calculateCost();

    // printCost()
    virtual void printCost();

    // getters
    float getWeight() const {
        return weight;
    }
    std::string getSenderName() const {
        return senderName;
    }
    std::string getSenderAddress() const {
        return senderAddress;
    }
    std::string getReceiverName() const {
        return receiverName;
    }
    std::string getReceiverAddress() const {
        return receiverAddress;
    }

    private:
    std::string senderName;
    std::string senderAddress;
    std::string receiverName;
    std::string receiverAddress;
    float weight;
};

// 2.50 euro per kg + 5 euro flat fee
class twoDayPackage : public Package {
    public:
    // Constructor
    twoDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee);

    // printInfo()
    virtual void printInfo() override;

    // calculateCost()
    virtual float calculateCost() override;

    // printCost()
    virtual void printCost();

    private:
    float flatFee;
    float weightFee;
};

// Cost equal to twoDayPackage, but with an additional fee of the weight squared times 1.1 euro per kg squared
class overnightPackage : public Package {
    public:
    // Constructor
    overnightPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee);

    // printInfo()
    virtual void printInfo() override;

    // calculateCost()
    virtual float calculateCost() override;

    //printCost()
    virtual void printCost() override;

    private:
    float flatFee;
    float weightFee;
};

// Cost equal to twoDayPackage, but with an additional fee of the weight squared times 1.5 euro per kg squared
class sameDayPackage : public Package {
    public:
    // Constructor
    sameDayPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee);

    // printInfo()
    virtual void printInfo() override;

    // calculateCost()
    virtual float calculateCost() override;

    //printCost()
    virtual void printCost() override;

    private:
    float flatFee;
    float weightFee;
};

// Cost equal to twoDayPackage + 21%
class internationalPackage : public Package {
    public:
    // Constructor
    internationalPackage(std::string senderName, std::string senderAddress, std::string receiverName, std::string receiverAddress, float weight, float flatFee, float weightFee);

    // printInfo()
    virtual void printInfo() override;

    // calculateCost()
    virtual float calculateCost() override;

    //printCost()
    virtual void printCost() override;

    private:
    float flatFee;
    float weightFee;
};