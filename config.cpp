class CfgPatches
{
	class CODI_CAM_ACE
	{
		authors[] = {"Coding"};
		version = 0.1;
		units[] = {"CODI_CAM_Item_Tablet","CODI_CAM_Item_Camera"};
		weapons[] = {"CODI_CAM_Tablet","CODI_CAM_Camera"};
		requiredVersion = 0.1;
		license = "CC-BY-NC-SA 4.0";
		licenseURL = "http://creativecommons.org/licenses/by-nc-sa/4.0/";
	};
};

class CfgVehicles
{
	class Item_Base_F;
	class CODI_CAM_Item_Tablet: Item_Base_F
	{
		author = "Coding";
		scope = 2;
		scopeCurator = 2;
		displayName = "Camera Tablet";
		vehicleClass = "Items";
	};
	class CODI_CAM_Item_Camera: Item_Base_F
	{
		author = "Coding";
		scope = 2;
		scopeCurator = 2;
		displayName = "Camera";
		vehicleClass = "Items";
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class CODI_CAM_ACE
				{
					displayName = "Open Camera Tablet";
					condition = "[_player] call CODI_CAM_fnc_canWatch";
					statement = "call CODI_CAM_fnc_openTeams";
					showDisabled = 0;
					priority = 0.1;
					//icon = "\z\ace\addons\interaction\UI\dot_ca.paa";
					icon = "\CODI_CAM\smartphone.paa";
					exceptions[] = {"isNotInside","isNotSitting"};
				};
			};
		};
	};
};

class CfgWeapons
{
	class ACE_ItemCore;
	class InventoryItem_Base_F;
	class CODI_CAM_Tablet: ACE_ItemCore
	{
		author = "Coding";
		scope = 2;
		displayName = "Camera Tablet";
		descriptionShort = "";
		picture = "\CODI_CAM\smartphone.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
	class CODI_CAM_Camera: ACE_ItemCore
	{
		author = "Coding";
		scope = 2;
		displayName = "Camera";
		descriptionShort = "";
		picture = "\CODI_CAM\smartphone.paa";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 1;
		};
	};
};