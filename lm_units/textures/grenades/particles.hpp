
class CfgCloudlets
{
	class Default;
	class RocketBackfireRPGNT;
	class RocketBacksmokeRPGNT;
	class RHS_RocketBackfireRPGNT : RocketBackfireRPGNT
	{

	};
	
	class RHS_CS_Gas : Default
	{
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;
		moveVelocity[] = { 0, 0, 0 };
		rotationVelocity = 0;
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_cs_gas.sqf";

		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 0;
		sizeVar = 0;
	};
	class ObjectDestructionFire1Small;
	class rhs_IncinerateFire : ObjectDestructionFire1Small
	{
		coreIntensity = 3.75;
		coreDistance = 2;
		damageTime = 0.1;
		constantDistance = 1;
		damageType = "Fire";

		size[] = { "1.2 * 0.15 + 1", "0.1 * 0.15 + 0.2" };
		animationSpeedCoef = 1;
		sizeCoef = 1;
		animationSpeed[] = { 1 };

	};
	/*
	another copy in rhsafrf!
	*/
	class RHSUSF_flashbang_10 : Default
	{
		interval = 0.265;
		circleRadius = 0;
		circleVelocity[] = { 0, 0, 0 };
		angle = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		lifeTime = 0.05;
		moveVelocity[] = { 0, 0, 0 };
		rotationVelocity = 0;
		animationSpeed[] = { 1000 };
		randomDirectionPeriod = 0.01;
		randomDirectionIntensity = 1;

		timerPeriod = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_10m.sqf";

		lifeTimeVar = 0;
		positionVar[] = { 0, 0, 0 };
		MoveVelocityVar[] = { 0, 0, 0 };
		rotationVelocityVar = 0;
		sizeVar = 0;
	};
	class RHSUSF_flashbang_15 : RHSUSF_flashbang_10
	{
		beforeDestroyScript = "rhsusf\addons\rhsusf_c_weapons\scripts\rhs_flashbang_15m.sqf";
	};
	
};

class CfgLights
{
	class RHSUSF_flashbang_light
	{
		color[] = { 11, 11, 9 };
		ambient[] = { 0.4, 0.45, 0.45 };
		brightness = 1;
		intensity = 1090;
		diffuse[] = { 0, 0, 0 };
		position[] = { 0, 0, 0 };
		class Attenuation
		{
			start = 0.05;
			constant = 0;
			linear = 0;
			quadratic = 40;
			hardLimitStart = 2;
			hardLimitEnd = 4;
		};
	};
};



class RHSUSF_flashbang_10
{
	class Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHSUSF_flashbang_10";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Smoke2 : Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHSUSF_flashbang_smoke";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class Light
	{
		position[] = { 0, 0, 0 };
		simulation = "light";
		type = "RHSUSF_flashbang_light";
		intensity = 1;
		interval = 1;
		lifeTime = 1;
	};
};
class RHSUSF_flashbang_15 : RHSUSF_flashbang_10
{
	class Smoke1 : Smoke1
	{
		type = "RHSUSF_flashbang_15";
	};
};

class RHS_CS_Grenade
{
	class Smoke1
	{
		position[] = { 0, 0, 0 };
		simulation = "particles";
		type = "RHS_CS_Gas";
		intensity = 0.5;
		interval = 1;
		lifeTime = 1;
	};
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2
	{
		simulation = "particles";
		type = "SmokeShellWhite2";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhiteUW
	{
		simulation = "particles";
		type = "SmokeShellWhiteUW";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class SmokeShellWhite2UW
	{
		simulation = "particles";
		type = "SmokeShellWhite2UW";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
};
class RHS_Incendenary_Grenade
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "SmokeShellWhite";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
	class Fire1
	{
		simulation = "particles";
		type = "rhs_IncinerateFire";
		position[] = { 0, 0, 0 };
		intensity = 1;
		interval = 1;
	};
};

