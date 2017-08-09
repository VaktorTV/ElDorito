#pragma once
#include "../../Math/Angle.hpp"
#include "../../Math/Bounds.hpp"
#include "../../Math/RealColorRGB.hpp"
#include "../../Math/RealVector3D.hpp"
#include "../Tags.hpp"
#include "../../Text/StringID.hpp"
#include "Object.hpp"

namespace Blam::Tags::Objects
{
	using Blam::Math::Angle;
	using Blam::Math::Bounds;
	using Blam::Math::RealVector3D;
	using Blam::Tags::Tag;
	using Blam::Tags::TagBlock;
	using Blam::Tags::TagGroup;
	using Blam::Tags::TagReference;
	using Blam::Text::StringID;

	struct Unit : Object, TagGroup<'unit'>
	{
		struct MetagameProperty;
		struct CameraTrackBlock;
		struct UnknownBlock;
		struct UnknownBlock2;
		struct Posture;
		struct HudInterface;
		struct DialogueVariant;
		struct PoweredSeat;
		struct Weapon;
		struct TargetTrackingBlock;
		struct Seat;

		enum DefaultTeamValue : int16_t
		{
			Default,
			Player,
			Human,
			Covenant,
			Flood,
			Sentinel,
			Heretic,
			Prophet,
			Guilty,
			Unused9,
			Unused10,
			Unused11,
			Unused12,
			Unused13,
			Unused14,
			Unused15,
		};
		enum ConstantSoundVolumeValue : int16_t
		{
			Silent,
			Medium,
			Loud,
			Shout,
			Quiet,
		};
		enum MotionSensorBlipSizeValue : int16_t
		{
			Medium,
			Small,
			Large,
		};
		enum ItemScaleValue : int16_t
		{
			Small,
			Medium,
			Large,
			Huge,
		};
		enum GrenadeTypeValue : int16_t
		{
			HumanFragmentation,
			CovenantPlasma,
			BruteSpike,
			Firebomb,
		};

		uint32_t FlagsWarningHalo4Values;
		DefaultTeamValue DefaultTeam; // int16_t
		ConstantSoundVolumeValue ConstantSoundVolume; // int16_t

		TagReference HologramUnit;

		TagBlock<MetagameProperty> MetagameProperties;
		TagReference IntegratedLightToggle;
		Angle CameraFieldOfView;
		float CameraStiffness;
		int16_t Flags2;
		int16_t Unknown6;
		StringID CameraMarkerName;
		StringID CameraSubmergedMarkerName;
		Angle PitchAutoLevel;
		Angle PitchRangeMin;
		Angle PitchRangeMax;
		TagBlock<CameraTrackBlock> CameraTracks;
		Angle Unknown7;
		Angle Unknown8;
		Angle Unknown9;
		TagBlock<UnknownBlock> Unknown10;

		int16_t Flags3;
		int16_t Unknown11;
		StringID CameraMarkerName2;
		StringID CameraSubmergedMarkerName2;
		Angle PitchAutoLevel2;
		Angle PitchRangeMin2;
		Angle PitchRangeMax2;
		TagBlock<CameraTrackBlock> CameraTracks2;
		Angle Unknown12;
		Angle Unknown13;
		Angle Unknown14;
		TagBlock<UnknownBlock2> Unknown15;
		TagReference AssassinationResponse;
		TagReference AssassinationWeapon;
		StringID AssasinationToolStowAnchor;
		StringID AssasinationToolHandMarker;
		StringID AssasinationToolMarker;

		RealVector3D AccelerationRange;
		float AccelerationActionScale;
		float AccelerationAttachScale;
		float SoftPingThreshold;
		float SoftPingInterruptTime;
		float HardPingThreshold;
		float HardPingInterruptTime;
		float FeignDeathThreshold;
		float FeignDeathTime;
		float DistanceOfEvadeAnimation;
		float DistanceOfDiveAnimation;
		float StunnedMovementThreshold;
		float FeignDeathChance;
		float FeignRepeatChance;
		TagReference SpawnedTurretCharacter;
		int16_t SpawnedActorCountMin;
		int16_t SpawnedActorCountMax;
		float SpawnedVelocity;
		Angle AimingVelocityMaximum;
		Angle AimingAccelerationMaximum;
		float CasualAimingModifier;
		Angle LookingVelocityMaximum;
		Angle LookingAccelerationMaximum;
		StringID RightHandNode;
		StringID LeftHandNode;
		StringID PreferredGunNode;
		TagReference MeleeDamage;
		TagReference BoardingMeleeDamage;
		TagReference BoardingMeleeResponse;
		TagReference EjectionMeleeDamage;
		TagReference EjectionMeleeResponse;
		TagReference LandingMeleeDamage;
		TagReference FlurryMeleeDamage;
		TagReference ObstacleSmashMeleeDamage;
		TagReference ShieldPopDamage;
		TagReference AssassinationDamage;
		MotionSensorBlipSizeValue MotionSensorBlipSize; // int16_t
		ItemScaleValue ItemScale; // int16_t
		TagBlock<Posture> Postures;
		TagBlock<HudInterface> HudInterfaces;
		TagBlock<DialogueVariant> DialogueVariants;
		uint32_t Unknown16;
		uint32_t Unknown17;
		uint32_t Unknown18;
		uint32_t Unknown19;
		float GrenadeVelocity;
		GrenadeTypeValue GrenadeType; // int16_t
		int16_t GrenadeCount;
		TagBlock<PoweredSeat> PoweredSeats;
		TagBlock<Weapon> Weapons;
		TagBlock<TargetTrackingBlock> TargetTracking;
		TagBlock<Seat> Seats;
		float EmpRadius;
		TagReference EmpEffect;
		TagReference BoostCollisionDamage;
		float BoostPeakPower;
		float BoostRisePower;
		float BoostPeakTime;
		float BoostFallPower;
		float BoostDeadTime;
		float LipsyncAttackWeight;
		float LipsyncDecayWeight;
		TagReference DetachDamage;
		TagReference DetachedWeapon;

		struct MetagameProperty
		{
			enum UnitValue : int8_t
			{
				Brute,
				Grunt,
				Jackal,
				Marine,
				Bugger,
				Hunter,
				FloodInfection,
				FloodCarrier,
				FloodCombat,
				FloodPureform,
				Sentinel,
				Elite,
				Turret,
				Mongoose,
				Warthog,
				Scorpion,
				Hornet,
				Pelican,
				Shade,
				Watchtower,
				Ghost,
				Chopper,
				Mauler,
				Wraith,
				Banshee,
				Phantom,
				Scarab,
				Guntower,
				Engineer,
				EngineerRechargeStation,
			};
			enum ClassificationValue : int8_t
			{
				Infantry,
				Leader,
				Hero,
				Specialist,
				LightVehicle,
				HeavyVehicle,
				GiantVehicle,
				StandardVehicle,
			};

			int8_t Flags;
			UnitValue Unit;
			ClassificationValue Classification;
			int8_t Unknown;
			int16_t Points;
			int16_t Unknown2;
		};
		TAG_STRUCT_SIZE_ASSERT(MetagameProperty, 8);

		struct CameraTrackBlock
		{
			TagReference CameraTrack;
		};
		TAG_STRUCT_SIZE_ASSERT(CameraTrackBlock, 0x10);

		struct UnknownBlock
		{
			uint32_t Unknown;
			uint32_t Unknown2;
			uint32_t Unknown3;
			uint32_t Unknown4;
			uint32_t Unknown5;
			uint32_t Unknown6;
			uint32_t Unknown7;
			uint32_t Unknown8;
			uint32_t Unknown9;
			uint32_t Unknown10;
			uint32_t Unknown11;
			uint32_t Unknown12;
			uint32_t Unknown13;
			uint32_t Unknown14;
			uint32_t Unknown15;
			uint32_t Unknown16;
			uint32_t Unknown17;
			uint32_t Unknown18;
			uint32_t Unknown19;
		};
		TAG_STRUCT_SIZE_ASSERT(UnknownBlock, 0x4C);

		struct UnknownBlock2
		{
			uint32_t Unknown;
			uint32_t Unknown2;
			uint32_t Unknown3;
			uint32_t Unknown4;
			uint32_t Unknown5;
			uint32_t Unknown6;
			uint32_t Unknown7;
			uint32_t Unknown8;
			uint32_t Unknown9;
			uint32_t Unknown10;
			uint32_t Unknown11;
			uint32_t Unknown12;
			uint32_t Unknown13;
			uint32_t Unknown14;
			uint32_t Unknown15;
			uint32_t Unknown16;
			uint32_t Unknown17;
			uint32_t Unknown18;
			uint32_t Unknown19;
		};
		TAG_STRUCT_SIZE_ASSERT(UnknownBlock2, 0x4C);

		struct Posture
		{
			StringID Name;
			RealVector3D PillOffset;
		};
		TAG_STRUCT_SIZE_ASSERT(Posture, 0x10);

		struct HudInterface
		{
			TagReference UnitHudInterface;
		};
		TAG_STRUCT_SIZE_ASSERT(HudInterface, 0x10);

		struct DialogueVariant
		{
			int16_t VariantNumber;
			int16_t Unknown;
			TagReference Dialogue;
		};
		TAG_STRUCT_SIZE_ASSERT(DialogueVariant, 0x14);

		struct PoweredSeat
		{
			float DriverPowerupTime;
			float DriverPowerdownTime;
		};
		TAG_STRUCT_SIZE_ASSERT(PoweredSeat, 0x8);

		struct Weapon
		{
			TagReference Weapon2;
		};
		TAG_STRUCT_SIZE_ASSERT(Weapon, 0x10);

		struct TargetTrackingBlock
		{
			struct TrackingType;

			TagBlock<TrackingType> TrackingTypes;
			float AcquireTime;
			float GraceTime;
			float DecayTime;
			TagReference TrackingSound;
			TagReference LockedSound;

			struct TrackingType
			{
				StringID TrackingType2;
			};
			TAG_STRUCT_SIZE_ASSERT(TrackingType, 0x4);
		};
		TAG_STRUCT_SIZE_ASSERT(TargetTrackingBlock, 0x38);

		struct Seat
		{
			enum AiSeatTypeValue : int16_t
			{
				None,
				Passenger,
				Gunner,
				SmallCargo,
				LargeCargo,
				Driver,
			};
			enum CameraFlagsValue : uint16_t
			{
				None = 0,
				PitchBoundsAbsoluteSpace = 1 << 0,
				OnlyCollidesWithEnvironment = 1 << 1,
				HidesPlayerUnitFromCamera = 1 << 2,
				UseAimingVectorInsteadOfMarkerForward = 1 << 3
			};

			struct CameraAccelerationBlock;
			struct UnitHudInterfaceBlock;

			uint32_t Flags;
			StringID SeatAnimation;
			StringID SeatMarkerName;
			StringID EntryMarkerSName;
			StringID BoardingGrenadeMarker;
			StringID BoardingGrenadeString;
			StringID BoardingMeleeString;
			StringID DetachWeaponString;
			float PingScale;
			float TurnoverTime;
			RealVector3D AccelerationRange;
			float AccelerationActionScale;
			float AccelerationAttachScale;
			float AiScariness;
			AiSeatTypeValue AiSeatType;
			int16_t BoardingSeat;
			float ListenerInterpolationFactor;

			Bounds<float> YawRateBounds;

			Bounds<float> PitchRateBounds;
			float PitchInterpolationTime;

			float MinSpeedReference;
			float MaxSpeedReference;
			float SpeedExponent;

			CameraFlagsValue CameraFlags;

			PAD16;

			StringID CameraMarkerName;
			StringID CameraSubmergedMarkerName;
			Angle PitchAutoLevel;
			Bounds<Angle> PitchRange;
			TagBlock<CameraTrackBlock> CameraTracks;
			Bounds<Angle> PitchSpringBounds;
			Angle SpringVelocity;
			TagBlock<CameraAccelerationBlock> Unknown7;
			TagBlock<UnitHudInterfaceBlock> UnitHudInterface;
			StringID EnterSeatString;
			Bounds<Angle> YawRange;
			TagReference BuiltInGunner;
			float EntryRadius;
			Angle EntryMarkerConeAngle;
			Angle EntryMarkerFacingAngle;
			float MaximumRelativeVelocity;
			StringID InvisibleSeatRegion;
			int RuntimeInvisibleSeatRegionIndex;

			struct CameraAccelerationBlock
			{
				uint32_t Unknown;
				uint32_t Unknown2;
				uint32_t Unknown3;
				uint32_t Unknown4;
				uint32_t Unknown5;
				uint32_t Unknown6;
				uint32_t Unknown7;
				uint32_t Unknown8;
				uint32_t Unknown9;
				uint32_t Unknown10;
				uint32_t Unknown11;
				uint32_t Unknown12;
				uint32_t Unknown13;
				uint32_t Unknown14;
				uint32_t Unknown15;
				uint32_t Unknown16;
				uint32_t Unknown17;
				uint32_t Unknown18;
				uint32_t Unknown19;
			};
			TAG_STRUCT_SIZE_ASSERT(CameraAccelerationBlock, 0x4C);

			struct UnitHudInterfaceBlock
			{
				TagReference UnitHudInterface;
			};
			TAG_STRUCT_SIZE_ASSERT(UnitHudInterfaceBlock, 0x10);
		};
		TAG_STRUCT_SIZE_ASSERT(Seat, 0xE4);
	};
	TAG_STRUCT_SIZE_ASSERT(Unit, 0x2C8);
}