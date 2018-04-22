#include "basicdefines_A3.hpp"
class CfgPatches
{
	class sci_APC
	{
		addonRootClass="A3_Armor_F_Beta";
		requiredAddons[]=
		{
			"A3_Armor_F_Beta",
			"A3_Soft_F",
			"sci_vehicleMain",
			"sci_valken38a",
			"sci_weaponsMain"
		};
		requiredVersion=0.1;
		units[]=
		{
			"SCI_B_APC_Wheeled_01_cannon_F"
		};
		weapons[]={};
	};
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class NewTurret;
		class Sounds;
		class HitPoints
		{
			class HitBody;
			class HitEngine;
			class HitFuel;
			class HitHull;
		};
	};
	class Wheeled_APC_F: Car_F
	{
		class ViewOptics;
		class ViewCargo;
		class Sounds: Sounds
		{
			class Engine;
			class Movement;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
	};
	class SCI_APC_Wheeled_01_base_F: Wheeled_APC_F
	{
		features="Randomization: No						<br />Camo selections: 3 - top of hull, bottom of hull, turret						<br />Script door sources: None						<br />Script animations: HideTurret						<br />Executed scripts: None 						<br />Firing from vehicles: No						<br />Slingload: No						<br />Cargo proxy indexes: 1 to 8";
		author="";
		mapSize=10.44;
		_generalMacro="APC_Wheeled_01_base_F";
		accuracy=0.25;
		displayName="HAVw A2 Bantha IFV";
		attenuationEffectType="TankAttenuation";
		soundGetIn[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\sounds_f\vehicles\armor\noises\get_in_out",
			0.56234133,
			1,
			20
		};
		soundTurnIn[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOut[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnInInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundTurnOutInternal[]=
		{
			"A3\Sounds_F\vehicles\noises\Turn_in_out",
			1.7782794,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_start",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_start",
			0.56234133,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_stop",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_stop",
			0.56234133,
			1,
			200
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			0.17782794,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			0.17782794,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			0.17782794,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		soundGeneralCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1",
			1,
			1,
			100
		};
		soundGeneralCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2",
			1,
			1,
			100
		};
		soundGeneralCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3",
			1,
			1,
			100
		};
		soundGeneralCollision4[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4",
			1,
			1,
			100
		};
		soundCrashes[]=
		{
			"soundGeneralCollision1",
			0.25,
			"soundGeneralCollision2",
			0.25,
			"soundGeneralCollision3",
			0.25,
			"soundGeneralCollision4",
			0.25
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1",
			1,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2",
			1,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3",
			1,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4",
			1,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1",
			1,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2",
			1,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3",
			1,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4",
			1,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1",
			1,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2",
			1,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3",
			1,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4",
			1,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_01",
					0.3548134,
					1,
					200
				};
				frequency="0.95	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*camPos*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_02",
					0.39810717,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_03",
					0.44668359,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_06",
					0.50118721,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*camPos*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_07",
					0.56234133,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_08",
					0.63095737,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_engine_10",
					0.70794576,
					1,
					300
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_01",
					0.56234133,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_02",
					0.63095737,
					1,
					200
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_03",
					0.63095737,
					1,
					230
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_06",
					0.70794576,
					1,
					250
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_07",
					0.70794576,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_08",
					1,
					1,
					350
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\ext_exhaust_10",
					1.1220185,
					1,
					400
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_01",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_02",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_03",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_06",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_07",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_08",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_engine_10",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_01",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(10/	2300),(200/	2300)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(10/	2300),(200/	2300)])	*	((rpm/	2300) factor[(500/	2300),(425/	2300)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_02",
					0.39810717,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(430/	2300),(730/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(430/	2300),(510/	2300)])	*	((rpm/	2300) factor[(730/	2300),(620/	2300)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_03",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(630/	2300),(1000/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(600/	2300),(720/	2300)])	*	((rpm/	2300) factor[(1100/	2300),(840/	2300)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_06",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(850/	2300),(1300/	2300)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(800/	2300),(1000/	2300)])	*	((rpm/	2300) factor[(1300/	2300),(1100/	2300)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_07",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1100/	2300),(1600/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1100/	2300),(1270/	2300)])	*	((rpm/	2300) factor[(1550/	2300),(1380/	2300)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_08",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1400/	2300),(2000/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	2300) factor[(1380/	2300),(1500/	2300)])	*	((rpm/	2300) factor[(2000/	2300),(1700/	2300)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\APC1\int_exhaust_10",
					0.63095737,
					1
				};
				frequency="0.8	+	((rpm/	2300) factor[(1700/	2300),(2300/	2300)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	2300) factor[(1600/	2300),(2100/	2300)])";
			};
			class NoiseInt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[]=
				{
					"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",
					0.63095737,
					1,
					150
				};
				frequency="1";
				volume="camPos*(angVelocity max 0.04)*(Speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(Speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(Speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(Speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(Speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(Speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1.5848932,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(Speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(Speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(Speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(Speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(Speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(Speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(Speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.50118721,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(Speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.2, -0.3])*(Speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.2, 0.3])*(Speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.3])*(Speed factor[0, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.3])*(Speed factor[0, 10])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain1_int",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.2;
		brakeIdleSpeed=1.78;
		maxSpeed=90;
		fuelCapacity=100;
		wheelCircumference=3.8050001;
		waterLeakiness=0.1;
		normalSpeedForwardCoef=0.51999998;
		accelAidForceYOffset=-1.5;
		antiRollbarForceCoef=24;
		antiRollbarForceLimit=30;
		antiRollbarSpeedMin=15;
		antiRollbarSpeedMax=65;
		simulation="carx";
		dampersBumpCoef=4.5;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=65;
		enginePower=2000;
		peakTorque=6000;
		idleRpm=600;
		redRpm=4000;
		maxOmega=241;
		minOmega=50;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.050000001;
		torqueCurve[]=
		{
			
			{
				"(0/2300)",
				"(0/2260)"
			},
			
			{
				"(1000/2300)",
				"(1625/2260)"
			},
			
			{
				"(1400/2300)",
				"(2100/2260)"
			},
			
			{
				"(1500/2300)",
				"(2200/2260)"
			},
			
			{
				"(1550/2300)",
				"(2260/2260)"
			},
			
			{
				"(1600/2300)",
				"(2200/2260)"
			},
			
			{
				"(2300/2300)",
				"(1700/2260)"
			},
			
			{
				"(4700/2300)",
				"(0/2260)"
			}
		};
		changeGearMinEffectivity[]={0.5,0.15000001,0.97000003,0.97000003,0.97000003,0.97000003,0.97000003,0.98500001};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-4.8400002,
				"N",
				0,
				"D1",
				3.4300001,
				"D2",
				2.01,
				"D3",
				1.42,
				"D4",
				1,
				"D5",
				0.82999998,
				"D6",
				0.58999997
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			AmphibiousRatios[]=
			{
				"R1",
				-10,
				"N",
				0,
				"D1",
				30
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		switchTime=0.1;
		latency=1.4;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				center="wheel_1_1_center";
				boundary="wheel_1_1_bound";
				steering=1;
				width=0.34999999;
				mass=187.5;
				MOI=60;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=45000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_center";
				tireForceAppPointOffset="wheel_1_1_center";
				maxCompression=0.1125;
				maxDroop=0.15000001;
				sprungMass=3090;
				springStrength=110000;
				springDamperRate=27900;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=1;
				center="wheel_1_2_center";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_center";
				tireForceAppPointOffset="wheel_1_2_center";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_center";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_center";
				tireForceAppPointOffset="wheel_1_3_center";
				maxHandBrakeTorque=300000;
			};
			class L4: L1
			{
				boneName="wheel_1_4_damper";
				steering=0;
				center="wheel_1_4_center";
				boundary="wheel_1_4_bound";
				suspForceAppPointOffset="wheel_1_4_center";
				tireForceAppPointOffset="wheel_1_4_center";
				maxHandBrakeTorque=300000;
			};
			class L5: L1
			{
				boneName="wheel_1_5_damper";
				steering=0;
				center="wheel_1_5_center";//need to add
				boundary="wheel_1_5_bound";//need to add
				suspForceAppPointOffset="wheel_1_5_center";//need to add
				tireForceAppPointOffset="wheel_1_5_center";//need to add
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_center";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_center";
				tireForceAppPointOffset="wheel_2_1_center";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=1;
				center="wheel_2_2_center";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_center";
				tireForceAppPointOffset="wheel_2_2_center";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_center";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_center";
				tireForceAppPointOffset="wheel_2_3_center";
				maxHandBrakeTorque=300000;
			};
			class R4: R1
			{
				boneName="wheel_2_4_damper";
				steering=0;
				center="wheel_2_4_center";
				boundary="wheel_2_4_bound";
				suspForceAppPointOffset="wheel_2_4_center";
				tireForceAppPointOffset="wheel_2_4_center";
				maxHandBrakeTorque=300000;
			};
			class R5: R1
			{
				boneName="wheel_2_5_damper";
				steering=0;
				center="wheel_2_5_center";//Need to add
				boundary="wheel_2_5_bound";//Need to add
				suspForceAppPointOffset="wheel_2_5_center";//Need to add
				tireForceAppPointOffset="wheel_2_5_center";//Need to add
				maxHandBrakeTorque=300000;
			};
		};
		editorSubcategory="EdSubcat_APCs";
		memoryPointTaskMarker="TaskMarker_1_pos";
		terrainCoef=1.5;
		turnCoef=2;
		canFloat=1;
		waterAngularDampingCoef=6;
		waterPPInVehicle=0;
		waterResistanceCoef=0.05;
		engineShiftY=-0.5;
		armor=200;
		armorStructural=5;
		armorLights=0.1;
		crewExplosionProtection=0.99949998;
		damageResistance=0.0071899998;
		cost=1000000;
		driverAction="crew_tank01_out";
		driverInAction="crew_tank01_in";
		cargoAction[]=
		{
			"passenger_apc_narrow_generic02_low",
			"passenger_apc_narrow_generic01_low",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03_low",
			"passenger_apc_generic02",
			"passenger_generic02_foldhands",
			"passenger_apc_narrow_generic01_low",
			"passenger_apc_narrow_generic02_low",
			"passenger_apc_narrow_generic03",
			"passenger_apc_generic03_low",
			"passenger_apc_generic02"
		};
		hideWeaponsCargo=1;
		driverForceOptics=1;
		driverOpticsModel="\a3\weapons_f\reticle\Optics_Driver_01_F";
		memoryPointDriverOptics="driverview";
		cargoIsCoDriver[]={0};
		forceHideDriver=0;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		class HitPoints: HitPoints
		{
			class HitBody: HitBody
			{
				armor=1;
				material=-1;
				name="karoserie";
				visual="zbytek";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.40000001;
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				material=-1;
				name="motor";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.2;
				radius=0.30000001;
			};
			class HitFuel: HitFuel
			{
				armor=0.5;
				material=-1;
				name="palivo";
				passThrough=0.5;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.30000001;
			};
			class HitHull: HitHull
			{
				armor=2;
				material=-1;
				name="palivo";
				passThrough=0;
				minimalHit=0.1;
				explosionShielding=1.5;
				radius=0.30000001;
			};
		};
		weapons[]=
		{
			"TruckHorn"
		};
		magazines[]={};
		smokeLauncherGrenadeCount=12;
		smokeLauncherVelocity=5;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class ViewGunner;
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						memoryPointGunnerOutOptics="commanderview";
						memoryPointGunnerOptics="commanderview";
						gunBeg="Usti hlavne3";
						gunEnd="Konec hlavne3";
						memoryPointGun="usti hlavne3";
						minElev=-25;
						maxElev=60;
						initElev=0;
						minTurn=-360;
						maxTurn=360;
						initTurn=0;
						minCamElev=-90;
						maxCamElev=90;
						weapons[] = {SCI_arifle_VALKEN38A_F, SmokeLauncher};	// you may need different weapon class to provide firing effects emit from proper position.
						magazines[] = {SCI_200Rnd_VALKEN38SAW_mag, SCI_200Rnd_VALKEN38SAW_mag, SCI_200Rnd_VALKEN38SAW_mag, SCI_200Rnd_VALKEN38SAW_mag, SmokeLauncherMag, SmokeLauncherMag, SmokeLauncherMag};
						soundServo[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						soundServoVertical[]=
						{
							"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_comm",
							1,
							1,
							30
						};
						outGunnerMayFire=0;
						inGunnerMayFire=1;
						forceHideGunner=0;
						gunnerAction="commander_apcwheeled1_out";
						gunnerInAction="commander_apcwheeled1_in";
						gunnerGetInAction="GetInAMV_cargo";
						gunnerGetOutAction="GetOutLow";
						gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel="";
						gunnerOpticsEffect[]={};
						isPersonTurret=1;
						personTurretAction="vehicle_turnout_1";
						minOutElev=-10;
						maxOutElev=15;
						initOutElev=0;
						minOutTurn=-45;
						maxOutTurn=90;
						initOutTurn=0;
						class ViewGunner: ViewGunner
						{
						};
						class ViewOptics: ViewOptics
						{
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=100;
							initFov=0.31;
							minFov=0.034000002;
							maxFov=0.31;
							visionMode[]=
							{
								"Normal",
								"TI"
							};
							thermalMode[]={2,3};
						};
						class OpticsIn: Optics_Commander_01
						{
							class Wide: Wide
							{
							};
							class Medium: Medium
							{
							};
							class Narrow: Narrow
							{
							};
						};
						turretInfoType="RscOptics_MBT_01_commander";
						showCrewAim=1;
						startEngine=0;
						class HitPoints
						{
							class HitTurret
							{
								armor=0.2;
								material=-1;
								name="vezVelitele";
								visual="vezVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.40000001;
								radius=0.2;
							};
							class HitGun
							{
								armor=0.2;
								material=-1;
								name="zbranVelitele";
								visual="zbranVelitele";
								passThrough=0;
								minimalHit=0.1;
								explosionShielding=0.40000001;
								radius=0.2;
							};
						};
						stabilizedInAxes=3;
						maxHorizontalRotSpeed=1.8;
						maxVerticalRotSpeed=1.8;
						gunnerHasFlares=1;
						viewGunnerInExternal=1;
					};
				};
				body="mainTurret";
				gun="mainGun";
				weapons[]=
				{
					"LMG_RCWS"
				};
				magazines[]=
				{
					"2000Rnd_65x39_belt",
					"2000Rnd_65x39_belt"
				};
				soundServo[]=
				{
					"A3\sounds_f\dummysound",
					0.0099999998,
					1,
					30
				};
				commanding=1;
				minElev=-10;
				initElev=0;
				maxElev=60;
				minCamElev=-90;
				maxCamElev=90;
				gunnerAction="gunner_apcwheeled1_out";
				gunnerInAction="gunner_apcwheeled1_in";
				gunnerGetInAction="GetInAMV_cargo";
				gunnerGetOutAction="GetOutLow";
				viewGunnerInExternal=1;
				castGunnerShadow=1;
				stabilizedInAxes=3;
				startEngine=0;
				gunnerForceOptics=1;
				inGunnerMayFire=1;
				outGunnerMayFire=0;
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500,1600,1700,1800,1900,2000};
				discreteDistanceInitIndex=2;
				memoryPointGunnerOptics="gunnerview";
				selectionFireAnim="zasleh2";
				isPersonTurret=0;
				personTurretAction="vehicle_turnout_1";
				minOutElev=-30;
				maxOutElev=60;
				initOutElev=0;
				minOutTurn=-160;
				maxOutTurn=160;
				initOutTurn=0;
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
				};
				class OpticsIn: Optics_Gunner_APC_01
				{
					class Wide: Wide
					{
					};
					class Medium: Medium
					{
					};
					class Narrow: Narrow
					{
					};
				};
				
				
						
				turretInfoType="RscOptics_APC_Wheeled_01_gunner";
				showCrewAim=2;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=1;
						minimalHit=0.1;
						explosionShielding=0.2;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.40000001;
						material=-1;
						name="zbran";
						visual="zbran";
						passThrough=0;
						minimalHit=0.1;
						explosionShielding=0.40000001;
						radius=0.25;
					};
				};
			};
		};
		memoryPointLMissile="Rocket_1";
		memoryPointRMissile="Rocket_2";
		class AnimationSources: AnimationSources
		{
			class muzzle_rot
			{
				source="ammorandom";
				weapon="SCI_autocannon_40mm_CTWS";
			};
			class muzzle_hide
			{
				source="reload";
				weapon="SCI_autocannon_40mm_CTWS";
			};
			class HideTurret
			{
				source="user";
				initPhase=0;
				animPeriod=0.001;
			};
			class recoil_source
			{
				source="reload";
				weapon="SCI_autocannon_40mm_CTWS";
			};
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_adds_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_base_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_tows_destruct.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_damage.rvmat",
				"a3\armor_f_beta\APC_Wheeled_01\Data\APC_Wheeled_01_int_destruct.rvmat"
			};
		};
		viewCargoShadowDiff=0.050000001;
		viewCargoShadowAmb=0.5;
		getInAction="GetInHigh";
		getOutAction="GetOutHigh";
		cargoGetInAction[]=
		{
			"GetInAMV_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust";
				direction="exhaust_dir";
				effect="ExhaustsEffectAMV";
			};
		};
		engineStartSpeed=5;
		class NVGMarkers
		{
			class NVGMarker01
			{
				name="nvg_marker";
				color[]={0.029999999,0.003,0.003,1};
				ambient[]={0.003,0.00030000001,0.00030000001,1};
				brightness=0.001;
				blinking=1;
			};
		};
		explosionEffect="FuelExplosionBig";
		engineEffectSpeed=5;
		memoryPointsLeftEngineEffect="EngineEffectL";
		memoryPointsRightEngineEffect="EngineEffectR";
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class Right3: Right2
			{
				position="light_R_flare2";
				flareSize=0.69999999;
				hitpoint="Light_R2";
				selection="Light_R2";
			};
			class Left3: Left2
			{
				position="light_L_flare2";
				flareSize=0.69999999;
				hitpoint="Light_L2";
				selection="Light_L2";
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Left3",
				"Right",
				"Right2",
				"Right3"
			}
		};
		selectionFireAnim="";
		class RenderTargets
		{
			class mirror_l
			{
				renderTarget="mirror_l";
				class Camera
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
			class mirror_r
			{
				renderTarget="mirror_r";
				class Camera
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=4;
					renderQuality=2;
					fov=0.69999999;
				};
			};
		};
		transportSoldier=13;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_mag
			{
				magazine="30Rnd_65x39_caseless_mag";
				count=12;
			};
			class _xx_100Rnd_65x39_caseless_mag
			{
				magazine="100Rnd_65x39_caseless_mag";
				count=6;
			};
			class _xx_HandGrenade
			{
				magazine="HandGrenade";
				count=6;
			};
			class _xx_MiniGrenade
			{
				magazine="MiniGrenade";
				count=6;
			};
			class _xx_1Rnd_HE_Grenade_shell
			{
				magazine="1Rnd_HE_Grenade_shell";
				count=6;
			};
			class _xx_1Rnd_Smoke_Grenade_shell
			{
				magazine="1Rnd_Smoke_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeGreen_Grenade_shell
			{
				magazine="1Rnd_SmokeGreen_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeOrange_Grenade_shell
			{
				magazine="1Rnd_SmokeOrange_Grenade_shell";
				count=3;
			};
			class _xx_1Rnd_SmokeBlue_Grenade_shell
			{
				magazine="1Rnd_SmokeBlue_Grenade_shell";
				count=3;
			};
			class _xx_SmokeShell
			{
				magazine="SmokeShell";
				count=8;
			};
			class _xx_SmokeShellGreen
			{
				magazine="SmokeShellGreen";
				count=8;
			};
			class _xx_SmokeShellOrange
			{
				magazine="SmokeShellOrange";
				count=8;
			};
			class _xx_SmokeShellBlue
			{
				magazine="SmokeShellBlue";
				count=8;
			};
			class _xx_NLAW_F
			{
				magazine="NLAW_F";
				count=5;
			};
			class _xx_Titan_AT
			{
				magazine="Titan_AT";
				count=2;
			};
			class _xx_Titan_AP
			{
				magazine="Titan_AP";
				count=2;
			};
			class _xx_Titan_AA
			{
				magazine="Titan_AA";
				count=2;
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=10;
			};
		};
		class TransportWeapons
		{
			class _xx_arifle_MX_F
			{
				weapon="arifle_MX_F";
				count=2;
			};
		};
		showNVGCommander=1;
		showNVGGunner=1;
		showNVGDriver=1;
		numberPhysicalWheels=8;
		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass="B_Parachute_02_F";
				parachuteHeightLimit=5;
				canBeTransported=1;
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
	};
	class SCI_B_APC_Wheeled_01_base_F: SCI_APC_Wheeled_01_base_F
	{
		author="Six Consolidated Industries";
		_generalMacro="B_APC_Wheeled_01_base_F";
		side=1;
		faction="BLU_F";
		crew="B_crew_F";
		typicalCargo[]=
		{
			"B_soldier_F"
		};
	};
	class SCI_B_APC_Wheeled_01_cannon_F: SCI_B_APC_Wheeled_01_base_F
	{
		author="Six Consolidated Industries";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					0
				},
				
				{
					"wheel_1_3",
					0
				},
				
				{
					"wheel_2_2",
					0
				},
				
				{
					"wheel_2_3",
					0
				},
				
				{
					"wheel_1_4",
					0
				},
				
				{
					"wheel_2_4",
					0
				},
				
				{
					"daylights",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.47999999
				},
				
				{
					"wheel_2_1_damper",
					0.49000001
				},
				
				{
					"wheel_1_2_damper",
					0.49000001
				},
				
				{
					"wheel_1_3_damper",
					0.5
				},
				
				{
					"wheel_2_2_damper",
					0.49000001
				},
				
				{
					"wheel_2_3_damper",
					0.5
				},
				
				{
					"wheel_1_4_damper",
					0.50999999
				},
				
				{
					"wheel_2_4_damper",
					0.56999999
				},
				
				{
					"steering_1_1",
					0
				},
				
				{
					"steering_2_1",
					0
				},
				
				{
					"steering_1_2",
					0
				},
				
				{
					"steering_2_2",
					0
				},
				
				{
					"hatchdriver",
					0
				},
				
				{
					"mainturret",
					0
				},
				
				{
					"turretbase",
					0
				},
				
				{
					"maingun",
					0
				},
				
				{
					"obsturret",
					0
				},
				
				{
					"obsgun",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"vrtulea",
					0
				},
				
				{
					"vrtuleb",
					0
				},
				
				{
					"poklop_gunner",
					0
				},
				
				{
					"poklop_commander",
					0
				},
				
				{
					"zasleh_rot",
					0
				},
				
				{
					"zasleh2_rot",
					81.639999
				},
				
				{
					"zasleh_hide",
					0
				},
				
				{
					"reverse_light",
					0
				}
			};
			hide[]=
			{
				"clan",
				"zasleh2",
				"zasleh_1",
				"light_l",
				"light_r",
				"light_r2",
				"light_l2",
				"zadni svetlo",
				"brzdove svetlo",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=2.3859999;
			verticalOffsetWorld=-0.075999998;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_APC_Wheeled_01_cannon_F.jpg";
		_generalMacro="B_APC_Wheeled_01_cannon_F";
		scope=2;
		accuracy=0.30000001;
		displayName="HAVw A2 Bantha IFV";
		class Library
		{
			libTextDesc="$STR_A3_CFGVEHICLES_APC_WHEELED_01_LIBRARY0";
		};
		model="sci_APC\sci_apc.p3d";
		picture="";
		Icon="";
		unitInfoType="RscUnitInfoTank";
		radarType=8;
		driverCanSee="4+8+2+32+16";
		gunnerCanSee="4+2+8+32+16";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"SCI_autocannon_40mm_CTWS","Rocket_03_AP_Plane_CAS_02_F","PomehiLauncherXT"
				};
				magazines[]=
				{
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"SCI_60Rnd_40GPR_shells",
					"20Rnd_Rocket_03_AP_F",
					"20Rnd_Rocket_03_AP_F",
					"20Rnd_Rocket_03_AP_F",
					"20Rnd_Rocket_03_AP_F",
					"20Rnd_Rocket_03_AP_F",
					"20Rnd_Rocket_03_AP_F"
				};
				
				memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				gunBeg[] = {"z_gunL_muzzle","z_gunR_muzzle"};
				gunEnd[] = {"z_gunL_chamber","z_gunR_chamber"};
				
						
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner",
					0.56234133,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\armor\APC\noises\servo_APC_gunner_vertical",
					0.56234133,
					1,
					30
				};
			};
		};
		threat[]={1,1,0.30000001};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"sci_APC\data\textures\Bantha-ext_Arma Material_CO.paa",
			"sci_APC\data\textures\Bantha-Tire_Arma Material_CO.paa",
			"sci_APC\data\textures\Bantha-Turret_Arma Material_CO.paa",
			"sci_APC\data\textures\Bantha-Int_Arma Material_CO.paa"
		};
	};
};
