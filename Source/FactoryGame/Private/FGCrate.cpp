// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCrate.h"

AFGCrate::AFGCrate() : Super() {
	this->bReplicates = true;
}
void AFGCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGCrate::PostActorCreated(){ Super::PostActorCreated(); }
void AFGCrate::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGCrate::NeedTransform_Implementation(){ return bool(); }
bool AFGCrate::ShouldSave_Implementation() const{ return bool(); }
bool AFGCrate::FilterInventoryClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGCrate::SetupInventoryFilter(){ }
void AFGCrate::SetIconType(EFGCrateIconType type){ }
