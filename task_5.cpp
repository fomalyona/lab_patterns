
#include "task_5.h"



std::string NavigatorStrategy::showMap() const {
    return "Mapping.";
}

void NavigatorStrategy::buildRoute() {
    std::cout << "Building/ Using values of Route " << std::endl;
}


std::string NavigatorStrategy::getTitle() const
{
    return Title;
}

void NavigatorStrategy::setTitle(const std::string &value)
{
    Title = value;
}

WalkingStrategy::WalkingStrategy() {
    setTitle("WalkingStrategy");
}
RoadStrategy::RoadStrategy() {
    setTitle("RoadStrategy");
}

BikeLaneStrategy::BikeLaneStrategy() {
    setTitle("BikeLaneStrategy");
}
PublicTransportStrategy::PublicTransportStrategy() {
    setTitle("PublicTransportStrategy");
}
SightStrategy::SightStrategy() {
    setTitle("SightStrategy");
}


std::string WalkingStrategy::ToString() {
    return getTitle();
}
std::string RoadStrategy::ToString() {
    return getTitle();
}

void RoadStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

std::string BikeLaneStrategy::ToString() {
    return getTitle();
}

void BikeLaneStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

std::string PublicTransportStrategy::ToString() {
    return getTitle();
}

void PublicTransportS
#include "task_5.h"



std::string NavigatorStrategy::showMap() const {
    return "Mapping.";
}

void NavigatorStrategy::buildRoute() {
    std::cout << "Building/ Using values of Route " << std::endl;
}


std::string NavigatorStrategy::getTitle() const
{
    return Title;
}

void NavigatorStrategy::setTitle(const std::string &value)
{
    Title = value;
}

WalkingStrategy::WalkingStrategy() {
    setTitle("WalkingStrategy");
}
RoadStrategy::RoadStrategy() {
    setTitle("RoadStrategy");
}

BikeLaneStrategy::BikeLaneStrategy() {
    setTitle("BikeLaneStrategy");
}
PublicTransportStrategy::PublicTransportStrategy() {
    setTitle("PublicTransportStrategy");
}
SightStrategy::SightStrategy() {
    setTitle("SightStrategy");
}


std::string WalkingStrategy::ToString() {
    return getTitle();
}
std::string RoadStrategy::ToString() {
    return getTitle();
}

void RoadStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

std::string BikeLaneStrategy::ToString() {
    return getTitle();
}

void BikeLaneStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

std::string PublicTransportStrategy::ToString() {
    return getTitle();
}

void PublicTransportStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

std::string SightStrategy::ToString() {
    return getTitle();
}

void SightStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}

void WalkingStrategy::searchRoute(const std::string &valueA, const std::string &valueB) {

}
