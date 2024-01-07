function ConvertToHex(color) -- Converts RGB colors to HEX
	local hex = {}

	for rgb in color:gmatch('%d+') do
		table.insert(hex, ('%02X'):format(tonumber(rgb)))
	end

	return table.concat(hex)
end

function ConvertToRGB(color) -- Converts HEX colors to RGB
	local rgb = {}

	for hex in color:gmatch('..') do
		table.insert(rgb, tonumber(hex, 16))
	end

	return table.concat(rgb, ',')
end