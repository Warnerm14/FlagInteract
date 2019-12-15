class CfgPatches {
	class warner_FlagInteract {
		name = "Flag Interaction";
		author = "Matthew Warner (Warnerm14)";
		url = "https://twitter.com/Warnerm14";
				
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

class CfgFunctions
{
    class warner
    {
        class functions
        {
            file = "\FlagInteract\scripts";
            class init {postInit = 1;};
        };
    };
};