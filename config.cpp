class CfgPatches
{
	class My_loading_screenshow
	{
		units[]={"Bonjour"};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Consumables",
			"DZ_Vehicles_Wheeled",
			"DZ_Structures_Residential",
			"DZ_Sounds_Effects",
			"DZ_Sounds_Weapons"
		};
	};
};
class CfgMods
{
	class My_loading_screenshow
	{
		dir="My_loading_screenshow";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="My_loading_screenshow";
		credits=" Drox & R0Lu "; // Original authors 
		author="R0Lu"; // Insert your pseudo here
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"Game"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"My_loading_screenshow/scripts/3_Game"
				};
			};
		};
	};
};
