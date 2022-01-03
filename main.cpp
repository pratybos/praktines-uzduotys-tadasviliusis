#include <iostream>
#include "Composite.h"
#include "Leaf.h"
#include "Color.h"

using namespace std;

int main() {
    auto*FishingShop = new Composite("FISHING SHOP");

    auto *fishingEquipment = new Composite("FISHING EQUIPMENT");
    auto *clothes = new Composite("CLOTHES");
    auto *warehouse = new Composite("WAREHOUSE");

    FishingShop->AddComponent(fishingEquipment);
    FishingShop->AddComponent(clothes);
    FishingShop->AddComponent(warehouse);



    auto *FishingRod = new Leaf("Fly Fishing Rod", 99.99);
    auto *FishingReel = new Leaf("Fly Fishing Reel", 65.99);
    auto *FishingRope = new Leaf("fly Fishing Line", 23.99);
    auto *FishingScale = new Leaf("Boga Grip Fishing Scale", 32.99);
    auto *LuresandBaitBox = new Leaf("Spinner lures and bugs box",45.99);

    auto *FishingBoots = new Leaf("Water and dust durable boots", 189.99);
    auto *FishingWader = new Leaf("Lightweight fishing wader",89.99);
    auto *FishingVest = new Leaf("Duty heavy vest", 59.99);
    auto *Gloves = new Leaf("Hard leather injury resistant gloves", 48.99);
    auto *FishingTowel = new Leaf("Quick drying towel pack", 24.99);

    auto *SpareFishingEquipment = new Leaf("Fishing rod and reel set", 150.99);
    auto *SpareFishingClothes = new Leaf("Boots,Vest,Wader,Gloves set", 89.99);

    fishingEquipment->AddComponent(FishingRod);
    fishingEquipment->AddComponent(FishingReel);
    fishingEquipment->AddComponent(FishingRope);
    fishingEquipment->AddComponent(FishingScale);
    fishingEquipment->AddComponent(LuresandBaitBox);

    clothes->AddComponent(FishingBoots);
    clothes->AddComponent(FishingTowel);
    clothes->AddComponent(FishingWader);
    clothes->AddComponent(FishingVest);
    clothes->AddComponent(Gloves);

    warehouse->AddComponent(SpareFishingEquipment);
    warehouse->AddComponent(SpareFishingClothes);

    fishingEquipment->ReflectInformation();
    cout << "InTotal: " << fishingEquipment->GetPrice() << endl;
    clothes->ReflectInformation();
    cout << "InTotal: " << clothes->GetPrice() << endl;
    warehouse->ReflectInformation();
    cout << "InTotal: " << warehouse->GetPrice() << endl;

    int number = 1;
    while (number != 0) {


    Color::setColor(11);

    cout << "++++++++++++++++++++++++++++" << endl;
    cout << "---+++      MENIU     +++---" << endl;
    cout << "++++++++++++++++++++++++++++" << endl;
    cout << "1. Show FishingShop" << endl;
    cout << "2. Show fishingEquipment" << endl;
    cout << "3. Show clothes" << endl;
    cout << "4. Show warehouse" << endl;
    cout << "5. Show price" << endl;
    cout << "6. Add new component to FishingShop" << endl;
    cout << "0. Quit" << endl;

    Color::setColor(12);
    cout << "Select a MENIU number: " ;
    cin >> number;

    switch (number) {
        case 1:
            FishingShop->ReflectInformation();
            break;
        case 2:
            fishingEquipment->ReflectInformation();
            break;
        case 3:
            clothes->ReflectInformation();
            break;
        case 4:
            warehouse->ReflectInformation();
            break;
        case 5:
            Color::setColor(15);
           cout << FishingShop->GetPrice() << endl;
           break;
        case 6: {
            cout << "Adding a new component " << endl;

            string category;
            cout << "Write a category name: " ;
            cin.ignore();
            getline(cin,category);


            auto * cat = new Composite(category);

            string name;
            double price;
            cout << "Add a name of a new component: ";
            getline(cin, name);
            cout << "Add a price of a new component : ";
            cin >> price;

            auto *components = new Leaf(name, price);
            cat->AddComponent(components);
            FishingShop->AddComponent(cat);
            break;

        }
        default:
        cout << "Such number does not exist, please use existing numbers ! ! !" << endl;
        break;

    }
}

        





    return 0;
}
