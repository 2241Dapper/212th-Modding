class HeadgearItem: InventoryItem_Base_F
{
	allowedSlots[] = {BACKPACK_SLOT, HEADGEAR_SLOT}; /// defines where can be the cap placed, it is small enough to fit in backpack
	type = HEADGEAR_SLOT;		/// standard slot for the cap is on head
	hiddenSelections[] = {};	/// default caps don't have any changeable selections
	hitpointName = "HitHead";	/// what hitpoint is covered with the cap to have additional protection
};

class SCI_helmet_base: ItemCore
{
	scope = 2; 
	displayName  = "[SCI] ACH-P-2 Heavy (Trooper)";
	picture = ""; 
	model   = "sci_cloneArmor\data\standardhelmet.p3d";
	hiddenSelections[] = {"camo"}; 
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_heavyCR_CO.paa"}; /// what texture is going to be used
	subItems[] = {"Integrated_NVG_F"};
	class ItemInfo: HeadgearItem
	{
		mass = 30; 
		uniformModel = "sci_cloneArmor\data\standardhelmet.p3d";	
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	
		modelSides[] = {6};
		hiddenSelections[] = {"camo"}; 
		
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
				armor		= 40; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
		};
	};
};

class SCI_helmet_pilot_base: ItemCore
{
	scope = 2; 
	displayName = "[SCI] AFH-P-2 (Wampa 1)";
	picture = ""; 
	model   = "sci_cloneArmor\data\pilothelmet.p3d";
	hiddenSelections[] = {"camo"}; 
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\pilot_wampa1_CO.paa"}; /// what texture is going to be used
	subItems[] = {"Integrated_NVG_TI_0_F"};
	class ItemInfo: HeadgearItem
	{
		mass = 30; 
		uniformModel = "sci_cloneArmor\data\pilothelmet.p3d";	
		allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	
		modelSides[] = {6};
		hiddenSelections[] = {"camo"}; 
		
		class HitpointsProtectionInfo
		{
			class Head
			{
				hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
				armor		= 50; // addition to armor of referenced hitpoint
				passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
			};
		};
	};
};
//Heavy Helmets
class SCI_helmet_base_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Heavy (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_heavySPC_CO.paa"};
};
class SCI_helmet_base_co : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Heavy (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_heavyCP_CO.paa"};
};

//Kashyyk Helmets
class SCI_helmet_kashyyk_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Kashyyk (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRkashyyk_CO.paa"};
};
class SCI_helmet_kashyyk_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Kashyyk (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCkashyyk_CO.paa"};
};
class SCI_helmet_kashyyk_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Kashyyk (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPkashyyk_CO.paa"};
};

//Forest Helmets
class SCI_helmet_forest_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Forest (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRchernarus_CO.paa"};
};
class SCI_helmet_forest_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Forest (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCchernarus_CO.paa"};
};
class SCI_helmet_forest_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Forest (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPchernarus_CO.paa"};
};

//Geonosis Helmets
class SCI_helmet_geonosis_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Geonosis (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRgeonosis_CO.paa"};
};
class SCI_helmet_geonosis_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Geonosis (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCgeonosis_CO.paa"};
};
class SCI_helmet_geonosis_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Geonosis (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPgeonosis_CO.paa"};
};

//Desert Helmets
class SCI_helmet_desert_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Desert (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRtakistan_CO.paa"};
};
class SCI_helmet_desert_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Desert (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCtakistan_CO.paa"};
};
class SCI_helmet_desert_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Desert (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPtakistan_CO.paa"};
};

//Jungle Helmets
class SCI_helmet_jungle_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Jungle (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRtanoa_CO.paa"};
};
class SCI_helmet_jungle_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Jungle (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCtanoa_CO.paa"};
};
class SCI_helmet_jungle_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Jungle (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPtanoa_CO.paa"};
};

//Winter Helmets
class SCI_helmet_winter_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Winter (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRwinter_CO.paa"};
};
class SCI_helmet_winter_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Winter (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCwinter_CO.paa"};
};
class SCI_helmet_winter_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Winter (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPwinter_CO.paa"};
};

//Temperate Helmets
class SCI_helmet_temperate_tr : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Temperate (Trooper)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CRaltis_CO.paa"};
};
class SCI_helmet_temperate_su : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Temperate (NCO)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_SPCaltis_CO.paa"};
};
class SCI_helmet_temperate_cm : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 Temperate (Command)";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_CPaltis_CO.paa"};
};

//Custom Helmets
class SCI_helmet_aegis : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Aegis'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_aegis_CO.paa"};
};
class SCI_helmet_apache : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Apache'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_apache_CO.paa"};
};
class SCI_helmet_boss : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Boss'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_boss_CO.paa"};
};
class SCI_helmet_carre : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Carre'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_carre_CO.paa"};
};
class SCI_helmet_cutrex : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'CutRex'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_cutrex_CO.paa"};
};
class SCI_helmet_danny : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Danny'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_danny_CO.paa"};
};
class SCI_helmet_dolittle : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Dolittle'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_dolittle_CO.paa"};
};
class SCI_helmet_faint : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Faint'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_faint_CO.paa"};
};
class SCI_helmet_fox : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Fox'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_fox_CO.paa"};
};
class SCI_helmet_frankz : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Frankz'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_frankz_CO.paa"};
};
class SCI_helmet_fruit : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Fruit'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_fruit_CO.paa"};
};
class SCI_helmet_goose : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Goose'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_goose_CO.paa"};
};
class SCI_helmet_gravela : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Gravela'"; //cool dude
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_gravela_CO.paa"};
};
class SCI_helmet_hazard : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Hazard'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_hazard_CO.paa"};
};
class SCI_helmet_jay : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Jay'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_jay_CO.paa"};
};
class SCI_helmet_jetski : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Jetski'"; //cooler dude
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_jetski_CO.paa"};
};
class SCI_helmet_jripp : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Jripp'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_jripp_CO.paa"};
};
class SCI_helmet_karma : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Karma'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_karma_CO.paa"};
};
class SCI_helmet_kiddo : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Kiddo'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_kiddo_CO.paa"};
};
class SCI_helmet_lorgar : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Lorgar'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_lorgar_CO.paa"};
};
class SCI_helmet_mango : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Mango'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_mango_CO.paa"};
};
class SCI_helmet_mexkalaniyat : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Mexkalaniyat'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_mexkalaniyat_CO.paa"};
};
class SCI_helmet_oddball : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Oddball'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_oddball_CO.paa"};
};
class SCI_helmet_oeight : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'O'Eight'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_oeight_CO.paa"};
};
class SCI_helmet_prime : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Prime'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_prime_CO.paa"};
};
class SCI_helmet_reiksguard : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Reiksguard'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_Reiksguard_CO.paa"};
};
class SCI_helmet_sabre : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Sabre'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_sabre_CO.paa"};
};
class SCI_helmet_sergay : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Sergay'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_sergay_CO.paa"};
};
class SCI_helmet_seven : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Seven'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_seven_CO.paa"};
};
class SCI_helmet_six : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Six'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_six_CO.paa"};
};
class SCI_helmet_spades : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Spades'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_spades_CO.paa"};
};
class SCI_helmet_spiderboy : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Spiderboy'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_spiderboy_CO.paa"};
};
class SCI_helmet_tempest : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Tempest'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_tempest_CO.paa"};
};
class SCI_helmet_thunder : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Thunder'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_thunder_CO.paa"};
};
class SCI_helmet_tommo : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Tommo'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_tommo_CO.paa"};
};
class SCI_helmet_tyler : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Tyler'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_tyler_CO.paa"};
};
class SCI_helmet_vermilion : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Vermilion'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_vermilion_CO.paa"};
};
class SCI_helmet_walrus : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Walrus'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_walrus_CO.paa"};
};
class SCI_helmet_wave : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Wave'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_wave_CO.paa"};
};
class SCI_helmet_wilde : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Wilde'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_wilde_CO.paa"};
};
class SCI_helmet_wolf : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Wolf'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_wolf_CO.paa"};
};
class SCI_helmet_nomad : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Nomad'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_nomad_CO.paa"};
};
class SCI_helmet_hare : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Hare'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_hare_CO.paa"};
};
class SCI_helmet_ikaros : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Ikaros'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_ikaros_CO.paa"};
};
class SCI_helmet_shotgun : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Shotgun'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_shotgun_CO.paa"};
};
class SCI_helmet_karver : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Karver'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_karver_CO.paa"};
};
class SCI_helmet_hotshot : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Hotshot'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_hotshot_CO.paa"};
};
class SCI_helmet_charger : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Charger'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_charger_CO.paa"};
};
class SCI_helmet_south : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'South'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_south_CO.paa"};
};
class SCI_helmet_pandemic : SCI_helmet_base 
{
	displayName = "[SCI] ACH-P-2 'Pandemic'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_pandemic_CO.paa"};
};

// Pilot Helmets
class SCI_helmet_wampa2 : SCI_helmet_pilot_base 
{
	displayName = "[SCI] AFH-P-2 (Wampa 2)";
	model   = "sci_cloneArmor\pilothelmet.p3d";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\pilot_wampa2_CO.paa"};
};
class SCI_helmet_wampa3 : SCI_helmet_pilot_base 
{
	displayName = "[SCI] AFH-P-2 (Wampa 3)";
	model   = "sci_cloneArmor\pilothelmet.p3d";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\pilot_wampa3_CO.paa"};
};
class SCI_helmet_wampa4 : SCI_helmet_pilot_base 
{
	displayName = "[SCI] AFH-P-2 (Wampa 4)";
	model   = "sci_cloneArmor\pilothelmet.p3d";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\pilot_wampa4_CO.paa"};
};

//Custom Pilot Helmets
class SCI_helmet_nor : SCI_helmet_pilot_base
{
	displayName = "[SCI] AFH-P-2 'Nor'";
	hiddenSelectionsTextures[] = {"sci_cloneArmor\data\helmettextures\p2helmet_nor_CO.paa"};
};