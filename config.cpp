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
	class Mich2001Helmet;
	class Gasmask;
	class TLS_Nano2_TOP : Clothing
	{
		scope = 2;
		visibilityModifier = 0.75;
		displayName = "Top of the Nanosuit";
		descriptionShort = "Oh god... that's a god of war body";
		inventorySlot[] = { "Vest" };
		itemInfo[] = { "Clothing","Vest" };
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
					hitpoints = 500;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	};
	class TLS_Nano2_Helm_Base : Mich2001Helmet
	{
		scope = 0;
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
					hitpoints = 500;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.11;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0;
					};
				};
			};
		};
	};
	class TLS_Nano2_Helm : TLS_Nano2_Helm_Base
	{
		scope = 2;
		displayName = "Nanosuit helmet";
		descriptionShort = "You look really sexy";
	};
};