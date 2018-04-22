class CfgPatches
{
	class sci_armorMain
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

class CfgFactionClasses
{
	class SCI_212th_clone_faction
	{
		displayName = "212th AB: Ghost Company"; // Name of the faction
		author = "";
		icon = ""; // Needs to be 16x16 in resolution and it needs to be in the form of a PAA.
		priority = 2;
		side = 1; // 0 = Opfor | 1 = Blufor | 3 = Independent | 4 = Civ
	};
	
	class SCI_separatist_o_faction
	{
		displayName = "Organized Separatist Resistance";
		author = "";
		icon = "";
		priority = 2;
		side = 0;
	};
};

class CfgVehicleClasses
{
	class SCI_spawn
	{
		displayName = "Spawn Units";
	};
	
	class SCI_men
	{
		displayName = "Men"; // Rename to what you want the sub group of the faction will be. You can have multiple subfactions (VehicleClasses) as long as the class name of the VehicleClass is different. Makes it work with zeus
	};
	
	class SCI_menARF
	{
		displayName = "Men (ARF)";
	};
	
	class SCI_menOfficer
	{
		displayName = "Men (Officer)";
	};
	
	class SCI_menSF
	{
		displayName = "Men (SF)";
	};
	
	class SCI_Motorized
	{
		displayName = "Motorized";
	};
	
	class SCI_Mechanized
	{
		displayName = "Mechanized";
	};
	
	class SCI_Air
	{
		displayName = "Air";
	};
};

class CfgEditorSubcategories
{
	class SCI_spawn
	{
		displayName = "Spawn Units";
	};
	
	class SCI_men
	{
		displayName = "Men"
	};
	
	class SCI_menARF
	{
		displayName = "Men (ARF)";
	};
	
	class SCI_menOfficer
	{
		displayName = "Men (Officer)";
	};
	
	class SCI_menSF
	{
		displayName = "Men (SF)";
	};
	
	class SCI_Motorized
	{
		displayName = "Motorized";
	};
	
	class SCI_Mechanized
	{
		displayName = "Mechanized";
	};
	
	class SCI_Air
	{
		displayName = "Air";
	};
};

class CfgWorlds
{
	class GenericNames
	{
		class SCI_ctNames
		{
			class FirstNames
			{
				cr = "CR -";
				ct = "CT -";
				vct = "VCT -";
				sct = "SCT -";
			};
			class LastNames
			{
				boot = "Boot";
				error = "Error";
				bro = "Bro";
				zet = "Zet";
				junior = "Junior";
				brang = "Brang";
				drive = "Drive";
				impact = "Impact";
				cable = "Cable";
				data = "Data";
				hope = "Hope";
				might = "Might";
			};
		};
		class SCI_spcNames
		{
			class FirstNames
			{
				spc = "SPC -";
				cts = "CTS -";
			};
			class LastNames
			{
				drive = "Drive";
				impact = "Impact";
				brang = "Brang";
				cable = "Cable";
				data = "Data";
				hope = "Hope";
				rass = "Rass";
				might = "Might";
				prinieli = "Prinieli";
			};
		};
		class SCI_cpNames
		{
			class FirstNames
			{
				lcp = "LCP -";
				cp = "CP -";
			};
			class LastNames
			{
				hook = "Hook";
				mort = "Mort";
				gravela = "Gravela";
				carre = "Carre";
				porg = "Porg";
				boil = "Boil";
				waxer = "Waxer";
				might = "Might";
				hope = "Hope";
			};
		};
		class SCI_csNames
		{
			class FirstNames
			{
				cs = "CS -";
			};
			class LastNames
			{
				bitter = "Bitter";
				death = "Death";
				blowback = "BlowBack";
				boss = "Boss";
				fives = "Fives";
				thaas = "Thaas";
				flirobo = "Flibrobo";
				estes = "Estes";
				brass = "Brass";
				major = "Major";
				might = "Might";
			};
		};
		class SCI_cxNames
		{
			class FirstNames
			{
				cx = "CX -";
				cwx = "CWX -";
			};
			class LastNames
			{
				bloppo = "Bloppo";
				donny = "Donny";
				heppod = "Heppod";
				mof = "Mof";
				blade = "Blade";
				crix = "Crix";
				cloud = "Cloud";
			};
		};
		class SCI_ccNames
		{
			class FirstNames
			{
				cc = "CC -";
			};
			class LastNames
			{
				six = "Six";
				walrus = "Walrus";
				moment = "Moment";
				kontal = "Kontal";
				drux = "Drux";
				burst = "Burst";
				guide = "Guide";
			};
		};
	};
};