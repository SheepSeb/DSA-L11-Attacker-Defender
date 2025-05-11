//
// Created by sebnae on 5/11/25.
//
#include "../../template/attacker_setup.h"
#include <iostream>
#include <vector>
#include <cmath>

// Maximum attempts allowed
#define MAX_ATTEMPTS 10

int generateTargetedKey(int attempt) {
    // Example strategy: Generate keys that might cause collisions or target certain values
    int primeNumbers[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    return primeNumbers[attempt % 10];
}

void attackerAttempt(Hashtable<int, std::string>& table) {
    int attempts = 0;
    bool found = false;
    std::string secretPass;

    for (int i = 0; i < MAX_ATTEMPTS; ++i) {
        int generatedKey = generateTargetedKey(i);

        std::cout << "🔍 [ATTACKER] Attempt " << (attempts + 1)
                  << ": Trying key 🔑 " << generatedKey << std::endl;

        try {
            std::string value = table.get(generatedKey);
            std::cout << "✅ [ATTACKER] Found key " << generatedKey
                      << " with value: \"" << value << "\" 🔓" << std::endl;

            if (generatedKey == 1) {
                secretPass = value;
                std::cout << "🎉 [SUCCESS] Attacker found the secret pass: 🔐 " << secretPass << std::endl;
                found = true;
                break;
            }
        } catch (const std::exception& e) {
            std::cout << "❌ [FAIL] Key " << generatedKey << " not found in the table." << std::endl;
        }

        std::cout << "------------------------\n";
        attempts++;
    }

    if (!found) {
        std::cout << "🛑 [INFO] Attacker could not find the secret pass after "
                  << MAX_ATTEMPTS << " attempts. 💥" << std::endl;
    }
}
