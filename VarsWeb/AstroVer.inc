[Variables]

NewVersion=0.3

UpdateAstroLinkDownload=https://raw.githubusercontent.com/Nalinopek/AstroUI-Res/main/Versions/AstroUI_#NewVersion#.rmskin

UpdateAvatable=0


;=============
;Changes

Change1= New Files to comming Updater

Change2= New drop menu. Here you have some new features. Here you can open, for example, the rainmeter manager.

;=============
;Function Web

[CHecker]
Measure=WebParser
URL=https://raw.githubusercontent.com/Nalinopek/AstroUI-Res/main/VarsWeb/AstroVer.inc
Debug=2
Debug2File=#ROOTCONFIGPATH#Addons\Updater\Vars\Check.inc
DynamicVariables=1
UpdateDivider= 1
