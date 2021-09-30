#include <iostream>
#include <vector>
#include "Examples/Adapter.h"
#include "Progression.h"
#include "StrategySort.h"
#include "task_2.h"
#include "task_1.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"
void Print(AutoBase *av);
void Print(TransportService *compTax, d#include <iostream>
#include <vector>
#include "Examples/Adapter.h"
#include "Progression.h"
#include "StrategySort.h"
#include "task_2.h"
#include "task_1.h"
#include "task_3.h"
#include "task_4.h"
#include "task_5.h"
#include "task_6.h"
#include "task_7.h"
#include "task_8.h"
#include "task_9.h"
#include "task_10.h"
void Print(AutoBase *av);
void Print(TransportService *compTax, double distg);
int main() {
    int number_task = 5;
    switch(number_task) {
        case 1: {

            ///----------------------------------------///
            //    Kost *kubik = new Kost();
            //    auto *g1 = new Gamer("Ivan");
            //    std::cout << "Result " << g1->SeansGame(kubik) << " for " << g1->ToString() << std::endl;
            //    auto *mon = new Monet();
            //
            //    Adapter *bmon = new AdapterGame(mon);
            //
            //    std::cout << "Coin \"" << g1->SeansGame(bmon) << "\" for " << g1->ToString() << std::endl;
            ///----------------------------------------///
            auto *tms = new TemperatureMonitoringSystem();
            auto *tf = new TemperatureMonitoringFahrenheit();
            tms->printMeasurementSensor(tf);
            auto *fc = new FahrenheitToCelsius();

            TemperatureMonitoringFahrenheit *tmf = new AdapterMonitorng(fc);
            tms->printMeasurementSensor(tmf);

            break;
        }
        case 2: {
            CarFactory *ford_car = new FordFactory();
            CarFactory *audi_car = new AudiFactory();
            auto *c1 = new Client(ford_car);
            std::cout << "Max Speed " << c1->ToString() << " = " << c1->RunMaxSpeed() << std::endl;
            std::cout << "Auto body " << c1->ToString() << " = " << c1->GetCarBody() << std::endl;
            auto *c2 = new Client(audi_car);
            std::cout << "Max Speed " << c2->ToString() << " = " << c2->RunMaxSpeed() << std::endl;
            std::cout << "Auto body " << c2->ToString() << " = " << c2->GetCarBody() << std::endl;
            break;
        }
        case 3:
        {
            // поездка на такси
            TransportCompany *trCom = new TaxiTransCom("Taxi Service");
            TransportService *compService = trCom->Create("Taxi", 1);
            double dist = 15.5;
            Print(compService, dist);
            // грузоперевозка
            TransportCompany *gCom = new ShipTransCom("Shipping service");
            compService = gCom->Create("Trucking", 2);
            double distg = 150.5;
            Print(compService, distg);
            // пьяный водитель
            TransportCompany *dCom = new DrunkDriverCom("Drunk Driver service");
            compService = dCom->Create("Designated Driver", 75);
            double dist_ = 30.5;
            Print(compService, dist_);
            break;
        }
        case 4:
        {
            CarFactorySingleton *singleton = CarFactorySingleton::getInstance("Audi");
            std::cout << "Max Speed " << singleton->ToString() << " = " << singleton->RunMaxSpeed() << std::endl;
            std::cout << "Auto body " << singleton->ToString() << " = " << singleton->GetCarBody() << std::endl;
            CarFactorySingleton *singleton2 = CarFactorySingleton::getInstance("Ford");
            std::cout << "Max Speed " << singleton2->ToString() << " = " << singleton2->RunMaxSpeed() << std::endl;
            std::cout << "Auto body " << singleton2->ToString() << " = " << singleton2->GetCarBody() << std::endl;
            break;
        }
        case 5:
        {
            /////-------------------/////
            std::vector<int> arr1 = {31, 15, 10, 2, 4, 2, 14, 23, 12, 66};
            StrategySort *sort = new SelectionSort();
            auto *context = new Context(sort, arr1);
            context->Sort();
            context->PrintArray();

            std::vector<int> arr2 = {55, 45, 23, 55, 3, 554, 23, 32, 3, 0};
            StrategySort *sort2 = new InsertionSort();
            auto *context2 = new Context(sort2, arr2);
            context2->Sort();
            context2->PrintArray();

            std::vector<int> arr3 = {55, 45, 23, 55, 3, 554, 23, 32, 3, 0};
            StrategySort *sort3 = new BubbleSort();
            auto *context3 = new Context(sort3, arr3);
            context3->Sort();
            context3->PrintArray();
            /////-------------------/////

            NavigatorStrategy *nav = new WalkingStrategy();
            std:: cout << nav->ToString() << std::endl;
            nav->searchRoute("A", "B");
            nav->buildRoute();
            nav->showMap();

            NavigatorStrategy *nav2 = new BikeLaneStrategy();
            std:: cout << nav2->ToString() << std::endl;
            nav2->searchRoute("A", "B");
            nav2->buildRoute();
            nav2->showMap();
            break;

        }
        case 6:
        {
            Progression *val = new ArithmeticProgression(1,12,2);
            val->TemplateMethod();
            Progression *val2 = new GeometryProgression(1,12,2);
            val2->TemplateMethod();

            Order *c = new UsualOrder(4, 20);
            c->TemplateMethod();
            Order *c2 = new StudentOrder(4, 20);
            c2->TemplateMethod();
            break;
        }
        case 7:
        {
//            https://dotnetfiddle.net/70vY84
            break;
        }
        case 8:
        {
            auto *receiver = new Receiver(true, false, true);
            PaymentHandler *bankPaymentHandler = new BankPaymentHandler();
            PaymentHandler *moneyPaymentHadler = new MoneyPaymentHandler();
            PaymentHandler *paypalPaymentHandler = new PayPalPaymentHandler();
            moneyPaymentHadler->Successor = bankPaymentHandler;
            bankPaymentHandler->Successor = paypalPaymentHandler;
            moneyPaymentHadler->Handle(receiver);
            break;
        }
        case 9:
        {
            auto *calculator = new Calculator();
            double result = 0;
            result = calculator->Add(5);
            std::cout << result << "\n";
            result = calculator->Sub(4);
            std::cout << result << "\n";
            result = calculator->Mul(6);
            std::cout << result << "\n";
            result = calculator->Div(2);
            std::cout << result << "\n";
            result = calculator->Redo();
            std::cout << result << "\n";
            result = calculator->Undo();
            std::cout << result << "\n";
            break;
        }
        case 10:
        {
            auto *reno = new Renault("Renault", "Renault LOGAN Active", 499.0);
            Print(reno);
            AutoBase *myreno = new MediaNAV(reno, "Navigation");
            Print(myreno);
            AutoBase *newmyReno = new SystemSecurity (new MediaNAV(reno, "Navigation"),
                                                         "Security");
            Print(newmyReno);
            AutoBase *newmyReno2 = new ADAS (new SystemSecurity(new MediaNAV(reno, "Navigation"), "Security"),
                                                      "ADAS");
            Print(newmyReno2);
            AutoBase *newmyReno3 = new UsedCars (new MediaNAV(reno, "Navigation"),
                                                      "UsedCars");
            Print(newmyReno3);
            AutoBase *newmyReno4 = new AudioSystem (new ADAS (new SystemSecurity(new MediaNAV(reno, "Navigation"), "Security"),
                                                                 "ADAS"),
                                                      "Audio System");
            Print(newmyReno4);
            break;
        }

        default:
            std::cout << "incorrect number of task " << std::endl;
            break;
    }


}

void Print(TransportService *compTax, double distg){
    compTax->getName();
    std::cout << "Company: " + compTax->ToString() + "; Distance: " + std::to_string(distg) + "; Cost: " +
                 std::to_string(compTax->CostTransportation(distg))<< std::endl;
}
void Print(AutoBase *av){
    std::cout << av->ToString();
}