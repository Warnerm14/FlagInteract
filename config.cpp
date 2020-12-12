class CfgPatches {
	class warner_FlagInteract {
		name = "Flag Interaction";
		author = "Matthew Warner (Warnerm14)";
		url = "https://twitter.com/Warnerm14";
				
		requiredVersion = 0.1;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgFunctions
{
    class warnerFlag
    {
        class functions
        {
            file = "\FlagInteract\scripts";
            class init {postInit = 1;};
        };
    };
};