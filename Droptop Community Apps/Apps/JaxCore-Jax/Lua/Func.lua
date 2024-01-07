function Initialize()
    -- local webVersion = SKIN:GetMeasure('mVer'):GetValue()
    local installedVer = SKIN:GetVariable('Core.Ver')
    if installedVer == nil or installedVer == '' then
        SKIN:Bang('[!SetVariable Installed 0][!UpdateMeter *][!ShowMeterGroup NIButton1][!Redraw]')
    end
end

-- -------------------------------------------------------------------------- --
--                                    Misc                                    --
-- -------------------------------------------------------------------------- --


function returnBool(Var, Match, ReturnStringT, ReturnStringF)

	-- Var = SKIN:GetVariable(Variable)

	ReturnStringT = ReturnStringT or '1'
	ReturnStringF = ReturnStringF or '0'
	if Var == Match then
		return(ReturnStringT)
	  else
		return(ReturnStringF)
	end
end

function trim(Text, Match, Replace)
	return Text:gsub(Match, Replace)
end

function corepage(skinnpage, skinname, closeAfter)
	SKIN:Bang('[!WriteKeyvalue Variables Skin.Name '..skinname..' "#SKINSPATH##JaxCore\\@Resources\\SecVar.inc"]')
	if skinname == '#JaxCore' then
		SKIN:Bang('[!WriteKeyvalue Variables Skin.Set_Page General "#SKINSPATH##JaxCore\\@Resources\\SecVar.inc"]')
	else
        skinnpage = skinnpage or 'Info'
		SKIN:Bang('[!WriteKeyvalue Variables Skin.Set_Page '..skinnpage..' "#SKINSPATH##JaxCore\\@Resources\\SecVar.inc"]')
	end
	local isActiveMeasure = SKIN:GetMeasure('ActiveChecker')
	local isActive
	if isActiveMeasure ~= nil then 
		isActive = isActiveMeasure:GetValue()
	end
	if isActive ~= nil and isActive == 1 then
		SKIN:Bang('[!DeactivateConfig "#jaxCore\\Main"]')
	end
	SKIN:Bang('[!activateConfig "#jaxCore\\Main" "Settings.ini"]')
	if closeAfter == 1 then
		SKIN:Bang('[!DeactivateConfig]')
	end
end

function interactionBox(variant, arg1, arg2, arg3, arg4)
	local File = SKIN:GetVariable('SKINSPATH')..'#JaxCore\\Accessories\\GenericInteractionBox\\Main.ini'
	if variant:match('\\') then
		SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.Variant', variant, File)
	else
		SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.Variant', 'Variants\\'..variant..'.inc', File)
	end
	if arg1 then SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.arg1', arg1, File) end
	if arg2 then SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.arg2', arg2, File) end
	if arg3 then SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.arg3', arg3, File) end
	if arg4 then SKIN:Bang('!WriteKeyvalue', 'Variables', 'Sec.arg4', arg4, File) end
	SKIN:Bang('!Activateconfig', '#JaxCore\\Accessories\\GenericInteractionBox')
end