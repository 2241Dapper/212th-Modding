class VestItem: InventoryItem_Base_F
{
	type = VEST_SLOT;			/// vests fit into vest slot
	hiddenSelections[] = {};	/// no changeable selections by default
	armor = 0;				/// what protection does the vest provide
	passThrough = 1;			/// coef of damage passed to total damage
	hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
};

class Vest_Camo_Base: ItemCore /// base class for vests with changeable textures
{
	scope = 0;	/// base classes should not be visible in editor
	allowedSlots[] = {BACKPACK_SLOT}; /// you should be able to put a vest into backpack
	hiddenSelections[] = {"camo", "camo1"}; /// what selection in model could have different textures

	class ItemInfo: VestItem
	{
		hiddenSelections[] = {"camo", "camo1"}; /// what selection in model could have different textures
		LOAD(0,0) /// macro from basicdefines_A3.hpp
	};
};

class SCI_vest_ncoPauldron_BLK: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] NCO Pauldron (BLK)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	model   = "sci_cloneArmor\data\SmallPauldron.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\small_black_CO.paa"}; /// what texture is going to be used

	class ItemInfo: ItemInfo
	{
		uniformModel   = "sci_cloneArmor\data\SmallPauldron.p3d"; /// what model does the vest use
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 0; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 0;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 0; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 0;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 0;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};
};
class SCI_vest_ncoPauldron_WHT: SCI_vest_ncoPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] NCO Pauldron (WHT)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\small_white_CO.paa"}; /// what texture is going to be used
};
class SCI_vest_ncoPauldron_OD: SCI_vest_ncoPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] NCO Pauldron (OD)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\small_od_CO.paa"}; /// what texture is going to be used
};
class SCI_vest_ncoPauldron_CYN: SCI_vest_ncoPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] NCO Pauldron (CYN)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\small_cy_CO.paa"}; /// what texture is going to be used
};
class SCI_vest_cmPauldron_BLK: Vest_Camo_Base
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] Command Pauldron (BLK)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	model   = "sci_cloneArmor\bigPauldron.p3d"; /// what model does the vest use
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\big_black_CO.paa"}; /// what texture is going to be used

	class ItemInfo: ItemInfo
	{
		uniformModel   = "sci_cloneArmor\data\bigPauldron.p3d"; /// what model does the vest use
		
		class HitpointsProtectionInfo
		{
			class Neck
			{
				hitpointName	= "HitNeck"; // reference to the hit point class defined in the man base class
				armor		= 0; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
			class Arms
			{
				hitpointName	= "HitArms";
				armor		= 0;
				passThrough	= 0.5;
			};
			class Chest 
			{
				hitpointName	= "HitChest"; 
				armor		= 0; 
				passThrough	= 0.1; 
			};
			class Diaphragm
			{
				hitpointName	= "HitDiaphragm";
				armor		= 0;
				passThrough	= 0.1;
			};
			class Abdomen
			{
				hitpointName	= "HitAbdomen"; 
				armor		= 0;
				passThrough	= 0.1;
			};
			class Body
			{
				hitpointName	= "HitBody";
				passThrough	= 0.1;
			};
		};
	};	
};
class SCI_vest_cmPauldron_WHT: SCI_vest_cmPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] Command Pauldron (WHT)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\big_white_CO.paa"}; /// what texture is going to be used
};
class SCI_vest_cmPauldron_OD: SCI_vest_cmPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] Command Pauldron (OD)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\big_od_CO.paa"}; /// what texture is going to be used
};
class SCI_vest_cmPauldron_CYN: SCI_vest_cmPauldron_BLK
{	
	scope = 2; /// scope needs to be 2 to have a visible class
	displayName  = "[SCI] Command Pauldron (CYN)"; /// how would the stuff be displayed in inventory and on ground
	picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa"; /// this icon fits the vest surprisingly well
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\vesttextures\big_CY_CO.paa"}; /// what texture is going to be used
};