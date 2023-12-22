class CfgPatches
{
	class NanoAdjustments
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"TLS_Nano_set_V2",
			"DZ_Characters"
		};
	};
};
class CfgMods
{
	class NanoAdjustments
	{
		dir="NanoAdjustments";
		picture=""; 
		action="";
		hideName=1;
		hidePicture=1;
		name="NanoAdjustments";
		credits=""; 
		author="RonDog";
		authorID="0";  
		version="1.0";
		extra=0;
		type="mod";
	};
};
class CfgVehicles
{
	class Clothing;
	class TLS_Nano2_Helm_Base;
	class Gasmask;
	class TLS_Nano2_Helm : TLS_Nano2_Helm_Base
	{
		scope = 2;
		displayName = "Nanosuit helmet";
		descriptionShort = "You look really sexy";
		repairableWithKits[] = { 8 };
		repairCosts[] = { 25 };
		inventorySlot[] = { "Headgear" };
		simulation = "clothing";
		vehicleClass = "Clothing";
		itemInfo[] = { "Clothing","Headgear" };
		attachments[] = { "GasMaskFilter","NVG","BatteryD" };
		weight = 1000;
		itemSize[] = { 3,3 };
		varWetMax = 0;
		heatIsolation = 0.8;
		noMask = 0;
		headSelectionsToHide[] = { "Clipping_Balaclava" };
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOffWhenInCargo = 1;
			energyUsagePerSecond = 0.001;
			plugType = 1;
			attachmentAction = 1;
			updateInterval = 40;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500; //Default is 3775
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
			};
		};
	};
	class TLS_Nano2_TOP : Clothing
	{
		scope = 2;
		visibilityModifier = 0.75;
		displayName = "Top of the Nanosuit";
		descriptionShort = "Oh god... that's a god of war body";
		inventorySlot[] = { "Vest" }; //Default is {"Body"}
		itemInfo[] = { "Clothing","Vest" }; //Default is {"Clothing","Body"}
		weight = 2100;
		itemSize[] = { 4,3 };
		itemsCargoSize[] = { 7,7 };
		quickBarBonus = 2;
		varWetMax = 0;
		heatIsolation = 0.8;
		repairableWithKits[] = { 5,2 };
		repairCosts[] = { 30,25 };
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500; //Default is 4375
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0; 
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
			};
		};
	};
	class TLS_Nano2_Gloves : Clothing
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Nanosuit Gloves";
		descriptionShort = "Oh, such soft hands";
		model = "\NanoOblek\oblek\Gloves\TLS_Nano2_Gloves_g.p3d";
		inventorySlot[] = { "Gloves" };
		simulation = "clothing";
		itemInfo[] = { "Clothing","Gloves" };
		rotationFlags = 34;
		weight = 450;
		itemSize[] = { 2,2 };
		varWetMax = 0;
		heatIsolation = 0.8;
		repairableWithKits[] = { 5,2 };
		repairCosts[] = { 30,25 };
		class ClothingTypes
		{
			male = "\NanoOblek\oblek\Gloves\TLS_Nano2_Gloves_m.p3d";
			female = "\NanoOblek\oblek\Gloves\TLS_Nano2_Gloves_f.p3d";
		};
		hiddenSelections[] = { "TLS" };
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500; //Default is 1580
					healthLevels[] = { {1,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.7,{"DZ\Characters\gloves\data\OMNOGloves.rvmat"}},{0.5,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0.3,{"DZ\Characters\gloves\data\OMNOGloves_damage.rvmat"}},{0,{"DZ\Characters\gloves\data\OMNOGloves_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
			};
		};
	};
	class TLS_Nano2_LEG : Clothing
	{
		scope = 2;
		visibilityModifier = 0.75;
		displayName = "The bottom of the nanosuit";
		descriptionShort = "Finally, someone exercises their legs.";
		model = "\NanoOblek\oblek\Leg\TLS_Nano2_LEG_g.p3d";
		ContinuouActions[] = { "AT_WRING_CLOTHES" };
		inventorySlot[] = { "Legs" };
		simulation = "clothing";
		itemInfo[] = { "Clothing","Legs" };
		itemSize[] = { 3,4 };
		itemsCargoSize[] = { 10,8 };
		weight = 400;
		ragQuantity = 3;
		varWetMax = 0;
		heatIsolation = 0.8;
		repairableWithKits[] = { 5,2 };
		repairCosts[] = { 30,25 };
		quickBarBonus = 2;
		hiddenSelections[] = { "TLS" };
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class ClothingTypes
		{
			male = "\NanoOblek\oblek\Leg\TLS_Nano2_LEG_m.p3d";
			female = "\NanoOblek\oblek\Leg\TLS_Nano2_LEG_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500; //Default is 3775
					healthLevels[] = { {1,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.7,{"DZ\characters\headgear\data\HelmetMich.rvmat"}},{0.5,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0.3,{"DZ\characters\headgear\data\HelmetMich_damage.rvmat"}},{0,{"DZ\characters\headgear\data\HelmetMich_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
			};
		};
	};
	class TLS_Nano2_Boots : Clothing
	{
		scope = 2;
		visibilityModifier = 0.8;
		displayName = "Nanosuit boots";
		descriptionShort = "What are those, they are my crocs";
		model = "\NanoOblek\oblek\Boots\TLS_Nano2_Boots_g.p3d";
		inventorySlot[] = { "Feet" };
		itemInfo[] = { "Clothing","Feet" };
		itemSize[] = { 4,4 };
		weight = 400;
		durability = 0.5;
		varWetMax = 0;
		heatIsolation = 0.8;
		repairableWithKits[] = { 3 };
		repairCosts[] = { 25 };
		soundAttType = "Boots";
		hiddenSelections[] = { "TLS" };
		class ClothingTypes
		{
			male = "\NanoOblek\oblek\Boots\TLS_Nano2_Boots_m.p3d";
			female = "\NanoOblek\oblek\Boots\TLS_Nano2_Boots_f.p3d";
		};
		class Protection
		{
			biological = 1;
			chemical = 1;
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 500; //Default is 1840
					healthLevels[] = { {1,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0,{"DZ\characters\shoes\Data\hikingBoots_destruct.rvmat"}} };
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11; //Default is 0.03
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.11; //Default is 0.03
					};
				};
			};
		};
	};
};