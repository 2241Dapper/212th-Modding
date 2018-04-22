class Bag_Base;
class SCI_bag_base: Bag_Base
{
	author = "SCI"; // We'll need to go back and replace all the author names to something
	scope = 2;
	model = "sci_cloneArmor\data\backpack.p3d";
	displayName = "[SCI] Clone Load Bearing Cannister (Heavy)";
	picture = "";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_heavy_CO.paa"};
	maximumLoad = 230; // 280 - Kitbag; 320 - Carryall; 160 - Assault pack
	mass = 10; // 50- kitbag; 60 - Carryall; 20 - Assault pack
};
class SCI_bag_temperate: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Temperate)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_altis_CO.paa"};
};
class SCI_bag_forest: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Forest)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_chern_CO.paa"};
};
class SCI_bag_eod: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (EOD)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_eod_CO.paa"};
	maximumLoad = 250; // 280 - Kitbag; 320 - Carryall; 160 - Assault pack
};
class SCI_bag_medic: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Medic)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_medic_CO.paa"};
	maximumLoad = 250; // 280 - Kitbag; 320 - Carryall; 160 - Assault pack
};
class SCI_bag_geonosis: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Geonosis)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_geono_CO.paa"};
};
class SCI_bag_kashyyk: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Kashyyk)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_kashyyk_CO.paa"};
};
class SCI_bag_desert: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Desert)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_takis_CO.paa"};
};
class SCI_bag_jungle: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Jungle)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_tanoa_CO.paa"};
};
class SCI_bag_winter: SCI_bag_base
{
	displayName = "[SCI] Clone Load Bearing Cannister (Winter)";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\backpacktextures\backpack_winter_CO.paa"};
};