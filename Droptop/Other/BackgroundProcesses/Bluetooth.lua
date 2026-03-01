function Initialize()
    _Populate(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12)

    SKIN:Bang("!SetVariable", "PageNumber", 0)
    for i = 1, 12 do
        SKIN:Bang("!SetVariable", "PageDevice" .. i, i)
    end
end

function RefreshStatus()
    local Status = tonumber(SKIN:ReplaceVariables('[&BluetoothDevicesMeasure:BluetoothStatus()]'))
    local OldStatus = tonumber(SKIN:GetVariable('BTStatus'))

    if (OldStatus ~= Status) then
        SKIN:Bang("!SetVariable", "BTStatus", Status)
        SKIN:Bang("!SetVariable", "BTStatus", Status, "Droptop\\Other\\Apps\\Wifi")
        SKIN:Bang("!SetVariable", "BTStatus", Status, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!SetVariable", "BTStatus", Status, "Droptop\\DropdownBar")
        SKIN:Bang("!Update", "Droptop\\Other\\Apps\\Wifi")
        SKIN:Bang("!Update", "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!UpdateMeterGroup", "FunctionButtons", "Droptop\\DropdownBar")
        SKIN:Bang("!Redraw", "Droptop\\Other\\Apps\\Wifi")
        SKIN:Bang("!Redraw", "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!Redraw", "Droptop\\DropdownBar")
        SKIN:Bang("!WriteKeyValue", "Variables", "BTStatus", string.format('%s', Status), "BluetoothVariables.inc")
    end
end

function Refresh()
    local DevicesString = SKIN:ReplaceVariables('[&BluetoothDevicesMeasure:AvailableDevices()]')
    local OldDevicesString = SKIN:GetVariable('Devices')
    local Status = tonumber(SKIN:GetVariable('BTStatus'))

    if ((OldDevicesString ~= DevicesString) and (DevicesString ~= "") and (Status ~= 0)) then
        SKIN:Bang("!SetVariable", "Devices", DevicesString)
        SKIN:Bang("!SetVariable", "Devices", DevicesString, "Droptop\\Other\\Apps\\Wifi\\Folder")
        SKIN:Bang("!WriteKeyValue", "Variables", "Devices", string.format('%s', DevicesString), "BluetoothVariables.inc")

        local Devices = _DivideDevices(DevicesString)

        SKIN:Bang("!SetVariable", "DevicesNumber", #Devices)
        SKIN:Bang("!SetVariable", "DevicesNumber", #Devices, "Droptop\\Other\\Apps\\Wifi\\Folder")
        SKIN:Bang("!WriteKeyValue", "Variables", "DevicesNumber", string.format('%s', #Devices), "BluetoothVariables.inc")

        _Populate(1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12)

        SKIN:Bang("!SetVariable", "PageNumber", 0)
        for i = 1, 12 do
            SKIN:Bang("!SetVariable", "PageDevice" .. i, i)
        end
    end
end

function PageDown()
    local PageNumber = tonumber(SKIN:GetVariable('PageNumber'))
    if (PageNumber > 0) then
        PageNumber = PageNumber - 12
        for i = 1, 12 do
            SKIN:Bang("!SetVariable", "PageDevice" .. i, PageNumber + i)
        end
        SKIN:Bang("!SetVariable", "PageNumber", PageNumber)
        _Populate(PageNumber + 1, PageNumber + 2, PageNumber + 3, PageNumber + 4, PageNumber + 5, PageNumber + 6,
            PageNumber + 7, PageNumber + 8, PageNumber + 9, PageNumber + 10, PageNumber + 11, PageNumber + 12)
    end
end

function PageUp()
    local PageNumber = tonumber(SKIN:GetVariable('PageNumber'))
    local DevicesNumber = SKIN:GetVariable('DevicesNumber')
    if (PageNumber < (tonumber(DevicesNumber) - 12)) then
        PageNumber = PageNumber + 12
        for i = 1, 12 do
            SKIN:Bang("!SetVariable", "PageDevice" .. i, PageNumber + i)
        end
        SKIN:Bang("!SetVariable", "PageNumber", PageNumber)
        _Populate(PageNumber + 1, PageNumber + 2, PageNumber + 3, PageNumber + 4, PageNumber + 5, PageNumber + 6,
            PageNumber + 7, PageNumber + 8, PageNumber + 9, PageNumber + 10, PageNumber + 11, PageNumber + 12)
    end
end

---- [Private functions] ----

function _Populate(PageDevice1, PageDevice2, PageDevice3, PageDevice4, PageDevice5, PageDevice6, PageDevice7, PageDevice8, PageDevice9, PageDevice10, PageDevice11, PageDevice12)
    local DevicesStr = SKIN:GetVariable('Devices')
    local DevicesNumber = SKIN:GetVariable('DevicesNumber')

    local Devices = _DivideDevices(DevicesStr)

    for i, PageDevice in ipairs({ PageDevice1, PageDevice2, PageDevice3, PageDevice4, PageDevice5, PageDevice6, PageDevice7, PageDevice8, PageDevice9, PageDevice10, PageDevice11, PageDevice12 }) do
        if PageDevice <= tonumber(DevicesNumber) then
            local Device = _DivideItems(Devices[PageDevice])
            local DeviceName = Device[1]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Name", DeviceName)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Name", DeviceName, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Name", string.format('%s', DeviceName),
                "BluetoothVariables.inc")
            local DeviceAddress = Device[2]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Address", DeviceAddress)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Address", DeviceAddress, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Address", string.format('%s', DeviceAddress),
                "BluetoothVariables.inc")
            local DeviceId = Device[3]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Id", DeviceId)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Id", DeviceId, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Id", string.format('%s', DeviceId),
                "BluetoothVariables.inc")
            local DeviceConnected = Device[4]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Connected", DeviceConnected)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Connected", DeviceConnected, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Connected", string.format('%s', DeviceConnected),
                "BluetoothVariables.inc")
            local DevicePaired = Device[5]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Paired", DevicePaired)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Paired", DevicePaired, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Paired", string.format('%s', DevicePaired),
                "BluetoothVariables.inc")
            local DeviceCanPair = Device[6]
            SKIN:Bang("!SetVariable", "Device" .. i .. "CanPair", DeviceCanPair)
            SKIN:Bang("!SetVariable", "Device" .. i .. "CanPair", DeviceCanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "CanPair", string.format('%s', DeviceCanPair),
                "BluetoothVariables.inc")
            local DeviceMajorCategory = Device[7]
            SKIN:Bang("!SetVariable", "Device" .. i .. "MajorCategory", DeviceMajorCategory)
            SKIN:Bang("!SetVariable", "Device" .. i .. "MajorCategory", DeviceMajorCategory,
                "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "MajorCategory",
                string.format('%s', DeviceMajorCategory), "BluetoothVariables.inc")
            local DeviceMinorCategory = Device[8]
            SKIN:Bang("!SetVariable", "Device" .. i .. "MinorCategory", DeviceMinorCategory)
            SKIN:Bang("!SetVariable", "Device" .. i .. "MinorCategory", DeviceMinorCategory,
                "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "MinorCategory",
                string.format('%s', DeviceMinorCategory), "BluetoothVariables.inc")
            local DeviceHasBatteryLevel = Device[9]
            SKIN:Bang("!SetVariable", "Device" .. i .. "HasBatteryLevel", DeviceHasBatteryLevel)
            SKIN:Bang("!SetVariable", "Device" .. i .. "HasBatteryLevel", DeviceHasBatteryLevel,
                "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "HasBatteryLevel",
                string.format('%s', DeviceHasBatteryLevel), "BluetoothVariables.inc")
            local DeviceBattery = Device[10]
            SKIN:Bang("!SetVariable", "Device" .. i .. "Battery", DeviceBattery)
            SKIN:Bang("!SetVariable", "Device" .. i .. "Battery", DeviceBattery, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "Battery", string.format('%s', DeviceBattery),
                "BluetoothVariables.inc")
            local DeviceIsBLE = Device[11]
            SKIN:Bang("!SetVariable", "Device" .. i .. "IsBLE", DeviceIsBLE)
            SKIN:Bang("!SetVariable", "Device" .. i .. "IsBLE", DeviceIsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "IsBLE", string.format('%s', DeviceIsBLE),
                "BluetoothVariables.inc")
            local DeviceIsBLE = Device[12]
            SKIN:Bang("!SetVariable", "Device" .. i .. "IsBLE", DeviceIsBLE)
            SKIN:Bang("!SetVariable", "Device" .. i .. "IsBLE", DeviceIsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
            SKIN:Bang("!WriteKeyValue", "Variables", "Device" .. i .. "IsBLE", string.format('%s', DeviceIsBLE),
                "BluetoothVariables.inc")
        end
    end

    do --old way (can be removed)
        -- local Device1 = _DivideItems(Devices[PageDevice1])
        -- local Device1Name = Device1[1]
        -- SKIN:Bang("!SetVariable", "Device1Name", Device1Name)
        -- SKIN:Bang("!SetVariable", "Device1Name", Device1Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Name", string.format('%s', Device1Name), "BluetoothVariables.inc")
        -- local Device1Address = Device1[2]
        -- SKIN:Bang("!SetVariable", "Device1Address", Device1Address)
        -- SKIN:Bang("!SetVariable", "Device1Address", Device1Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Address", string.format('%s', Device1Address), "BluetoothVariables.inc")
        -- local Device1Id = Device1[3]
        -- SKIN:Bang("!SetVariable", "Device1Id", Device1Id)
        -- SKIN:Bang("!SetVariable", "Device1Id", Device1Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Id", string.format('%s', Device1Id), "BluetoothVariables.inc")
        -- local Device1Connected = Device1[4]
        -- SKIN:Bang("!SetVariable", "Device1Connected", Device1Connected)
        -- SKIN:Bang("!SetVariable", "Device1Connected", Device1Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Connected", string.format('%s', Device1Connected), "BluetoothVariables.inc")
        -- local Device1Paired = Device1[5]
        -- SKIN:Bang("!SetVariable", "Device1Paired", Device1Paired)
        -- SKIN:Bang("!SetVariable", "Device1Paired", Device1Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Paired", string.format('%s', Device1Paired), "BluetoothVariables.inc")
        -- local Device1CanPair = Device1[6]
        -- SKIN:Bang("!SetVariable", "Device1CanPair", Device1CanPair)
        -- SKIN:Bang("!SetVariable", "Device1CanPair", Device1CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1CanPair", string.format('%s', Device1CanPair), "BluetoothVariables.inc")
        -- local Device1MajorCategory = Device1[7]
        -- SKIN:Bang("!SetVariable", "Device1MajorCategory", Device1MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device1MajorCategory", Device1MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1MajorCategory", string.format('%s', Device1MajorCategory), "BluetoothVariables.inc")
        -- local Device1MinorCategory = Device1[8]
        -- SKIN:Bang("!SetVariable", "Device1MinorCategory", Device1MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device1MinorCategory", Device1MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1MinorCategory", string.format('%s', Device1MinorCategory), "BluetoothVariables.inc")
        -- local Device1HasBatteryLevel = Device1[9]
        -- SKIN:Bang("!SetVariable", "Device1HasBatteryLevel", Device1HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device1HasBatteryLevel", Device1HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1HasBatteryLevel", string.format('%s', Device1HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device1Battery = Device1[10]
        -- SKIN:Bang("!SetVariable", "Device1Battery", Device1Battery)
        -- SKIN:Bang("!SetVariable", "Device1Battery", Device1Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1Battery", string.format('%s', Device1Battery), "BluetoothVariables.inc")
        -- local Device1IsBLE = Device1[11]
        -- SKIN:Bang("!SetVariable", "Device1IsBLE", Device1IsBLE)
        -- SKIN:Bang("!SetVariable", "Device1IsBLE", Device1IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device1IsBLE", string.format('%s', Device1IsBLE), "BluetoothVariables.inc")

        -- local Device2 = _DivideItems(Devices[PageDevice2])
        -- local Device2Name = Device2[1]
        -- SKIN:Bang("!SetVariable", "Device2Name", Device2Name)
        -- SKIN:Bang("!SetVariable", "Device2Name", Device2Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Name", string.format('%s', Device2Name), "BluetoothVariables.inc")
        -- local Device2Address = Device2[2]
        -- SKIN:Bang("!SetVariable", "Device2Address", Device2Address)
        -- SKIN:Bang("!SetVariable", "Device2Address", Device2Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Address", string.format('%s', Device2Address), "BluetoothVariables.inc")
        -- local Device2Id = Device2[3]
        -- SKIN:Bang("!SetVariable", "Device2Id", Device2Id)
        -- SKIN:Bang("!SetVariable", "Device2Id", Device2Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Id", string.format('%s', Device2Id), "BluetoothVariables.inc")
        -- local Device2Connected = Device2[4]
        -- SKIN:Bang("!SetVariable", "Device2Connected", Device2Connected)
        -- SKIN:Bang("!SetVariable", "Device2Connected", Device2Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Connected", string.format('%s', Device2Connected), "BluetoothVariables.inc")
        -- local Device2Paired = Device2[5]
        -- SKIN:Bang("!SetVariable", "Device2Paired", Device2Paired)
        -- SKIN:Bang("!SetVariable", "Device2Paired", Device2Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Paired", string.format('%s', Device2Paired), "BluetoothVariables.inc")
        -- local Device2CanPair = Device2[6]
        -- SKIN:Bang("!SetVariable", "Device2CanPair", Device2CanPair)
        -- SKIN:Bang("!SetVariable", "Device2CanPair", Device2CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2CanPair", string.format('%s', Device2CanPair), "BluetoothVariables.inc")
        -- local Device2MajorCategory = Device2[7]
        -- SKIN:Bang("!SetVariable", "Device2MajorCategory", Device2MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device2MajorCategory", Device2MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2MajorCategory", string.format('%s', Device2MajorCategory), "BluetoothVariables.inc")
        -- local Device2MinorCategory = Device2[8]
        -- SKIN:Bang("!SetVariable", "Device2MinorCategory", Device2MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device2MinorCategory", Device2MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2MinorCategory", string.format('%s', Device2MinorCategory), "BluetoothVariables.inc")
        -- local Device2HasBatteryLevel = Device2[9]
        -- SKIN:Bang("!SetVariable", "Device2HasBatteryLevel", Device2HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device2HasBatteryLevel", Device2HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2HasBatteryLevel", string.format('%s', Device2HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device2Battery = Device2[10]
        -- SKIN:Bang("!SetVariable", "Device2Battery", Device2Battery)
        -- SKIN:Bang("!SetVariable", "Device2Battery", Device2Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2Battery", string.format('%s', Device2Battery), "BluetoothVariables.inc")
        -- local Device2IsBLE = Device2[11]
        -- SKIN:Bang("!SetVariable", "Device2IsBLE", Device2IsBLE)
        -- SKIN:Bang("!SetVariable", "Device2IsBLE", Device2IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device2IsBLE", string.format('%s', Device2IsBLE), "BluetoothVariables.inc")

        -- local Device3 = _DivideItems(Devices[PageDevice3])
        -- local Device3Name = Device3[1]
        -- SKIN:Bang("!SetVariable", "Device3Name", Device3Name)
        -- SKIN:Bang("!SetVariable", "Device3Name", Device3Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Name", string.format('%s', Device3Name), "BluetoothVariables.inc")
        -- local Device3Address = Device3[2]
        -- SKIN:Bang("!SetVariable", "Device3Address", Device3Address)
        -- SKIN:Bang("!SetVariable", "Device3Address", Device3Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Address", string.format('%s', Device3Address), "BluetoothVariables.inc")
        -- local Device3Id = Device3[3]
        -- SKIN:Bang("!SetVariable", "Device3Id", Device3Id)
        -- SKIN:Bang("!SetVariable", "Device3Id", Device3Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Id", string.format('%s', Device3Id), "BluetoothVariables.inc")
        -- local Device3Connected = Device3[4]
        -- SKIN:Bang("!SetVariable", "Device3Connected", Device3Connected)
        -- SKIN:Bang("!SetVariable", "Device3Connected", Device3Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Connected", string.format('%s', Device3Connected), "BluetoothVariables.inc")
        -- local Device3Paired = Device3[5]
        -- SKIN:Bang("!SetVariable", "Device3Paired", Device3Paired)
        -- SKIN:Bang("!SetVariable", "Device3Paired", Device3Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Paired", string.format('%s', Device3Paired), "BluetoothVariables.inc")
        -- local Device3CanPair = Device3[6]
        -- SKIN:Bang("!SetVariable", "Device3CanPair", Device3CanPair)
        -- SKIN:Bang("!SetVariable", "Device3CanPair", Device3CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3CanPair", string.format('%s', Device3CanPair), "BluetoothVariables.inc")
        -- local Device3MajorCategory = Device3[7]
        -- SKIN:Bang("!SetVariable", "Device3MajorCategory", Device3MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device3MajorCategory", Device3MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3MajorCategory", string.format('%s', Device3MajorCategory), "BluetoothVariables.inc")
        -- local Device3MinorCategory = Device3[8]
        -- SKIN:Bang("!SetVariable", "Device3MinorCategory", Device3MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device3MinorCategory", Device3MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3MinorCategory", string.format('%s', Device3MinorCategory), "BluetoothVariables.inc")
        -- local Device3HasBatteryLevel = Device3[9]
        -- SKIN:Bang("!SetVariable", "Device3HasBatteryLevel", Device3HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device3HasBatteryLevel", Device3HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3HasBatteryLevel", string.format('%s', Device3HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device3Battery = Device3[10]
        -- SKIN:Bang("!SetVariable", "Device3Battery", Device3Battery)
        -- SKIN:Bang("!SetVariable", "Device3Battery", Device3Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3Battery", string.format('%s', Device3Battery), "BluetoothVariables.inc")
        -- local Device3IsBLE = Device3[11]
        -- SKIN:Bang("!SetVariable", "Device3IsBLE", Device3IsBLE)
        -- SKIN:Bang("!SetVariable", "Device3IsBLE", Device3IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device3IsBLE", string.format('%s', Device3IsBLE), "BluetoothVariables.inc")

        -- local Device4 = _DivideItems(Devices[PageDevice4])
        -- local Device4Name = Device4[1]
        -- SKIN:Bang("!SetVariable", "Device4Name", Device4Name)
        -- SKIN:Bang("!SetVariable", "Device4Name", Device4Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Name", string.format('%s', Device4Name), "BluetoothVariables.inc")
        -- local Device4Address = Device4[2]
        -- SKIN:Bang("!SetVariable", "Device4Address", Device4Address)
        -- SKIN:Bang("!SetVariable", "Device4Address", Device4Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Address", string.format('%s', Device4Address), "BluetoothVariables.inc")
        -- local Device4Id = Device4[3]
        -- SKIN:Bang("!SetVariable", "Device4Id", Device4Id)
        -- SKIN:Bang("!SetVariable", "Device4Id", Device4Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Id", string.format('%s', Device4Id), "BluetoothVariables.inc")
        -- local Device4Connected = Device4[4]
        -- SKIN:Bang("!SetVariable", "Device4Connected", Device4Connected)
        -- SKIN:Bang("!SetVariable", "Device4Connected", Device4Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Connected", string.format('%s', Device4Connected), "BluetoothVariables.inc")
        -- local Device4Paired = Device4[5]
        -- SKIN:Bang("!SetVariable", "Device4Paired", Device4Paired)
        -- SKIN:Bang("!SetVariable", "Device4Paired", Device4Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Paired", string.format('%s', Device4Paired), "BluetoothVariables.inc")
        -- local Device4CanPair = Device4[6]
        -- SKIN:Bang("!SetVariable", "Device4CanPair", Device4CanPair)
        -- SKIN:Bang("!SetVariable", "Device4CanPair", Device4CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4CanPair", string.format('%s', Device4CanPair), "BluetoothVariables.inc")
        -- local Device4MajorCategory = Device4[7]
        -- SKIN:Bang("!SetVariable", "Device4MajorCategory", Device4MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device4MajorCategory", Device4MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4MajorCategory", string.format('%s', Device4MajorCategory), "BluetoothVariables.inc")
        -- local Device4MinorCategory = Device4[8]
        -- SKIN:Bang("!SetVariable", "Device4MinorCategory", Device4MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device4MinorCategory", Device4MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4MinorCategory", string.format('%s', Device4MinorCategory), "BluetoothVariables.inc")
        -- local Device4HasBatteryLevel = Device4[9]
        -- SKIN:Bang("!SetVariable", "Device4HasBatteryLevel", Device4HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device4HasBatteryLevel", Device4HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4HasBatteryLevel", string.format('%s', Device4HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device4Battery = Device4[10]
        -- SKIN:Bang("!SetVariable", "Device4Battery", Device4Battery)
        -- SKIN:Bang("!SetVariable", "Device4Battery", Device4Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4Battery", string.format('%s', Device4Battery), "BluetoothVariables.inc")
        -- local Device4IsBLE = Device4[11]
        -- SKIN:Bang("!SetVariable", "Device4IsBLE", Device4IsBLE)
        -- SKIN:Bang("!SetVariable", "Device4IsBLE", Device4IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device4IsBLE", string.format('%s', Device4IsBLE), "BluetoothVariables.inc")

        -- local Device5 = _DivideItems(Devices[PageDevice5])
        -- local Device5Name = Device5[1]
        -- SKIN:Bang("!SetVariable", "Device5Name", Device5Name)
        -- SKIN:Bang("!SetVariable", "Device5Name", Device5Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Name", string.format('%s', Device5Name), "BluetoothVariables.inc")
        -- local Device5Address = Device5[2]
        -- SKIN:Bang("!SetVariable", "Device5Address", Device5Address)
        -- SKIN:Bang("!SetVariable", "Device5Address", Device5Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Address", string.format('%s', Device5Address), "BluetoothVariables.inc")
        -- local Device5Id = Device5[3]
        -- SKIN:Bang("!SetVariable", "Device5Id", Device5Id)
        -- SKIN:Bang("!SetVariable", "Device5Id", Device5Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Id", string.format('%s', Device5Id), "BluetoothVariables.inc")
        -- local Device5Connected = Device5[4]
        -- SKIN:Bang("!SetVariable", "Device5Connected", Device5Connected)
        -- SKIN:Bang("!SetVariable", "Device5Connected", Device5Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Connected", string.format('%s', Device5Connected), "BluetoothVariables.inc")
        -- local Device5Paired = Device5[5]
        -- SKIN:Bang("!SetVariable", "Device5Paired", Device5Paired)
        -- SKIN:Bang("!SetVariable", "Device5Paired", Device5Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Paired", string.format('%s', Device5Paired), "BluetoothVariables.inc")
        -- local Device5CanPair = Device5[6]
        -- SKIN:Bang("!SetVariable", "Device5CanPair", Device5CanPair)
        -- SKIN:Bang("!SetVariable", "Device5CanPair", Device5CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5CanPair", string.format('%s', Device5CanPair), "BluetoothVariables.inc")
        -- local Device5MajorCategory = Device5[7]
        -- SKIN:Bang("!SetVariable", "Device5MajorCategory", Device5MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device5MajorCategory", Device5MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5MajorCategory", string.format('%s', Device5MajorCategory), "BluetoothVariables.inc")
        -- local Device5MinorCategory = Device5[8]
        -- SKIN:Bang("!SetVariable", "Device5MinorCategory", Device5MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device5MinorCategory", Device5MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5MinorCategory", string.format('%s', Device5MinorCategory), "BluetoothVariables.inc")
        -- local Device5HasBatteryLevel = Device5[9]
        -- SKIN:Bang("!SetVariable", "Device5HasBatteryLevel", Device5HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device5HasBatteryLevel", Device5HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5HasBatteryLevel", string.format('%s', Device5HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device5Battery = Device5[10]
        -- SKIN:Bang("!SetVariable", "Device5Battery", Device5Battery)
        -- SKIN:Bang("!SetVariable", "Device5Battery", Device5Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5Battery", string.format('%s', Device5Battery), "BluetoothVariables.inc")
        -- local Device5IsBLE = Device5[11]
        -- SKIN:Bang("!SetVariable", "Device5IsBLE", Device5IsBLE)
        -- SKIN:Bang("!SetVariable", "Device5IsBLE", Device5IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device5IsBLE", string.format('%s', Device5IsBLE), "BluetoothVariables.inc")

        -- local Device6 = _DivideItems(Devices[PageDevice6])
        -- local Device6Name = Device6[1]
        -- SKIN:Bang("!SetVariable", "Device6Name", Device6Name)
        -- SKIN:Bang("!SetVariable", "Device6Name", Device6Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Name", string.format('%s', Device6Name), "BluetoothVariables.inc")
        -- local Device6Address = Device6[2]
        -- SKIN:Bang("!SetVariable", "Device6Address", Device6Address)
        -- SKIN:Bang("!SetVariable", "Device6Address", Device6Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Address", string.format('%s', Device6Address), "BluetoothVariables.inc")
        -- local Device6Id = Device6[3]
        -- SKIN:Bang("!SetVariable", "Device6Id", Device6Id)
        -- SKIN:Bang("!SetVariable", "Device6Id", Device6Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Id", string.format('%s', Device6Id), "BluetoothVariables.inc")
        -- local Device6Connected = Device6[4]
        -- SKIN:Bang("!SetVariable", "Device6Connected", Device6Connected)
        -- SKIN:Bang("!SetVariable", "Device6Connected", Device6Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Connected", string.format('%s', Device6Connected), "BluetoothVariables.inc")
        -- local Device6Paired = Device6[5]
        -- SKIN:Bang("!SetVariable", "Device6Paired", Device6Paired)
        -- SKIN:Bang("!SetVariable", "Device6Paired", Device6Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Paired", string.format('%s', Device6Paired), "BluetoothVariables.inc")
        -- local Device6CanPair = Device6[6]
        -- SKIN:Bang("!SetVariable", "Device6CanPair", Device6CanPair)
        -- SKIN:Bang("!SetVariable", "Device6CanPair", Device6CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6CanPair", string.format('%s', Device6CanPair), "BluetoothVariables.inc")
        -- local Device6MajorCategory = Device6[7]
        -- SKIN:Bang("!SetVariable", "Device6MajorCategory", Device6MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device6MajorCategory", Device6MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6MajorCategory", string.format('%s', Device6MajorCategory), "BluetoothVariables.inc")
        -- local Device6MinorCategory = Device6[8]
        -- SKIN:Bang("!SetVariable", "Device6MinorCategory", Device6MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device6MinorCategory", Device6MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6MinorCategory", string.format('%s', Device6MinorCategory), "BluetoothVariables.inc")
        -- local Device6HasBatteryLevel = Device6[9]
        -- SKIN:Bang("!SetVariable", "Device6HasBatteryLevel", Device6HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device6HasBatteryLevel", Device6HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6HasBatteryLevel", string.format('%s', Device6HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device6Battery = Device6[10]
        -- SKIN:Bang("!SetVariable", "Device6Battery", Device6Battery)
        -- SKIN:Bang("!SetVariable", "Device6Battery", Device6Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6Battery", string.format('%s', Device6Battery), "BluetoothVariables.inc")
        -- local Device6IsBLE = Device6[11]
        -- SKIN:Bang("!SetVariable", "Device6IsBLE", Device6IsBLE)
        -- SKIN:Bang("!SetVariable", "Device6IsBLE", Device6IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device6IsBLE", string.format('%s', Device6IsBLE), "BluetoothVariables.inc")

        -- local Device7 = _DivideItems(Devices[PageDevice7])
        -- local Device7Name = Device7[1]
        -- SKIN:Bang("!SetVariable", "Device7Name", Device7Name)
        -- SKIN:Bang("!SetVariable", "Device7Name", Device7Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Name", string.format('%s', Device7Name), "BluetoothVariables.inc")
        -- local Device7Address = Device7[2]
        -- SKIN:Bang("!SetVariable", "Device7Address", Device7Address)
        -- SKIN:Bang("!SetVariable", "Device7Address", Device7Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Address", string.format('%s', Device7Address), "BluetoothVariables.inc")
        -- local Device7Id = Device7[3]
        -- SKIN:Bang("!SetVariable", "Device7Id", Device7Id)
        -- SKIN:Bang("!SetVariable", "Device7Id", Device7Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Id", string.format('%s', Device7Id), "BluetoothVariables.inc")
        -- local Device7Connected = Device7[4]
        -- SKIN:Bang("!SetVariable", "Device7Connected", Device7Connected)
        -- SKIN:Bang("!SetVariable", "Device7Connected", Device7Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Connected", string.format('%s', Device7Connected), "BluetoothVariables.inc")
        -- local Device7Paired = Device7[5]
        -- SKIN:Bang("!SetVariable", "Device7Paired", Device7Paired)
        -- SKIN:Bang("!SetVariable", "Device7Paired", Device7Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Paired", string.format('%s', Device7Paired), "BluetoothVariables.inc")
        -- local Device7CanPair = Device7[6]
        -- SKIN:Bang("!SetVariable", "Device7CanPair", Device7CanPair)
        -- SKIN:Bang("!SetVariable", "Device7CanPair", Device7CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7CanPair", string.format('%s', Device7CanPair), "BluetoothVariables.inc")
        -- local Device7MajorCategory = Device7[7]
        -- SKIN:Bang("!SetVariable", "Device7MajorCategory", Device7MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device7MajorCategory", Device7MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7MajorCategory", string.format('%s', Device7MajorCategory), "BluetoothVariables.inc")
        -- local Device7MinorCategory = Device7[8]
        -- SKIN:Bang("!SetVariable", "Device7MinorCategory", Device7MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device7MinorCategory", Device7MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7MinorCategory", string.format('%s', Device7MinorCategory), "BluetoothVariables.inc")
        -- local Device7HasBatteryLevel = Device7[9]
        -- SKIN:Bang("!SetVariable", "Device7HasBatteryLevel", Device7HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device7HasBatteryLevel", Device7HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7HasBatteryLevel", string.format('%s', Device7HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device7Battery = Device7[10]
        -- SKIN:Bang("!SetVariable", "Device7Battery", Device7Battery)
        -- SKIN:Bang("!SetVariable", "Device7Battery", Device7Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7Battery", string.format('%s', Device7Battery), "BluetoothVariables.inc")
        -- local Device7IsBLE = Device7[11]
        -- SKIN:Bang("!SetVariable", "Device7IsBLE", Device7IsBLE)
        -- SKIN:Bang("!SetVariable", "Device7IsBLE", Device7IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device7IsBLE", string.format('%s', Device7IsBLE), "BluetoothVariables.inc")

        -- local Device8 = _DivideItems(Devices[PageDevice8])
        -- local Device8Name = Device8[1]
        -- SKIN:Bang("!SetVariable", "Device8Name", Device8Name)
        -- SKIN:Bang("!SetVariable", "Device8Name", Device8Name, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Name", string.format('%s', Device8Name), "BluetoothVariables.inc")
        -- local Device8Address = Device8[2]
        -- SKIN:Bang("!SetVariable", "Device8Address", Device8Address)
        -- SKIN:Bang("!SetVariable", "Device8Address", Device8Address, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Address", string.format('%s', Device8Address), "BluetoothVariables.inc")
        -- local Device8Id = Device8[3]
        -- SKIN:Bang("!SetVariable", "Device8Id", Device8Id)
        -- SKIN:Bang("!SetVariable", "Device8Id", Device8Id, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Id", string.format('%s', Device8Id), "BluetoothVariables.inc")
        -- local Device8Connected = Device8[4]
        -- SKIN:Bang("!SetVariable", "Device8Connected", Device8Connected)
        -- SKIN:Bang("!SetVariable", "Device8Connected", Device8Connected, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Connected", string.format('%s', Device8Connected), "BluetoothVariables.inc")
        -- local Device8Paired = Device8[5]
        -- SKIN:Bang("!SetVariable", "Device8Paired", Device8Paired)
        -- SKIN:Bang("!SetVariable", "Device8Paired", Device8Paired, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Paired", string.format('%s', Device8Paired), "BluetoothVariables.inc")
        -- local Device8CanPair = Device8[6]
        -- SKIN:Bang("!SetVariable", "Device8CanPair", Device8CanPair)
        -- SKIN:Bang("!SetVariable", "Device8CanPair", Device8CanPair, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8CanPair", string.format('%s', Device8CanPair), "BluetoothVariables.inc")
        -- local Device8MajorCategory = Device8[7]
        -- SKIN:Bang("!SetVariable", "Device8MajorCategory", Device8MajorCategory)
        -- SKIN:Bang("!SetVariable", "Device8MajorCategory", Device8MajorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8MajorCategory", string.format('%s', Device8MajorCategory), "BluetoothVariables.inc")
        -- local Device8MinorCategory = Device8[8]
        -- SKIN:Bang("!SetVariable", "Device8MinorCategory", Device8MinorCategory)
        -- SKIN:Bang("!SetVariable", "Device8MinorCategory", Device8MinorCategory, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8MinorCategory", string.format('%s', Device8MinorCategory), "BluetoothVariables.inc")
        -- local Device8HasBatteryLevel = Device8[9]
        -- SKIN:Bang("!SetVariable", "Device8HasBatteryLevel", Device8HasBatteryLevel)
        -- SKIN:Bang("!SetVariable", "Device8HasBatteryLevel", Device8HasBatteryLevel, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8HasBatteryLevel", string.format('%s', Device8HasBatteryLevel), "BluetoothVariables.inc")
        -- local Device8Battery = Device8[10]
        -- SKIN:Bang("!SetVariable", "Device8Battery", Device8Battery)
        -- SKIN:Bang("!SetVariable", "Device8Battery", Device8Battery, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8Battery", string.format('%s', Device8Battery), "BluetoothVariables.inc")
        -- local Device8IsBLE = Device8[11]
        -- SKIN:Bang("!SetVariable", "Device8IsBLE", Device8IsBLE)
        -- SKIN:Bang("!SetVariable", "Device8IsBLE", Device8IsBLE, "Droptop\\Other\\Apps\\Wifi\\Folder")
        -- SKIN:Bang("!WriteKeyValue", "Variables", "Device8IsBLE", string.format('%s', Device8IsBLE), "BluetoothVariables.inc")
    end

    SKIN:Bang("!Update", "Droptop\\Other\\Apps\\Wifi")
    SKIN:Bang("!Redraw", "Droptop\\Other\\Apps\\Wifi")
    SKIN:Bang("!Refresh", "Droptop\\Other\\Apps\\Wifi\\Folder")
end

function _DivideDevices(DevicesStr)
    local Devices = {}
    for section in DevicesStr:gmatch("[^;]+") do
        table.insert(Devices, section)
    end
    return Devices
end

function _DivideItems(DeviceStr)
    local Device = {}
    for section in DeviceStr:gmatch("[^|]+") do
        table.insert(Device, section)
    end
    return Device
end
