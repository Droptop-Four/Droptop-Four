function Initialize()
    _Populate(1, 2)

    SKIN:Bang("!SetVariable", "PageNumber", 0)
    SKIN:Bang("!SetVariable", "PageDevice1", 1)
    SKIN:Bang("!SetVariable", "PageDevice2", 2)
end

function RefreshStatus()
    local Status = tonumber(SKIN:ReplaceVariables('[&BluetoothDevicesMeasure:BluetoothStatus()]'))
    local OldStatus = tonumber(SKIN:GetVariable('Status'))

    if (OldStatus ~= Status) then
        SKIN:Bang("!SetVariable", "Status", Status)
        SKIN:Bang("!WriteKeyValue", "Variables", "Status", string.format('%s', Status), "Folder4.ini")
        SKIN:Bang("!UpdateMeter", "1Icon", "Folder4.ini")
        SKIN:Bang("!Redraw", "Folder4.ini")
    end
end

function Refresh()
    local DevicesString = SKIN:ReplaceVariables('[&BluetoothDevicesMeasure:AvailableDevices()]')

    local OldDevicesString = SKIN:GetVariable('Devices')

    if ((OldDevicesString ~= DevicesString) and (DevicesString ~= "")) then
        SKIN:Bang("!SetVariable", "Devices", DevicesString)
        SKIN:Bang("!WriteKeyValue", "Variables", "Devices", string.format('%s', DevicesString), "Folder4.ini")

        _Populate(1, 2)

        SKIN:Bang("!SetVariable", "PageNumber", 0)
        SKIN:Bang("!SetVariable", "PageDevice1", 1)
        SKIN:Bang("!SetVariable", "PageDevice2", 2)

        local Devices = _DivideDevices(DevicesString)

        SKIN:Bang("!SetVariable", "DevicesNumber", #Devices)
        SKIN:Bang("!WriteKeyValue", "Variables", "DevicesNumber", string.format('%s', #Devices), "Folder4.ini")
    end
end

function PageDown()
    local PageNumber = tonumber(SKIN:GetVariable('PageNumber'))
    if (PageNumber > 0) then
        PageNumber = PageNumber - 1
        local PageDevice1 = PageNumber + 1
        local PageDevice2 = PageNumber + 2
        SKIN:Bang("!SetVariable", "PageNumber", PageNumber)
        SKIN:Bang("!SetVariable", "PageDevice1", PageDevice1)
        SKIN:Bang("!SetVariable", "PageDevice2", PageDevice2)

        _Populate(PageDevice1, PageDevice2)
    end
end

function PageUp()
    local PageNumber = tonumber(SKIN:GetVariable('PageNumber'))
    local DevicesNumber = SKIN:GetVariable('DevicesNumber')
    if (PageNumber < (tonumber(DevicesNumber) - 2)) then
        PageNumber = PageNumber + 1
        local PageDevice1 = PageNumber + 1
        local PageDevice2 = PageNumber + 2
        SKIN:Bang("!SetVariable", "PageNumber", PageNumber)
        SKIN:Bang("!SetVariable", "PageDevice1", PageDevice1)
        SKIN:Bang("!SetVariable", "PageDevice2", PageDevice2)

        _Populate(PageDevice1, PageDevice2)
    end
end

---- [Private functions] ----

function _Populate(PageDevice1, PageDevice2)
    local DevicesStr = SKIN:GetVariable('Devices')

    local Devices = _DivideDevices(DevicesStr)

    local Device1 = _DivideItems(Devices[PageDevice1])
    local Device1Name = Device1[1]
    SKIN:Bang("!SetVariable", "Device1Name", Device1Name)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1Name", string.format('%s', Device1Name), "Folder4.ini")
    local Device1Connected = Device1[2]
    SKIN:Bang("!SetVariable", "Device1Connected", Device1Connected)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1Connected", string.format('%s', Device1Connected), "Folder4.ini")
    local Device1Authenticated = Device1[3]
    SKIN:Bang("!SetVariable", "Device1Authenticated", Device1Authenticated)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1Authenticated", string.format('%s', Device1Authenticated),
        "Folder4.ini")
    local Device1Remembered = Device1[4]
    SKIN:Bang("!SetVariable", "Device1Remembered", Device1Remembered)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1Remembered", string.format('%s', Device1Remembered), "Folder4.ini")
    local Device1LastSeen = Device1[5]
    SKIN:Bang("!SetVariable", "Device1LastSeen", Device1LastSeen)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1LastSeen", string.format('%s', Device1LastSeen), "Folder4.ini")
    local Device1LastUsed = Device1[6]
    SKIN:Bang("!SetVariable", "Device1LastUsed", Device1LastUsed)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device1LastUsed", string.format('%s', Device1LastUsed), "Folder4.ini")

    local Device2 = _DivideItems(Devices[PageDevice2])
    local Device2Name = Device2[1]
    SKIN:Bang("!SetVariable", "Device2Name", Device2Name)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2Name", string.format('%s', Device2Name), "Folder4.ini")
    local Device2Connected = Device2[2]
    SKIN:Bang("!SetVariable", "Device2Connected", Device2Connected)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2Connected", string.format('%s', Device2Connected), "Folder4.ini")
    local Device2Authenticated = Device2[3]
    SKIN:Bang("!SetVariable", "Device2Authenticated", Device2Authenticated)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2Authenticated", string.format('%s', Device2Authenticated),
        "Folder4.ini")
    local Device2Remembered = Device2[4]
    SKIN:Bang("!SetVariable", "Device2Remembered", Device2Remembered)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2Remembered", string.format('%s', Device2Remembered), "Folder4.ini")
    local Device2LastSeen = Device2[5]
    SKIN:Bang("!SetVariable", "Device2LastSeen", Device2LastSeen)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2LastSeen", string.format('%s', Device2LastSeen), "Folder4.ini")
    local Device2LastUsed = Device2[6]
    SKIN:Bang("!SetVariable", "Device2LastUsed", Device2LastUsed)
    SKIN:Bang("!WriteKeyValue", "Variables", "Device2LastUsed", string.format('%s', Device2LastUsed), "Folder4.ini")
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
