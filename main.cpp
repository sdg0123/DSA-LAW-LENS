#include <iostream>
#include "LegalDictionary.h"
#include "RevisionUndo.h"
#include "ParsingQueue.h"
#include "LawCheck.h"
#include "DangerSorter.h"
#include "CaseLawNetwork.h"
#include "FastestPrecedent.h"
#include "ComputingBalancer.h"
using namespace std;
void displayMenu() {
    cout << "\n=========================================\n";
    cout << "      LAWLENS CONTRACT ANALYSIS ENGINE\n";
    cout << "=========================================\n";
    cout << "1. Legal Dictionary\n";
    cout << "2. Revision Undo\n";
    cout << "3. Parsing Queue\n";
    cout << "4. Law Check\n";
    cout << "5. Danger Sorter\n";
    cout << "6. Case Law Network\n";
    cout << "7. Fastest Precedent\n";
    cout << "8. Computing Balancer\n";
    cout << "9. Exit\n";
    cout << "Enter your choice: ";
}
int main() {
    int choice;
    do {
        displayMenu();
        cin >> choice;
        switch(choice) {
            case 1:
                LegalDictionary::run();
                break;
            case 2:
                RevisionUndo::run();
                break;
            case 3:
                ParsingQueue::run();
                break;
            case 4:
                LawCheck::run();
                break;
            case 5:
                DangerSorter::run();
                break;
            case 6:
                CaseLawNetwork::run();
                break;
            case 7:
                FastestPrecedent::run();
                break;
            case 8:
                ComputingBalancer::run();
                break;
            case 9:
                cout << "\nThank you for using LawLens.\n";
                break;
            default:
                cout << "\nInvalid choice.\n";
        }
    } while(choice != 9);
    return 0;
}