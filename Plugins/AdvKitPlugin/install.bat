@echo off
IF NOT EXIST "../../../../Engine/Plugins/Marketplace/AdvKitPlugin/" (
  echo Please make sure the Plugin is installed correctly under 
  echo /UnrealEngine/4.20/Engine/Plugins/Marketplace/AdvKitPlugin
  set /p DUMMY=Hit ENTER to continue...
  EXIT
)
IF EXIST "../../../../FeaturePacks/FP_AdvKitCore.upack" @RD /S /Q "../../../../FeaturePacks/FP_AdvKitCore.upack"
robocopy "AdditionalContent/FeaturePacks/" "../../../../FeaturePacks/" FP_AdvKitCore.upack /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_ActionAdventure/" @RD /S /Q "../../../../Templates/ADV_ActionAdventure/"
robocopy "AdditionalContent/Templates/ADV_ActionAdventure/" "../../../../Templates/ADV_ActionAdventure/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_Minimal/" @RD /S /Q "../../../../Templates/ADV_Minimal/"
robocopy "AdditionalContent/Templates/ADV_Minimal/" "../../../../Templates/ADV_Minimal/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_Parkour/" @RD /S /Q "../../../../Templates/ADV_Parkour/"
robocopy "AdditionalContent/Templates/ADV_Parkour/" "../../../../Templates/ADV_Parkour/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_PointAndClick/" @RD /S /Q "../../../../Templates/ADV_PointAndClick/"
robocopy "AdditionalContent/Templates/ADV_PointAndClick/" "../../../../Templates/ADV_PointAndClick/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_SecretAgent/" @RD /S /Q "../../../../Templates/ADV_SecretAgent/"
robocopy "AdditionalContent/Templates/ADV_SecretAgent/" "../../../../Templates/ADV_SecretAgent/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_ScaryGame/" @RD /S /Q "../../../../Templates/ADV_ScaryGame/"
robocopy "AdditionalContent/Templates/ADV_ScaryGame/" "../../../../Templates/ADV_ScaryGame/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_Shooter/" @RD /S /Q "../../../../Templates/ADV_Shooter/"
robocopy "AdditionalContent/Templates/ADV_Shooter/" "../../../../Templates/ADV_Shooter/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/ADV_SideScroller/" @RD /S /Q "../../../../Templates/ADV_SideScroller/"
robocopy "AdditionalContent/Templates/ADV_SideScroller/" "../../../../Templates/ADV_SideScroller/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/TemplateResources/Standard/AdventureKit/" @RD /S /Q "../../../../Templates/TemplateResources/Standard/AdventureKit/"
robocopy "AdditionalContent/Templates/TemplateResources/Standard/AdventureKit/" "../../../../Templates/TemplateResources/Standard/AdventureKit/"  /E /NP /NJH /NJS
IF EXIST "../../../../Templates/TemplateResources/Standard/AnimStarterPack/" @RD /S /Q "../../../../Templates/TemplateResources/Standard/AnimStarterPack/"
robocopy "AdditionalContent/Templates/TemplateResources/Standard/AnimStarterPack/" "../../../../Templates/TemplateResources/Standard/AnimStarterPack/"  /E /NP /NJH /NJS
echo.
echo.
echo.
echo Installation is done!. After restarting the editor you should have access to the new game templates.
set /p DUMMY=Hit ENTER to continue...
echo -e "


"