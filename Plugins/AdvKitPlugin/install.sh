#!/bin/sh

 if [ ! -e ../../../../Engine/Plugins/Marketplace/AdvKitPlugin ]; then
  echo "Please make sure the Plugin is installed correctly under "
  echo "/UnrealEngine/4.20/Engine/Plugins/Marketplace/AdvKitPlugin"
  exit 1
fi


[ -e "../../../../FeaturePacks/FP_AdvKitCore.upack" ] && rm -r ../../../../FeaturePacks/FP_AdvKitCore.upack
mkdir -p ../../../../FeaturePacks/
[ -e "../../../../Templates/ADV_ActionAdventure/" ] && rm -r ../../../../Templates/ADV_ActionAdventure/
mkdir -p ../../../../Templates/ADV_ActionAdventure/
[ -e "../../../../Templates/ADV_Minimal/" ] && rm -r ../../../../Templates/ADV_Minimal/
mkdir -p ../../../../Templates/ADV_Minimal/
[ -e "../../../../Templates/ADV_Parkour/" ] && rm -r ../../../../Templates/ADV_Parkour/
mkdir -p ../../../../Templates/ADV_Parkour/
[ -e "../../../../Templates/ADV_PointAndClick/" ] && rm -r ../../../../Templates/ADV_PointAndClick/
mkdir -p ../../../../Templates/ADV_PointAndClick/
[ -e "../../../../Templates/ADV_SecretAgent/" ] && rm -r ../../../../Templates/ADV_SecretAgent/
mkdir -p ../../../../Templates/ADV_SecretAgent/
[ -e "../../../../Templates/ADV_ScaryGame/" ] && rm -r ../../../../Templates/ADV_ScaryGame/
mkdir -p ../../../../Templates/ADV_ScaryGame/
[ -e "../../../../Templates/ADV_Shooter/" ] && rm -r ../../../../Templates/ADV_Shooter/
mkdir -p ../../../../Templates/ADV_Shooter/
[ -e "../../../../Templates/ADV_SideScroller/" ] && rm -r ../../../../Templates/ADV_SideScroller/
mkdir -p ../../../../Templates/ADV_SideScroller/
[ -e "../../../../Templates/TemplateResources/Standard/AdventureKit/" ] && rm -r ../../../../Templates/TemplateResources/Standard/AdventureKit/
mkdir -p ../../../../Templates/TemplateResources/Standard/AdventureKit/
[ -e "../../../../Templates/TemplateResources/Standard/AnimStarterPack/" ] && rm -r ../../../../Templates/TemplateResources/Standard/AnimStarterPack/
mkdir -p ../../../../Templates/TemplateResources/Standard/AnimStarterPack/
cp -r AdditionalContent/Templates/* ../../../../Templates/
cp -r AdditionalContent/FeaturePacks/* ../../../../FeaturePacks/
echo "Installation is done!. After restarting the editor you should have access to the new game templates."
