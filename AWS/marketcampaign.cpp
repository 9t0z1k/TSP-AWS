
#include "marketcampaign.h"
#include <QDebug>

//Campaign space
MarketCampaign::Campaign::Campaign(const Campaign &c)
{
    mc_goal = c.mc_goal;
    mc_budget = c.mc_budget;
    mc_startDate = c.mc_startDate;
    mc_endDate = c.mc_endDate;
}

QString MarketCampaign::Campaign::getGoal() const { return mc_goal; }

double MarketCampaign::Campaign::getBudget() const { return mc_budget; }

QDate MarketCampaign::Campaign::getStart() const { return mc_startDate; }

QDate MarketCampaign::Campaign::getEnd() const { return mc_endDate; }

void MarketCampaign::Campaign::setGoal(const QString& g) { mc_goal = g; }

void MarketCampaign::Campaign::setBudget(double b) { mc_budget = b; }

void MarketCampaign::Campaign::setStart(const QDate& s) { mc_startDate = s; }

void MarketCampaign::Campaign::setEnd(const QDate& e) { mc_endDate = e; }

//Product space
MarketCampaign::Product::Product(const Product& p) {
    p_name = p.p_name;
    p_category = p.p_category;
    p_description = p.p_description;
    p_price = p.p_price;
}

QString MarketCampaign::Product::getPrName() const { return p_name; }

QString MarketCampaign::Product::getCategory() const { return p_category; }

QString MarketCampaign::Product::getDescription() const { return p_description; }

double MarketCampaign::Product::getPrice() const { return p_price; }

void MarketCampaign::Product::setPrName(const QString& pN) { p_name = pN; }

void MarketCampaign::Product::setCategory(const QString& pC) { p_category = pC; }

void MarketCampaign::Product::setDescription(const QString& pD) { p_description = pD; }

void MarketCampaign::Product::setPrice(const double pP) { p_price = pP; }

//Audience space
MarketCampaign::Audience::Audience(const Audience& a) {
    a_place = a.a_place;
    a_SMale = a.a_SMale;
    a_SFemale = a.a_SFemale;
    a_age = a.a_age;
}
QString MarketCampaign::Audience::getPlace() const { return a_place; }

int MarketCampaign::Audience::getSMale() const { return a_SMale; }

int MarketCampaign::Audience::getSFemale() const { return a_SFemale; }

int MarketCampaign::Audience::getAge() const { return a_age; }

void MarketCampaign::Audience::setPlace(const QString& aP) { a_place = aP; }

void MarketCampaign::Audience::setSMale(int SM) { a_SMale = SM; }

void MarketCampaign::Audience::setSFemale(int SF) { a_SFemale = SF; }

void MarketCampaign::Audience::setAge(int A) { a_age = A; }

//Channel space
MarketCampaign::Channel::Channel(const Channel& ch){
    ch_name = ch.ch_name;
    ch_price = ch.ch_price;
    ch_coverage = ch.ch_coverage;
}

QString MarketCampaign::Channel::getChName() const { return ch_name; }

double MarketCampaign::Channel::getChPrice() const { return ch_price; }

int MarketCampaign::Channel::getCoverage() const { return ch_coverage; }

void MarketCampaign::Channel::setChName(const QString& CN) { ch_name = CN; }

void MarketCampaign::Channel::setChPrice(double CP) { ch_price = CP; }

void MarketCampaign::Channel::setCoverage(int CC) { ch_coverage = CC; }
