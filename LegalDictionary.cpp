#include <iostream>
#include <unordered_map>
#include <string>

#include "LegalDictionary.h"

using namespace std;

void LegalDictionary::run()
{
    unordered_map<string, string> legalTerms;

    legalTerms["Arbitration"] =
        "A method of resolving disputes outside court.";

    legalTerms["Indemnity"] =
        "Compensation for damage or financial loss.";

    legalTerms["Jurisdiction"] =
        "Authority of a court to hear a case.";

    legalTerms["Liability"] =
        "Legal responsibility for an action.";

    legalTerms["ForceMajeure"] =
        "Unexpected event preventing contractual obligations.";

    string term;

    cout << "\n===== LEGAL DICTIONARY =====\n";

    cout << "\nAvailable Terms:\n";
    for (auto &entry : legalTerms)
    {
        cout << "- " << entry.first << endl;
    }

    cout << "\nEnter legal term: ";
    cin >> term;

    auto it = legalTerms.find(term);

    if (it != legalTerms.end())
    {
        cout << "\nDefinition:\n";
        cout << it->second << endl;
    }
    else
    {
        cout << "\nTerm not found.\n";
    }

    cout << "\nTime Complexity: O(1) Average Lookup\n";
}