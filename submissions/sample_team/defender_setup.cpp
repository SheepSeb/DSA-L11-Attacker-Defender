//
// Created by sebnae on 5/11/25.
//
#include <string>
#include "../../template/defender_setup.h"

#define VMAX 17
#define P 13

/// 🔐 Hash function - keys of type int
int hfunc(int key) {
    return (P * key) % VMAX;
}

/// 🛡️ Defender constructs the hashtable and returns it
Hashtable<int, std::string> buildDefendedTable() {
    Hashtable<int, std::string> table(VMAX, hfunc);

    table.put(1, "s3cr3tPass");  // 🎯 The secret target
    table.put(2, "fakepass");    // 🧱 Decoy
    table.put(3, "123456");      // 🧱 Another decoy

    // 📢 Reveal HKey only (no key shown!)
    std::cout << "📢 [DEFENDER] HKey for the secret (value under hidden key):" << std::endl;
    table.get(2);
    std::cout << std::endl;

    return table;
}
