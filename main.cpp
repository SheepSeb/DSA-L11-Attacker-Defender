#include <iostream>
#include "template/attacker_setup.h"
#include "template/defender_setup.h"

#define VMAX 17
#define P 13

using namespace std;

int main() {
    std::cout << "🛡️  [START] Defender is setting up the hashtable...\n";
    auto table = buildDefendedTable();

    std::cout << "--------" << endl;
    std::cout << "📦 [INFO] Defender has set up the table.\n";
    std::cout << "🎯 [INFO] Attacker begins guessing...\n\n";

    attackerAttempt(table);

    std::cout << "\n✅ [INFO] Round finished. Awaiting next duel...\n";

    return 0;
}
