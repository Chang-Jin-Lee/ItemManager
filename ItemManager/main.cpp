#include "ItemManager.h"
#include "Item.h"

int main()
{
	ItemManager manager;
	manager.Add(1, "item1", 'A');
	manager.Add(2, "item2", 'B');
	manager.Add(3, "item3", 'C');
	manager.Print();

	Item* item = manager.Find(2);
	if (item)
	{
		item->Show();
	}

	manager.Remove(2);
	manager.Print();
}