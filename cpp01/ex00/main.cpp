#include "Zombie.hpp"

int main ()
{
    // スタック上のゾンビを作成
    Zombie zombie1("OriginalZombie");
    zombie1.announce();

    // copyコンストラクタを使用してゾンビを作成
    Zombie zombie2(zombie1);
    zombie2.announce();

    // ヒープ上のゾンビを作成
    Zombie *heapZombie = newZombie("HeapZombile");
    heapZombie->announce();

    // sutack上のゾンビは自動的に破棄される
    randomChump("tempZombile");

    delete heapZombie;

    return 0;
}
// ← この時点でzombie1, zombie2が自動的に破棄される（逆順：zombie2 → zombie1）