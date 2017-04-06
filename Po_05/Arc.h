#include "Item.h"

class Arc : virtual public Item
{
	int damage;
public:
	Arc(int _damage, string _name);

	int getDamage() const;
};
