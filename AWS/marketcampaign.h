#ifndef MARKETCAMPAIGN_H
#define MARKETCAMPAIGN_H

#include<QString>
#include<QList>
#include<memory>
#include<QObject>
#include <QDate>


namespace MarketCampaign
{
    class Campaign /*: public QObject*/
    {
    public:
        Campaign(){}
        Campaign(const Campaign& c);
        QString getGoal() const;
        double getBudget() const;
        QDate getStart() const;
        QDate getEnd() const;
        void setGoal(const QString& g);
        void setBudget(double b);
        void setStart(const QDate& s);
        void setEnd(const QDate& e);
    private:
//        Q_OBJECT
        QString mc_goal;
        double mc_budget = 0;
        QDate mc_startDate;
        QDate mc_endDate;
    };
    class Product /*: public QObject*/
    {
    public:
        Product(){}
        Product(const Product& p);
        QString getPrName() const;
        QString getCategory() const;
        QString getDescription() const;
        double getPrice() const;
        void setPrName(const QString& pN);
        void setCategory(const QString& pC);
        void setDescription(const QString& pD);
        void setPrice(double pP);

    private:
//        Q_OBJECT
        QString p_name;
        QString p_category;
        QString p_description;
        double p_price = 0;

    };

    class Audience /*: public QObject*/
    {
    public:
        Audience(){}
        Audience(const Audience& a);
        QString getPlace() const;
        int getSMale() const;
        int getSFemale() const;
        int getAge() const;
        void setPlace(const QString& aP);
        void setSMale(int SM);
        void setSFemale(int SF);
        void setAge(int A);

    private:
//        Q_OBJECT
        int a_SMale = 0;
        int a_SFemale = 0;
        int a_age = 0;
        QString a_place;
    };

    class Channel /*: public QObject*/
    {
    public:
        Channel(){}
        Channel(const Channel& ch);
        QString getChName() const;
        double getChPrice() const;
        int getCoverage() const;
        void setChName(const QString& CN);
        void setChPrice(double CP);
        void setCoverage(int CC);

    private:
//        Q_OBJECT
        QString ch_name;
        double ch_price = 0;
        int ch_coverage = 0;
    };
}

#endif // MARKETCAMPAIGN_H
