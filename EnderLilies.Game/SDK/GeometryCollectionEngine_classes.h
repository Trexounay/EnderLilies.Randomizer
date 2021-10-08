#pragma once

// Name: enderlilies, Version: 1.1.3


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class GeometryCollectionEngine.ChaosDestructionListener
// 0x0228 (FullSize[0x0420] - InheritedSize[0x01F8])
class UChaosDestructionListener : public USceneComponent
{
public:
	unsigned char                                      UnknownData_0IEI[0x4];                                     // 0x01F8(0x0004) Fix Super Size
	struct FChaosCollisionEventRequestSettings         CollisionEventRequestSettings;                             // 0x01FC(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosBreakingEventRequestSettings          BreakingEventRequestSettings;                              // 0x0214(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	struct FChaosTrailingEventRequestSettings          TrailingEventRequestSettings;                              // 0x022C(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VEP4[0x4];                                     // 0x0244(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	unsigned char                                      ChaosSolverActors[0x50];                                   // 0x0244(0x0050) UNKNOWN PROPERTY: SetProperty
	unsigned char                                      GeometryCollectionActors[0x50];                            // 0x0298(0x0050) UNKNOWN PROPERTY: SetProperty
	struct FScriptMulticastDelegate                    OnCollisionEvents;                                         // 0x02E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnBreakingEvents;                                          // 0x02F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnTrailingEvents;                                          // 0x0308(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JDOX[0x108];                                   // 0x0318(0x0108) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.ChaosDestructionListener");
		return ptr;
	}



	void SortTrailingEvents(TArray<struct FChaosTrailingEventData>* TrailingEvents, GeometryCollectionEngine_EChaosTrailingSortMethod SortMethod);
	void SortCollisionEvents(TArray<struct FChaosCollisionEventData>* CollisionEvents, GeometryCollectionEngine_EChaosCollisionSortMethod SortMethod);
	void SortBreakingEvents(TArray<struct FChaosBreakingEventData>* BreakingEvents, GeometryCollectionEngine_EChaosBreakingSortMethod SortMethod);
	void SetTrailingEventRequestSettings(const struct FChaosTrailingEventRequestSettings& InSettings);
	void SetTrailingEventEnabled(bool bIsEnabled);
	void SetCollisionEventRequestSettings(const struct FChaosCollisionEventRequestSettings& InSettings);
	void SetCollisionEventEnabled(bool bIsEnabled);
	void SetBreakingEventRequestSettings(const struct FChaosBreakingEventRequestSettings& InSettings);
	void SetBreakingEventEnabled(bool bIsEnabled);
	void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
	bool IsEventListening();
	void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);
	void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
class AGeometryCollectionActor : public AActor
{
public:
	class UGeometryCollectionComponent*                GeometryCollectionComponent;                               // 0x0220(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCollectionDebugDrawComponent*       GeometryCollectionDebugDrawComponent;                      // 0x0228(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionActor");
		return ptr;
	}



	bool RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit);
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
class UGeometryCollectionCache : public UObject
{
public:
	struct FRecordedTransformTrack                     RecordedData;                                              // 0x0028(0x0010) (NativeAccessSpecifierPrivate)
	class UGeometryCollection*                         SupportedCollection;                                       // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       CompatibleCollectionState;                                 // 0x0040(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionCache");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// 0x0488 (FullSize[0x08F0] - InheritedSize[0x0468])
class UGeometryCollectionComponent : public UMeshComponent
{
public:
	unsigned char                                      UnknownData_7Y4A[0x8];                                     // 0x0468(0x0008) Fix Super Size
	class AChaosSolverActor*                           ChaosSolverActor;                                          // 0x0470(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_0YDI[0xE0];                                    // 0x0478(0x00E0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UGeometryCollection*                         RestCollection;                                            // 0x0558(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AFieldSystemActor*>                   InitializationFields;                                      // 0x0560(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, NativeAccessSpecifierPublic)
	bool                                               Simulating;                                                // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X69B[0x7];                                     // 0x0571(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	Chaos_EObjectStateTypeEnum                         ObjectType;                                                // 0x0578(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               EnableClustering;                                          // 0x0579(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KL0X[0x2];                                     // 0x057A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                ClusterGroupIndex;                                         // 0x057C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxClusterLevel;                                           // 0x0580(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_KXLZ[0x4];                                     // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<float>                                      DamageThreshold;                                           // 0x0588(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	ChaosSolverEngine_EClusterConnectionTypeEnum       ClusterConnectionType;                                     // 0x0598(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_HNT9[0x3];                                     // 0x0599(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                CollisionGroup;                                            // 0x059C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionSampleFraction;                                   // 0x05A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LinearEtherDrag;                                           // 0x05A4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AngularEtherDrag;                                          // 0x05A8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VZX3[0x4];                                     // 0x05AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                          // 0x05B0(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EInitialVelocityTypeEnum                     InitialVelocityType;                                       // 0x05B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ASQC[0x3];                                     // 0x05B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InitialLinearVelocity;                                     // 0x05BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                    // 0x05C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_X5Q2[0x4];                                     // 0x05D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UPhysicalMaterial*                           PhysicalMaterialOverride;                                  // 0x05D8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGeomComponentCacheParameters               CacheParameters;                                           // 0x05E0(0x0050) (NoDestructor, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsStateChange;                // 0x0630(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    NotifyGeometryCollectionPhysicsLoadingStateChange;         // 0x0640(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_50UA[0x18];                                    // 0x0650(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnChaosBreakEvent;                                         // 0x0668(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	float                                              DesiredCacheTime;                                          // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               CachePlayback;                                             // 0x067C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_EILG[0x3];                                     // 0x067D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                   // 0x0680(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	bool                                               bNotifyBreaks;                                             // 0x0690(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bNotifyCollisions;                                         // 0x0691(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableReplication;                                        // 0x0692(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                               bEnableAbandonAfterLevel;                                  // 0x0693(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int                                                ReplicationAbandonClusterLevel;                            // 0x0694(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGeometryCollectionRepData                  RepData;                                                   // 0x0698(0x0018) (Net, RepNotify, Protected, NativeAccessSpecifierProtected)
	unsigned char                                      UnknownData_NO71[0x218];                                   // 0x06B0(0x0218) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBodySetup*                                  DummyBodySetup;                                            // 0x08C8(0x0008) (ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_RWUN[0x20];                                    // 0x08D0(0x0020) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionComponent");
		return ptr;
	}



	void SetNotifyBreaks(bool bNewNotifyBreaks);
	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void OnRep_RepData(const struct FGeometryCollectionRepData& OldData);
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent);
	void NetAbandonCluster(int TransformIndex);
	void ApplyPhysicsField(bool Enabled, Chaos_EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field);
	void ApplyKinematicField(float Radius, const struct FVector& Position);
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// 0x00E8 (FullSize[0x0308] - InheritedSize[0x0220])
class AGeometryCollectionDebugDrawActor : public AActor
{
public:
	struct FGeometryCollectionDebugDrawWarningMessage  WarningMessage;                                            // 0x0220(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_FHX1[0x7];                                     // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody;                                         // 0x0228(0x0018) (Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                               bDebugDrawWholeCollection;                                 // 0x0240(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugDrawHierarchy;                                       // 0x0241(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bDebugDrawClustering;                                      // 0x0242(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry HideGeometry;                                              // 0x0243(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyId;                                          // 0x0244(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyCollision;                                   // 0x0245(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bCollisionAtOrigin;                                        // 0x0246(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyTransform;                                   // 0x0247(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyInertia;                                     // 0x0248(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyVelocity;                                    // 0x0249(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyForce;                                       // 0x024A(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowRigidBodyInfos;                                       // 0x024B(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowTransformIndex;                                       // 0x024C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowTransform;                                            // 0x024D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowParent;                                               // 0x024E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowLevel;                                                // 0x024F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowConnectivityEdges;                                    // 0x0250(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGeometryIndex;                                        // 0x0251(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowGeometryTransform;                                    // 0x0252(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowBoundingBox;                                          // 0x0253(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFaces;                                                // 0x0254(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFaceIndices;                                          // 0x0255(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowFaceNormals;                                          // 0x0256(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowSingleFace;                                           // 0x0257(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                SingleFaceIndex;                                           // 0x0258(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowVertices;                                             // 0x025C(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowVertexIndices;                                        // 0x025D(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bShowVertexNormals;                                        // 0x025E(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bUseActiveVisualization;                                   // 0x025F(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              PointThickness;                                            // 0x0260(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              LineThickness;                                             // 0x0264(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bTextShadow;                                               // 0x0268(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_G4X8[0x3];                                     // 0x0269(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              TextScale;                                                 // 0x026C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              NormalScale;                                               // 0x0270(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              AxisScale;                                                 // 0x0274(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ArrowScale;                                                // 0x0278(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyIdColor;                                          // 0x027C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              RigidBodyTransformScale;                                   // 0x0280(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyCollisionColor;                                   // 0x0284(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyInertiaColor;                                     // 0x0288(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyVelocityColor;                                    // 0x028C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyForceColor;                                       // 0x0290(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      RigidBodyInfoColor;                                        // 0x0294(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      TransformIndexColor;                                       // 0x0298(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              TransformScale;                                            // 0x029C(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      LevelColor;                                                // 0x02A0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      ParentColor;                                               // 0x02A4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              ConnectivityEdgeThickness;                                 // 0x02A8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      GeometryIndexColor;                                        // 0x02AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              GeometryTransformScale;                                    // 0x02B0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      BoundingBoxColor;                                          // 0x02B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      FaceColor;                                                 // 0x02B8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      FaceIndexColor;                                            // 0x02BC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      FaceNormalColor;                                           // 0x02C0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      SingleFaceColor;                                           // 0x02C4(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VertexColor;                                               // 0x02C8(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VertexIndexColor;                                          // 0x02CC(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                      VertexNormalColor;                                         // 0x02D0(0x0004) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_6UDU[0x4];                                     // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UBillboardComponent*                         SpriteComponent;                                           // 0x02D8(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_LPPZ[0x28];                                    // 0x02E0(0x0028) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{
public:
	class AGeometryCollectionDebugDrawActor*           GeometryCollectionDebugDrawActor;                          // 0x00B0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AGeometryCollectionRenderLevelSetActor*      GeometryCollectionRenderLevelSetActor;                     // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DIJH[0x8];                                     // 0x00C0(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollection
// 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
class UGeometryCollection : public UObject
{
public:
	unsigned char                                      UnknownData_3DBS[0x8];                                     // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGeometryCollectionSource>           GeometrySource;                                            // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>                  Materials;                                                 // 0x0040(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	Chaos_ECollisionTypeEnum                           CollisionType;                                             // 0x0050(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EImplicitTypeEnum                            ImplicitType;                                              // 0x0051(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_A5Q3[0x2];                                     // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLevelSetResolution;                                     // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                     // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinClusterLevelSetResolution;                              // 0x005C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxClusterLevelSetResolution;                              // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionObjectReductionPercentage;                        // 0x0064(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bMassAsDensity;                                            // 0x0068(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_JMW2[0x3];                                     // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mass;                                                      // 0x006C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinimumMassClamp;                                          // 0x0070(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              CollisionParticlesFraction;                                // 0x0074(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaximumCollisionParticles;                                 // 0x0078(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_ETMR[0x4];                                     // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData;                                          // 0x0080(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                               EnableRemovePiecesOnFracture;                              // 0x0090(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CX1T[0x7];                                     // 0x0091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UMaterialInterface*>                  RemoveOnFractureMaterials;                                 // 0x0098(0x0010) (Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FGuid                                       PersistentGuid;                                            // 0x00A8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                       StateGuid;                                                 // 0x00B8(0x0010) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int                                                BoneSelectedMaterialIndex;                                 // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_H92Y[0x14];                                    // 0x00CC(0x0014) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollection");
		return ptr;
	}



};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// 0x00A0 (FullSize[0x02C0] - InheritedSize[0x0220])
class AGeometryCollectionRenderLevelSetActor : public AActor
{
public:
	class UVolumeTexture*                              TargetVolumeTexture;                                       // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterial*                                   RayMarchMaterial;                                          // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              SurfaceTolerance;                                          // 0x0230(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              Isovalue;                                                  // 0x0234(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               Enabled;                                                   // 0x0238(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               RenderVolumeBoundingBox;                                   // 0x0239(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_WNWI[0x86];                                    // 0x023A(0x0086) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor");
		return ptr;
	}



};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
class USkeletalMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_SCNY[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                          // 0x00B8(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                           ChaosSolverActor;                                          // 0x00C0(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPhysicsAsset*                               OverridePhysicsAsset;                                      // 0x00C8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bSimulating;                                               // 0x00D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyCollisions;                                         // 0x00D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EObjectStateTypeEnum                         ObjectType;                                                // 0x00D2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_SJ05[0x1];                                     // 0x00D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Density;                                                   // 0x00D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MinMass;                                                   // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              MaxMass;                                                   // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_ECollisionTypeEnum                           CollisionType;                                             // 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_VUJS[0x3];                                     // 0x00E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              ImplicitShapeParticlesPerUnitArea;                         // 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ImplicitShapeMinNumParticles;                              // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                ImplicitShapeMaxNumParticles;                              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MinLevelSetResolution;                                     // 0x00F0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                     // 0x00F4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                CollisionGroup;                                            // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EInitialVelocityTypeEnum                     InitialVelocityType;                                       // 0x00FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_RABY[0x3];                                     // 0x00FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InitialLinearVelocity;                                     // 0x0100(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                    // 0x010C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                   // 0x0118(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_UHYS[0x10];                                    // 0x0128(0x0010) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.SkeletalMeshSimulationComponent");
		return ptr;
	}



	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// 0x0088 (FullSize[0x0138] - InheritedSize[0x00B0])
class UStaticMeshSimulationComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData_9BMC[0x8];                                     // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	bool                                               Simulating;                                                // 0x00B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                               bNotifyCollisions;                                         // 0x00B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EObjectStateTypeEnum                         ObjectType;                                                // 0x00BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_4CH4[0x1];                                     // 0x00BB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	float                                              Mass;                                                      // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_ECollisionTypeEnum                           CollisionType;                                             // 0x00C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EImplicitTypeEnum                            ImplicitType;                                              // 0x00C1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_87AT[0x2];                                     // 0x00C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	int                                                MinLevelSetResolution;                                     // 0x00C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int                                                MaxLevelSetResolution;                                     // 0x00C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	Chaos_EInitialVelocityTypeEnum                     InitialVelocityType;                                       // 0x00CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_7EOI[0x3];                                     // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	struct FVector                                     InitialLinearVelocity;                                     // 0x00D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                                     InitialAngularVelocity;                                    // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                              DamageThreshold;                                           // 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_CXML[0x4];                                     // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	class UChaosPhysicalMaterial*                      PhysicalMaterial;                                          // 0x00F0(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AChaosSolverActor*                           ChaosSolverActor;                                          // 0x00F8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FScriptMulticastDelegate                    OnChaosPhysicsCollision;                                   // 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	unsigned char                                      UnknownData_DDTZ[0x10];                                    // 0x0110(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
	TArray<class UPrimitiveComponent*>                 SimulatedComponents;                                       // 0x0120(0x0010) (ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData_KJHD[0x8];                                     // 0x0130(0x0008) MISSED OFFSET (PADDING)


	static UClass* StaticClass()
	{
		static UClass* ptr = UObject::FindClass("Class GeometryCollectionEngine.StaticMeshSimulationComponent");
		return ptr;
	}



	void ReceivePhysicsCollision(const struct FChaosPhysicsCollisionInfo& CollisionInfo);
	void ForceRecreatePhysicsState();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
