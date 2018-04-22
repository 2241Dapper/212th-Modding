#include "basicdefines_A3.hpp"
class DefaultEventhandlers;

class CfgPatches
{
	class sci_cloneArmor
	{
		units[]=
		{
			//Clone Units
			"SCI_B_Clone_F",
			"SCI_B_Clone_medic_F",
			"SCI_B_Clone_desert_F",
			"SCI_B_Clone_kashyyk_F",
			"SCI_B_Clone_geonosis_F",
			"SCI_B_Clone_winter_F",
			"SCI_B_Clone_temperate_F",
			"SCI_B_Clone_jungle_F",
			"SCI_B_Clone_forest_F",
			
			"SCI_B_Clone_kama_F",
			"SCI_B_Clone_kama_desert_F",
			"SCI_B_Clone_kama_kashyyk_F",
			"SCI_B_Clone_kama_geonosis_F",
			"SCI_B_Clone_kama_winter_F",
			"SCI_B_Clone_kama_temperate_F",
			"SCI_B_Clone_kama_jungle_F",
			"SCI_B_Clone_kama_forest_F",
			
			//Clone Bags
			"SCI_bag_base",
			"SCI_bag_temperate",
			"SCI_bag_forest",
			"SCI_bag_eod",
			"SCI_bag_medic",
			"SCI_bag_geonosis",
			"SCI_bag_kashyyk",
			"SCI_bag_desert",
			"SCI_bag_jungle",
			"SCI_bag_winter"
		};
		weapons[]=
		{
			//Clone Uniforms
			"SCI_uniform_base",
			"SCI_uniform_medic", 
			"SCI_uniform_desert", 
			"SCI_uniform_kashyyk", 
			"SCI_uniform_geonosis", 
			"SCI_uniform_winter", 
			"SCI_uniform_temperate", 
			"SCI_uniform_jungle", 
			"SCI_uniform_forest", 
			
			//Clone Uniforms w/Kama
			"SCI_uniform_kama_base", 
			"SCI_uniform_kama_desert", 
			"SCI_uniform_kama_kashyyk", 
			"SCI_uniform_kama_geonosis", 
			"SCI_uniform_kama_winter", 
			"SCI_uniform_kama_temperate", 
			"SCI_uniform_kama_jungle", 
			"SCI_uniform_kama_forest", 
			
			//Clone Helmets
				//Base
			"SCI_helmet_base",
			"SCI_helmet_pilot_base",
			
				//Kashyyk
			"SCI_helmet_kashyyk_tr",
			"SCI_helmet_kashyyk_su",
			"SCI_helmet_kashyyk_cm",
			
				//Forest
			"SCI_helmet_forest_tr",
			"SCI_helmet_forest_su",
			"SCI_helmet_forest_cm",
			
				//Geonosis
			"SCI_helmet_geonosis_tr",
			"SCI_helmet_geonosis_su",
			"SCI_helmet_geonosis_cm",
			
				//Desert
			"SCI_helmet_desert_tr",
			"SCI_helmet_desert_su",
			"SCI_helmet_desert_cm",
			
				//Jungle
			"SCI_helmet_jungle_tr",
			"SCI_helmet_jungle_su",
			"SCI_helmet_jungle_cm",
			
				//Winter
			"SCI_helmet_winter_tr",
			"SCI_helmet_winter_su",
			"SCI_helmet_winter_cm",
			
				//Temperate
			"SCI_helmet_temperate_tr",
			"SCI_helmet_temperate_su",
			"SCI_helmet_temperate_cm",
			
				//Custom
			"SCI_helmet_aegis",
			"SCI_helmet_apache",
			"SCI_helmet_boss",
			"SCI_helmet_carre",
			"SCI_helmet_cutrex",
			"SCI_helmet_danny",
			"SCI_helmet_dolittle",
			"SCI_helmet_faint",
			"SCI_helmet_fox",
			"SCI_helmet_frankz",
			"SCI_helmet_fruit",
			"SCI_helmet_goose",
			"SCI_helmet_gravela",
			"SCI_helmet_hazard",
			"SCI_helmet_jay",
			"SCI_helmet_jetski",
			"SCI_helmet_jripp",
			"SCI_helmet_karma",
			"SCI_helmet_kiddo",
			"SCI_helmet_lorgar",
			"SCI_helmet_mango",
			"SCI_helmet_mexkalaniyat",
			"SCI_helmet_oddball",
			"SCI_helmet_oeight",
			"SCI_helmet_prime",
			"SCI_helmet_reiksguard",
			"SCI_helmet_sabre",
			"SCI_helmet_sergay",
			"SCI_helmet_seven",
			"SCI_helmet_six",
			"SCI_helmet_spades",
			"SCI_helmet_spiderboy",
			"SCI_helmet_tempest",
			"SCI_helmet_thunder",
			"SCI_helmet_tommo",
			"SCI_helmet_tyler",
			"SCI_helmet_vermilion",
			"SCI_helmet_walrus",
			"SCI_helmet_wave",
			"SCI_helmet_wilde",
			"SCI_helmet_wolf",
			"SCI_helmet_nomad",
			"SCI_helmet_hare",
			"SCI_helmet_ikaros",
			"SCI_helmet_shotgun",
			"SCI_helmet_karver",
			"SCI_helmet_hotshot",
			
				//Pilot
			"SCI_helmet_wampa2",
			"SCI_helmet_wampa3",
			"SCI_helmet_wampa4",
			
				//Custom Pilot
			"SCI_helmet_nor"
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F", "sci_armorMain"};
	};
};

class UniformSlotInfo;

class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints
		{
			class HitHead;
			class HitBody;
			class HitHands;
			class HitLegs;
		};
	};
	class SoldierWB: CAManBase{};
	class B_Soldier_base_F: SoldierWB{};
	
	
	
	////////////////// UNIT INGAME ////////////
	class SCI_B_Clone_F: B_Soldier_base_F
	{
		scope = 2;
		scopeCurator = 2;
		faction = SCI_212th_clone_faction;
		editorSubcategory = "SCI_spawn";
		vehicleClass = "SCI_spawn";
		displayName = "Clone (Heavy)";
		identityTypes[] =  
		{
			"LanguageENG_F", // Language spoke by unit
			"Head_NATO", // Faces of unit
		};
		model = "sci_cloneArmor\data\clone_armor_test.p3d";
		uniformClass 	= "SCI_uniform_base";
		modelSides[] = {6};
		nakedUniform="U_BasicBody";
		camouflage		= 1.0;
		
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 4;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.1;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 4;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 4;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 4;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 4;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 10;
				material = -1;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 10;
				material = -1;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 10;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				explosionShielding = 0.25;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitLeftArm
			{
				armor = 10;
				material = -1;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				armor = 10;
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 10;
				material = -1;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				armor = 10;
				name = "leg_r";
			};
		};
		
		armor					= 10; // keep constant among various soldiers so that the hit points armor coefficients remains on the same scale
		armorStructural			= 0.4; // divide all damage taken to total hit point, either directly or through hit point passThrough coefficient, must be adjusted for each model to achieve consistent total damage results
		explosionShielding		= 0.04; // for consistent explosive damage after adjusting = ( armorStructural / 10 )
		minTotalDamageThreshold	= 0.001; // minimalHit for total damage
		impactDamageMultiplier	= 0.5; // multiplier for falling damage
		hiddenSelections[] = {"Camo"}; /// selection defined in sections of model that may have texture and materials changed by setObjectTexture or next parameter
		hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_heavy_CO.paa"}; /// what texture does this soldier use for camo selection
		weapons[] = {Throw, Put}; /// we have a sample weapon, why not use it? Throw and put weapons are required for grenades/mines
		respawnWeapons[] = {Throw, Put}; /// should be the same as previous most of the time
		Items[] = {FirstAidKit}; /// one First aid kit is good to start with
		RespawnItems[] = {FirstAidKit};
		magazines[] = {HandGrenade, HandGrenade};
		respawnMagazines[] = {HandGrenade, HandGrenade};
		linkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio}; /// items directly in inventory slots
		respawnLinkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};		

	class SCI_B_Clone_medic_F: SCI_B_Clone_F
	{
		displayName = "Clone (Medic)";
		uniformClass 	= "SCI_uniform_medic";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_medic_co.paa"
		};
		linkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_desert_F: SCI_B_Clone_F
	{
		displayName = "Clone (Desert)";
		uniformClass 	= "SCI_uniform_desert";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSStakistan_co.paa"
		};
		linkedItems[] = {SCI_helmet_desert_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_desert_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kashyyk_F: SCI_B_Clone_F
	{
		displayName = "Clone (Kashyyk)";
		uniformClass 	= "SCI_uniform_kashyyk";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSkashyyk_co.paa"
		};
		linkedItems[] = {SCI_helmet_kashyyk_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_kashyyk_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_geonosis_F: SCI_B_Clone_F
	{
		displayName = "Clone (Geonosis)";
		uniformClass 	= "SCI_uniform_geonosis";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSgeonosis_co.paa"
		};
		linkedItems[] = {SCI_helmet_geonosis_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_geonosis_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_winter_F: SCI_B_Clone_F
	{
		displayName = "Clone (Winter)";
		uniformClass 	= "SCI_uniform_winter";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSwinter_co.paa"
		};
		linkedItems[] = {SCI_helmet_winter_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_winter_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_temperate_F: SCI_B_Clone_F
	{
		displayName = "Clone (Temperate)";
		uniformClass 	= "SCI_uniform_temperate";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSaltis_co.paa"
		};
		linkedItems[] = {SCI_helmet_temperate_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_temperate_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_jungle_F: SCI_B_Clone_F
	{
		displayName = "Clone (Jungle)";
		uniformClass 	= "SCI_uniform_jungle";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSStanoa_co.paa"
		};
		linkedItems[] = {SCI_helmet_jungle_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_jungle_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_forest_F: SCI_B_Clone_F
	{
		displayName = "Clone (Forest)";
		uniformClass 	= "SCI_uniform_forest";
		hiddenSelections[] = 
		{
			"camo"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSchernarus_co.paa"
		};
		linkedItems[] = {SCI_helmet_forest_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_forest_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	//Kama Uniforms
	class SCI_B_Clone_kama_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Heavy)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_base";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_heavy_co.paa", "sci_cloneArmor\data\vesttextures\kama_black_co.paa"
		};
		linkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_base, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_desert_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Desert)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_desert";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSStakistan_co.paa", "sci_cloneArmor\data\vesttextures\kama_cy_co.paa"
		};
		linkedItems[] = {SCI_helmet_desert_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_desert_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_kashyyk_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Kashyyk)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_kashyyk";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSkashyyk_co.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"
		};
		linkedItems[] = {SCI_helmet_kashyyk_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_kashyyk_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_geonosis_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Geonosis)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_geonosis";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSgeonosis_co.paa", "sci_cloneArmor\data\vesttextures\kama_cy_co.paa"
		};
		linkedItems[] = {SCI_helmet_geonosis_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_geonosis_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_winter_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Winter)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_winter";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSwinter_co.paa", "sci_cloneArmor\data\vesttextures\kama_white_co.paa"
		};
		linkedItems[] = {SCI_helmet_winter_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_winter_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_temperate_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Temperate)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_temperate";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSaltis_co.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"
		};
		linkedItems[] = {SCI_helmet_temperate_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_temperate_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_jungle_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Jungle)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_jungle";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSStanoa_co.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"
		};
		linkedItems[] = {SCI_helmet_jungle_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_jungle_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};
	
	class SCI_B_Clone_kama_forest_F: SCI_B_Clone_F
	{
		displayName = "Clone w/Kama (Forest)";
		model = "sci_cloneArmor\data\clone_armor_kama.p3d";
		uniformClass 	= "SCI_uniform_kama_forest";
		hiddenSelections[] = 
		{
			"camo","camo1"
		};
		hiddenSelectionsTextures[] =
		{
			"sci_cloneArmor\data\textures\p2clone_CSSchernarus_co.paa", "sci_cloneArmor\data\vesttextures\kama_black_co.paa"
		};
		linkedItems[] = {SCI_helmet_forest_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
		respawnLinkedItems[] = {SCI_helmet_forest_tr, ItemMap, ItemCompass, ItemWatch, ItemRadio};
	};

	#include "cfgBackpack.hpp"
};

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem;
	class Uniform_Base: ItemCore
	{
		class ItemInfo;
	};
	
	//Uniforms
	class SCI_uniform_base: Uniform_Base
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Heavy";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_heavy_CO.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_desert : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Desert";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSStakistan_CO.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_desert_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_kashyyk : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Kashyyk";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSkashyyk_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kashyyk_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_geonosis : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Geonosis";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSgeonosis_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_geonosis_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_winter : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Winter";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSwinter_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_winter_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_temperate : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Temperate";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSaltis_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_temperate_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_jungle : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Jungle";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSStanoa_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_jungle_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	class SCI_uniform_forest : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Forest";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSchernarus_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_forest_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	//Kama Uniforms
	class SCI_uniform_kama_base: Uniform_Base
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Heavy (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_heavy_co.paa", "sci_cloneArmor\data\vesttextures\kama_black_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_desert : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Desert (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSStakistan_CO.paa", "sci_cloneArmor\data\vesttextures\kama_cy_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_desert_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_kashyyk : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Kashyyk (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSkashyyk_CO.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_kashyyk_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_geonosis : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Geonosis (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSgeonosis_CO.paa", "sci_cloneArmor\data\vesttextures\kama_cy_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_geonosis_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_winter : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Winter (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSwinter_CO.paa", "sci_cloneArmor\data\vesttextures\kama_white_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_winter_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_temperate : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Temperate (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSaltis_CO.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_temperate_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_jungle : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Jungle (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSStanoa_CO.paa", "sci_cloneArmor\data\vesttextures\kama_od_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_jungle_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	class SCI_uniform_kama_forest : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Forest (Kama)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo","camo1"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_CSSchernarus_CO.paa", "sci_cloneArmor\data\vesttextures\kama_black_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_kama_forest_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo","camo1"};
			mass=40;
		};
	};
	
	//Medic uniforms
	class SCI_uniform_medic : Uniform_Base 
	{
		scope=2;
		displayName="[SCI] BDU-P-2 Heavy (Medic)";
		picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa"; /// this icon fits the uniform surprisingly well
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver"; /// how does the uniform look when put on ground
		hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"sci_cloneArmor\data\textures\p2clone_medic_co.paa"};
		
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass= SCI_B_Clone_medic_F;
			containerClass="supply150";
			hiddenSelections[] = {"camo"};
			mass=40;
		};
	};
	
	#include "cfgHeadgear.hpp"
	#include "cfgVests.hpp"
};

